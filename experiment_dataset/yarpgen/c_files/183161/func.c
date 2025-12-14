/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183161
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
    var_13 = min((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) var_4))))), (max((((((/* implicit */_Bool) var_8)) ? (18446744073709551615ULL) : (1ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (var_6)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) (_Bool)1);
                            var_15 = ((/* implicit */long long int) arr_2 [i_1 - 2]);
                            var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)67))));
                    var_18 |= ((/* implicit */unsigned char) (-(arr_5 [i_0] [i_0])));
                    arr_16 [11ULL] [i_5] [i_2] [(unsigned short)14] = ((/* implicit */_Bool) var_1);
                }
                var_19 = ((/* implicit */short) var_7);
                arr_17 [i_0] [i_1 + 3] = ((/* implicit */_Bool) -1LL);
            }
            for (int i_6 = 1; i_6 < 19; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_1 + 1] [i_6 + 1] [i_6] [i_6])) && (((/* implicit */_Bool) arr_24 [i_1 + 3] [i_6 + 1] [17] [17] [17]))));
                            arr_28 [i_0] [i_7] [i_6 - 1] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_21 [i_1] [i_1] [i_1 + 3] [i_1])) - (4594)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) var_5);
                arr_29 [i_6] [i_0] [i_0] |= ((/* implicit */long long int) ((15239416486113348587ULL) ^ (((/* implicit */unsigned long long int) (+(539758284))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (arr_15 [i_0] [i_0] [i_0] [i_1] [i_9])));
                var_23 = ((/* implicit */signed char) ((((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [(_Bool)1] [(unsigned char)13] [i_9])))));
                var_24 |= ((/* implicit */long long int) var_3);
                arr_33 [i_0] [i_9] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)44988))))) ? (((/* implicit */int) arr_27 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_30 [i_9] [i_1 - 2] [i_1 + 1] [i_0]))));
                var_25 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
            }
            var_26 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_1] [i_1 + 3] [i_1 + 3])) && (((/* implicit */_Bool) arr_11 [i_1 + 2] [0LL] [i_1 - 2] [0LL]))));
            var_27 = ((/* implicit */unsigned long long int) var_3);
        }
        arr_34 [i_0] = ((/* implicit */int) ((((arr_12 [11LL] [i_0] [11LL] [i_0] [i_0]) || (((/* implicit */_Bool) 2672453356712199781ULL)))) ? (((13940435678035342938ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    }
    /* LoopNest 3 */
    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            for (int i_12 = 1; i_12 < 15; i_12 += 2) 
            {
                {
                    var_28 = ((/* implicit */long long int) var_7);
                    var_29 = ((/* implicit */_Bool) -1LL);
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */unsigned long long int) 2147483647)) : (18446744073709551615ULL)));
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        for (unsigned short i_14 = 2; i_14 < 16; i_14 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) var_12))));
                                var_32 = ((/* implicit */unsigned long long int) var_9);
                                var_33 |= ((/* implicit */unsigned long long int) max((var_9), (((/* implicit */short) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
