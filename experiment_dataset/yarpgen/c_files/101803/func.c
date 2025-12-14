/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101803
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((var_9) % (((/* implicit */long long int) ((/* implicit */int) var_6)))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
        {
            var_10 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_1]))));
            var_11 = (-(var_9));
            /* LoopSeq 2 */
            for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                arr_10 [i_2] [9LL] [i_1] [i_2] = ((int) arr_8 [i_2 + 2] [i_2] [i_2 - 1]);
                arr_11 [i_0] [(signed char)5] [i_2] = ((/* implicit */_Bool) ((567221416U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)2277)))));
                arr_12 [i_2] = ((/* implicit */unsigned int) -6);
                var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)12445)) : (((((/* implicit */_Bool) 3727745885U)) ? (((/* implicit */int) (unsigned short)53091)) : (((/* implicit */int) (signed char)2))))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) (signed char)60))))));
                var_14 = ((/* implicit */short) var_0);
                var_15 = (~(((/* implicit */int) ((unsigned char) 3727745880U))));
            }
        }
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))));
            var_16 -= ((/* implicit */_Bool) (unsigned short)53091);
            arr_19 [i_4] [i_0] = ((/* implicit */short) var_3);
            arr_20 [i_0] [i_4] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 3727745880U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8)));
        }
        arr_21 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
    {
        arr_24 [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)))));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_5))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (567221432U))))));
        }
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            arr_30 [i_5] [i_7] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (signed char)15))));
            arr_31 [i_5] = ((/* implicit */long long int) ((unsigned int) (_Bool)1));
        }
    }
    for (long long int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) min((var_20), (var_8)));
        arr_34 [i_8] = ((/* implicit */unsigned int) var_5);
    }
    var_21 = ((/* implicit */long long int) var_6);
}
