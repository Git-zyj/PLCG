/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151440
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) max(((-(9223372036854775807LL))), (((/* implicit */long long int) max((arr_4 [i_1 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]), (arr_4 [i_1 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]))))));
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (short)-15986))));
                            }
                        } 
                    } 
                    var_15 |= ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1] [i_2] [i_2] [(_Bool)1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        for (unsigned short i_6 = 1; i_6 < 15; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    for (int i_8 = 3; i_8 < 15; i_8 += 2) 
                    {
                        {
                            var_16 |= ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [i_8] [i_7])), (arr_21 [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7] [i_7] [i_7]))) : (((8179637256879394040LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))), ((((!(((/* implicit */_Bool) -8179637256879394066LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 5517717362309235075LL)) && (((/* implicit */_Bool) -8179637256879394053LL)))))) : (((((/* implicit */_Bool) -9223372036854775782LL)) ? (-9223372036854775807LL) : (((/* implicit */long long int) 4131097190U))))))));
                            var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_6 + 1])) && (((/* implicit */_Bool) arr_18 [i_6 + 1] [i_6 + 1] [13ULL] [i_8 + 1]))))), (max((((/* implicit */unsigned int) -893917782)), (0U)))));
                            var_18 ^= ((/* implicit */int) max((((((((/* implicit */_Bool) 244931983)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL))) / ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-13))) : (-5517717362309235054LL))))), (((/* implicit */long long int) (short)5999))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        {
                            arr_30 [(short)16] &= ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_19 [6U] [6U] [6])), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)24))) | (263811437U)))));
                            arr_31 [i_5] [i_6] [i_6] [i_9] [(unsigned short)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_19 [i_5] [i_6] [i_9])), (var_8))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6 + 2] [i_5] [i_9 + 1])))))) ? (((/* implicit */unsigned long long int) ((8747403826875968552LL) | (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5] [i_9 + 1] [i_9 + 1])))))) : (min((min((arr_13 [i_5]), (((/* implicit */unsigned long long int) (unsigned char)27)))), (max((18185250352687007268ULL), (((/* implicit */unsigned long long int) -893917782))))))));
                            var_19 |= min((((((/* implicit */_Bool) max((arr_13 [10LL]), (((/* implicit */unsigned long long int) (signed char)66))))) ? (max((12460228248643556581ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_13), (((/* implicit */unsigned char) arr_19 [(_Bool)1] [(_Bool)1] [i_9])))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [i_5] [i_6] [i_5] [i_6 + 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 14; i_11 += 4) 
                {
                    for (unsigned int i_12 = 3; i_12 < 13; i_12 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) (-((~(((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [(unsigned short)12] [i_6] [i_5] [i_12]))) | (6027858429698226600LL)))))));
                            arr_37 [i_5] [i_6 - 1] [i_11 + 1] [i_12] = ((/* implicit */signed char) (short)-1);
                            arr_38 [i_5] [i_6] [i_6] [i_6] [i_5] [i_12 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9782556010997347578ULL)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_15 = 1; i_15 < 15; i_15 += 1) 
                {
                    for (long long int i_16 = 1; i_16 < 15; i_16 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_17 = 1; i_17 < 17; i_17 += 4) 
                            {
                                var_22 = ((/* implicit */long long int) 536870912U);
                                var_23 = ((/* implicit */long long int) 2051366697U);
                            }
                            var_24 += ((/* implicit */short) (~(((((/* implicit */_Bool) arr_52 [i_15] [i_15 + 2] [i_15 + 3] [i_15 + 2] [i_15 + 1])) ? (((/* implicit */int) arr_52 [i_15 + 3] [i_15 + 2] [i_15 + 3] [i_15 + 3] [i_15 + 1])) : (((/* implicit */int) arr_52 [i_15] [i_15 + 2] [i_15 + 3] [14U] [i_15 + 1]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_18 = 2; i_18 < 15; i_18 += 3) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (unsigned char i_20 = 0; i_20 < 18; i_20 += 4) 
                        {
                            {
                                var_25 = ((arr_60 [i_13] [i_19] [i_19]) ? ((+((-(2956817666U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_45 [i_13] [i_14] [i_18 + 3] [(_Bool)1]), (arr_47 [i_18 + 1]))))));
                                var_26 ^= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
                                arr_61 [i_19] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -5517717362309235075LL)) ? (-5517717362309235049LL) : ((-9223372036854775807LL - 1LL)))), ((~(((arr_59 [12] [(_Bool)1] [i_18 + 1] [i_19] [i_18 + 1] [i_20]) | (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_13] [i_13] [i_18])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
