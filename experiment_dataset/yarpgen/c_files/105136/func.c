/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105136
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_3))));
                        var_18 = ((/* implicit */unsigned int) (!((((+(((/* implicit */int) var_9)))) <= (((/* implicit */int) arr_1 [i_2] [i_1 - 2]))))));
                        var_19 *= ((/* implicit */unsigned short) ((arr_12 [i_1] [i_1] [i_1 - 1] [i_1 - 2]) <= (((/* implicit */long long int) 4294967295U))));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] = (~(max((var_10), (min((4294967279U), (((/* implicit */unsigned int) arr_7 [i_0] [i_2])))))));
                    }
                } 
            } 
        } 
        var_20 &= ((/* implicit */long long int) max((max((var_10), (((/* implicit */unsigned int) var_8)))), (min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0] [i_0]))))), (min((((/* implicit */unsigned int) arr_0 [i_0])), (var_16)))))));
        arr_14 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    /* LoopSeq 3 */
    for (short i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        var_21 ^= ((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4])))))));
        arr_17 [i_4] = ((/* implicit */long long int) ((((max((2U), (((/* implicit */unsigned int) -1834924169)))) >> ((((~(((/* implicit */int) arr_10 [i_4] [(unsigned short)9] [i_4] [i_4] [i_4])))) + (14830))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4]))) : (0U)))) ? (((/* implicit */int) arr_15 [i_4])) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)60436)) : (((/* implicit */int) (signed char)70)))))))));
    }
    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        var_22 = ((/* implicit */short) (-(var_12)));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_5] [i_5] [i_5]), (((/* implicit */unsigned short) arr_7 [i_5] [i_5]))))) ? ((~(((/* implicit */int) arr_7 [i_5] [i_5])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_5]))) <= (4294967295U)))))))));
        var_24 += ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (1536338238)));
        var_25 -= ((/* implicit */unsigned int) ((short) (-(max((4294967294U), (((/* implicit */unsigned int) arr_19 [i_5] [i_5])))))));
        arr_21 [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (arr_6 [i_5] [i_5] [i_5]))))));
    }
    /* vectorizable */
    for (long long int i_6 = 2; i_6 < 20; i_6 += 2) 
    {
        arr_25 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_12)) < (((((/* implicit */_Bool) arr_9 [i_6] [i_6])) ? (arr_4 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) arr_5 [i_6] [i_6]))))));
        var_26 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_14)) ? (3ULL) : (18446744073709551601ULL)))));
    }
}
