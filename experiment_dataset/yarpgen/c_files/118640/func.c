/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118640
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */int) var_11)) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)37))))))))));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_18 |= ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (unsigned short)65511)) : (((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */int) var_11)) >> (((arr_1 [i_0] [i_0]) - (1785781066U))))))), (((/* implicit */int) ((((unsigned int) var_5)) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))))))));
        arr_3 [i_0 - 1] [3LL] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_4)) || ((_Bool)0))) && (((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])))) ? (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (939524096U))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [i_0 + 1])))))));
        arr_4 [i_0] [i_0] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 6773212438990338707LL)))))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << (((((((/* implicit */_Bool) max(((unsigned short)65523), (((/* implicit */unsigned short) var_10))))) ? (max((var_2), (((/* implicit */long long int) arr_2 [i_0 - 1])))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)162)) + (((/* implicit */int) var_0))))))) - (1242157775126823621LL)))));
    }
    for (unsigned short i_1 = 1; i_1 < 24; i_1 += 1) 
    {
        var_20 ^= ((/* implicit */signed char) (~(min((((unsigned int) arr_6 [(_Bool)1] [i_1])), (2562844796U)))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)27568)))))));
        var_22 &= ((/* implicit */unsigned char) (~(max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)37957))))), (((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (unsigned short)62057))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_8 [i_2])) != (((((/* implicit */int) (unsigned char)249)) / (((/* implicit */int) arr_2 [i_2]))))))))))));
        arr_11 [i_2] = var_15;
        arr_12 [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)0))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_24 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) var_10))))) ^ (((var_10) ? (2825821581U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
        arr_15 [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)17)) % (((/* implicit */int) var_10))));
    }
    var_26 = ((/* implicit */long long int) max((min((min((((/* implicit */short) var_16)), (var_0))), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-12695))))))), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) < (var_12)))) == (((/* implicit */int) var_8)))))));
    var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) & (((/* implicit */int) var_11))));
}
