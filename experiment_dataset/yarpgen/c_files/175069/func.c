/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175069
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
    var_14 = ((/* implicit */long long int) (+((((!(var_2))) ? ((~(var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_15 = arr_1 [0U] [i_0];
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : ((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? ((((!(((/* implicit */_Bool) arr_0 [0U])))) ? (((((/* implicit */_Bool) arr_0 [(short)7])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((arr_1 [i_0 - 1] [(short)0]) ? (((/* implicit */int) arr_1 [i_0] [4LL])) : (((/* implicit */int) arr_0 [(short)4])))))) : ((+(((/* implicit */int) arr_0 [i_0])))))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) (-(arr_4 [i_1])))) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)8])))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))));
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_2 [i_1])))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_1 [i_1] [9LL])))))));
        var_19 &= ((/* implicit */int) arr_0 [(_Bool)1]);
        var_20 = (!(((/* implicit */_Bool) arr_2 [(short)4])));
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (arr_3 [i_1]))))))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : ((+((-(var_9)))))));
    var_23 ^= ((/* implicit */unsigned int) var_2);
}
