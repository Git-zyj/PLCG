/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178563
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
    var_19 |= 0U;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-25604))))));
    }
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_1] [i_2] = ((/* implicit */short) (-(17575415224613281365ULL)));
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */short) arr_4 [i_1]);
            var_21 = ((/* implicit */unsigned long long int) ((((2698893025U) | (var_6))) != (((/* implicit */unsigned int) ((var_10) >> (((/* implicit */int) arr_0 [i_1])))))));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            arr_12 [i_1] [i_1] [i_3] = ((/* implicit */_Bool) 871328849096270251ULL);
            arr_13 [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8603)) && (((/* implicit */_Bool) 0ULL)))))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) ((var_10) | (((/* implicit */int) arr_0 [i_1 + 1]))));
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 7; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) var_3))))));
                            arr_27 [i_1] [i_4] [i_1] [i_6] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_9 [i_1 + 1] [i_5 + 1] [i_1])) ^ (18446744073709551615ULL)));
                            var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_5 - 1])) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)108)))));
                        }
                    } 
                } 
            } 
            arr_28 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2230337672504474084LL)) ? (((/* implicit */unsigned long long int) 7069334791074676792LL)) : (14460501829263178279ULL)));
            arr_29 [i_1] = ((/* implicit */unsigned long long int) var_13);
        }
        var_25 *= ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_1] [i_1] [(_Bool)1])) % (((/* implicit */int) (unsigned short)55257))))), (-2147890718321627561LL)))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 1) 
    {
        for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_10 = 2; i_10 < 13; i_10 += 3) 
                {
                    for (unsigned int i_11 = 2; i_11 < 14; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            {
                                arr_46 [i_10] [i_11] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_31 [i_11 - 2])) ? (arr_31 [i_11 - 1]) : (((/* implicit */int) arr_40 [i_11 - 1] [i_11])))), (((/* implicit */int) (signed char)0))));
                                var_26 = ((/* implicit */long long int) 17575415224613281350ULL);
                                arr_47 [i_12] [i_11] [i_10] [i_11] [(short)0] = ((/* implicit */unsigned int) arr_35 [i_12] [i_10 - 2] [i_9] [1ULL]);
                                arr_48 [i_8 + 1] [i_9] [i_9] [i_11] [i_9] [i_12] = max((1596074272U), (((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */_Bool) -425467197)) || (((/* implicit */_Bool) (short)-4108))))), ((short)-31424)))));
                                var_27 = ((/* implicit */short) arr_34 [i_8]);
                            }
                        } 
                    } 
                } 
                arr_49 [i_8] [0U] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_45 [i_8 - 1] [i_8 - 1] [i_9]), (((/* implicit */unsigned long long int) arr_0 [i_9]))))) ? (((arr_37 [i_8 - 1]) >> (((((17575415224613281352ULL) >> (((((/* implicit */int) var_8)) - (90))))) - (127877966ULL))))) : (((int) arr_42 [i_8 + 1] [i_9]))));
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) min((((/* implicit */long long int) arr_1 [i_8])), (max((arr_34 [i_8 + 1]), (((/* implicit */long long int) ((unsigned int) var_3))))))))));
            }
        } 
    } 
}
