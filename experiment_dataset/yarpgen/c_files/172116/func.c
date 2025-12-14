/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172116
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (var_7)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) ((var_12) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18526)))))))), (min((((/* implicit */int) (unsigned char)12)), (-158199464))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((7755862559170196128LL) << (((3373833130789570771ULL) - (3373833130789570771ULL)))));
                            arr_12 [i_0] [i_1] [i_2] [(short)2] = ((/* implicit */short) (~((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)247))))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))) ^ (min(((-(var_7))), (((/* implicit */unsigned long long int) var_15))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_4]))))), (((((/* implicit */_Bool) -2710921817842130838LL)) ? (((/* implicit */int) arr_16 [i_4] [i_5])) : (((/* implicit */int) var_0))))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) 9367399518693398909ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_4])))), (((/* implicit */int) var_0))))))))));
                        arr_27 [i_4] [i_4] [i_6] [i_7] |= ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((+((~(var_8)))))));
                        /* LoopSeq 3 */
                        for (int i_8 = 3; i_8 < 17; i_8 += 3) 
                        {
                            arr_30 [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) ((unsigned long long int) (_Bool)1))))));
                            arr_31 [i_8] [i_5] [i_4] [i_5] [i_8] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)15963)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)2823))))));
                            arr_32 [i_8] [i_8] = ((/* implicit */short) 4294967295U);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_23 |= ((/* implicit */short) min((min((((/* implicit */long long int) (_Bool)0)), (-1175963317592841127LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_9] [i_4] [i_6] [i_4] [i_4])) && (((/* implicit */_Bool) arr_34 [i_4] [i_5] [i_6] [i_7] [i_9])))))));
                            arr_35 [i_4] [i_5] [i_4] [i_7] [i_9] |= min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)108)) < (((/* implicit */int) (_Bool)1))))), (min((-2710921817842130838LL), (((/* implicit */long long int) (unsigned char)0)))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_38 [i_10] = ((/* implicit */unsigned int) ((unsigned short) (((_Bool)1) ? (arr_17 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                            var_24 = min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_4] [i_4]))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_11))));
                            arr_39 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) arr_20 [i_5] [(short)7]);
                        }
                        var_25 |= ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_10)) ? (14974798505008710101ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_6]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5] [i_5])))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_6] [i_5])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-24037)))))))));
                    }
                } 
            } 
        } 
        arr_40 [i_4] |= ((/* implicit */unsigned long long int) -1027854852);
    }
    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((2021948133U) - (2021948115U))))))) ? ((~(arr_42 [i_11] [i_11]))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_42 [i_11] [i_11])))));
        var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) (signed char)41))))) : (max((((/* implicit */unsigned long long int) var_8)), (18446744073709551615ULL))))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((var_4) ? (-1027854852) : (((/* implicit */int) var_3))))) * (2021948106U))))));
    }
}
