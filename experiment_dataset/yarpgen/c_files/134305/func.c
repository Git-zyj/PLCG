/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134305
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
    var_10 = ((/* implicit */int) max((var_10), ((~(((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_4))))))));
    var_11 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18))) : (18446744073709551615ULL)))) ? (max((((/* implicit */unsigned long long int) var_4)), (var_9))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (var_6))))))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) var_4))))) - (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) ^ ((((_Bool)1) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)28997)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-1114597258335036221LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_7), (var_5)))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) min((((arr_1 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
        var_13 = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_5 [i_0] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((arr_3 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))), (((((/* implicit */unsigned long long int) -7013010534123589193LL)) % (10971682663593699092ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0])))) + (((/* implicit */int) arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_4 + 1] [i_4 - 1] [i_4 - 1])) & (((/* implicit */int) arr_7 [i_4 - 1]))));
                                arr_18 [i_1] [i_2] [i_2] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_4] [i_2] [i_2] [i_4 + 1]))));
                                arr_19 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_2] [i_3] [i_4 + 1]))) != (arr_10 [i_2])))) * (((arr_3 [i_2]) ? (((/* implicit */int) arr_13 [i_1] [i_2])) : (((/* implicit */int) arr_6 [i_1]))))));
                                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_2] [i_3] [i_3]))) : (arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_5])));
                                arr_20 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_4 - 1] [i_1] [i_4 + 1] [i_4 - 1])) ? (arr_16 [i_1] [i_4 + 1] [i_1] [i_1] [i_4 + 1]) : (arr_16 [i_4 - 1] [i_4 - 1] [i_3] [i_4 - 1] [i_5])));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_15 [i_2] [i_2] [i_1] [i_1]))));
                }
            } 
        } 
        var_17 = ((/* implicit */short) ((arr_9 [i_1]) - (arr_9 [i_1])));
        var_18 = ((/* implicit */unsigned int) arr_13 [i_1] [i_1]);
        var_19 = arr_9 [i_1];
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 4) 
        {
            for (unsigned short i_8 = 3; i_8 < 11; i_8 += 3) 
            {
                {
                    arr_28 [i_6] = ((/* implicit */short) ((((((/* implicit */int) arr_25 [i_6] [i_6] [i_6])) + (2147483647))) >> (((max(((~(arr_10 [i_6]))), (min((((/* implicit */unsigned long long int) arr_2 [i_6])), (arr_9 [i_7]))))) - (6520600188366370638ULL)))));
                    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (((_Bool)1) || ((_Bool)0)))), (arr_12 [i_7] [i_7])));
                }
            } 
        } 
        arr_29 [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((134086656U), (((/* implicit */unsigned int) min((arr_27 [i_6]), (((/* implicit */unsigned short) arr_25 [i_6] [i_6] [i_6])))))))), (((((/* implicit */_Bool) arr_13 [i_6] [i_6])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1945631418)) ? (((/* implicit */int) (short)-21)) : (((/* implicit */int) arr_2 [i_6]))))) : (((arr_6 [i_6]) ? (arr_23 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6] [i_6] [i_6])))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
    {
        arr_32 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_9])) * (((/* implicit */int) arr_22 [i_9]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_9]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_9]))) - (arr_10 [i_9])))));
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                {
                    arr_38 [i_9] [i_9] [i_11] = ((/* implicit */unsigned short) ((arr_10 [i_11]) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_9] [i_9] [i_9] [i_9])))))));
                    var_22 += ((((/* implicit */_Bool) arr_31 [i_9] [i_10])) ? (((/* implicit */int) arr_31 [i_11] [i_10])) : (((/* implicit */int) arr_31 [i_10] [i_11])));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (1793722950035596287ULL)));
    }
}
