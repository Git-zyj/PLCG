/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111888
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) max((var_10), (var_11)))) + (((/* implicit */int) min((((/* implicit */short) ((_Bool) var_12))), (var_8))))));
    var_19 = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) min((var_5), (var_5)))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_9)))))))) : ((-(max((((/* implicit */unsigned long long int) var_16)), (var_3)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0]))));
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) << (((((((/* implicit */int) arr_1 [i_0] [i_0])) + (26693))) - (27)))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_5 [i_1]))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) min(((+(((/* implicit */int) var_10)))), (((/* implicit */int) arr_0 [i_1]))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_5))));
        var_25 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [16ULL] [16ULL]))));
    }
    for (unsigned short i_3 = 2; i_3 < 6; i_3 += 4) 
    {
        arr_14 [i_3] |= ((/* implicit */short) (-(((/* implicit */int) ((short) ((_Bool) arr_13 [i_3]))))));
        arr_15 [i_3] = ((((((/* implicit */_Bool) arr_11 [i_3] [i_3])) && (((/* implicit */_Bool) arr_11 [i_3] [(unsigned char)0])))) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) >= (var_14)))));
        arr_16 [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_3 + 2])) | (((/* implicit */int) arr_12 [i_3 - 2]))))) ? ((+(((/* implicit */int) max((((/* implicit */unsigned short) var_17)), (arr_4 [(signed char)19])))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [(short)20])))) && ((!(((/* implicit */_Bool) var_1)))))))));
    }
}
