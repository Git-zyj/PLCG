/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174633
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
    var_13 ^= ((/* implicit */long long int) max(((!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_9))))))), (var_7)));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_0 + 1] [i_0 + 2]), (((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2])) : (((/* implicit */int) var_4))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            var_14 &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (507100017U)))));
            var_15 = (+(((((/* implicit */int) arr_7 [i_0])) / (((/* implicit */int) arr_5 [i_1 - 4] [i_0])))));
            var_16 &= ((/* implicit */unsigned int) (~(arr_1 [i_0 - 1] [i_1 + 2])));
        }
        arr_8 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) 13909651357012960769ULL))))), ((short)-17)));
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 22; i_2 += 4) /* same iter space */
    {
        arr_13 [i_2] [i_2] = var_7;
        var_17 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-34))));
    }
    var_18 = var_2;
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-17)) + (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        var_20 ^= ((/* implicit */int) ((arr_1 [i_3] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) (short)-16)))));
        var_21 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (short)-1157))))) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [i_3] [i_3]))))));
        var_22 = ((/* implicit */_Bool) ((((arr_0 [i_3] [i_3]) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_1)))))));
    }
}
