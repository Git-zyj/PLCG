/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105975
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_16 += ((/* implicit */unsigned int) arr_6 [i_1 + 3] [i_1 + 3] [i_0]);
                    var_17 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1 - 2])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-20519)) | (-899691307)));
                                var_19 = ((/* implicit */signed char) ((unsigned int) ((unsigned int) 0U)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [18] [i_0] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 3005541958U)) ? (var_2) : (((/* implicit */long long int) var_11)))))))));
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_20 |= ((/* implicit */int) ((((/* implicit */unsigned int) var_7)) | (min((((((/* implicit */unsigned int) -899691332)) | (var_10))), ((~(var_11)))))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 12; i_9 += 4) 
                        {
                            {
                                arr_27 [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2147483647)) + (9024092897358946098ULL)));
                                arr_28 [i_5] [i_6] [i_6] [i_7] [i_6] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_3))))));
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((int) arr_10 [i_6] [i_8] [i_5] [i_6] [i_6])) : (((var_0) | (arr_18 [i_5])))))), (min((((/* implicit */unsigned int) var_9)), ((-(var_10))))))))));
                                var_22 = ((/* implicit */signed char) arr_17 [i_5]);
                                arr_29 [i_5] [i_6] [14] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_24 [i_9] [i_6] [i_5]) : (((/* implicit */int) var_1))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((unsigned long long int) (signed char)104)) & (arr_9 [i_9 + 3] [i_9 - 1] [i_9 + 2] [i_5] [i_9]))) : (((/* implicit */unsigned long long int) var_14))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        for (int i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            {
                                arr_36 [i_6] [i_7] [i_7] [i_5] [(short)6] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) arr_0 [i_5] [i_6])), (var_2))), (((/* implicit */long long int) (~(arr_0 [i_5] [(signed char)6]))))));
                                arr_37 [i_6] [i_6] [i_7] [(short)14] [i_11] [i_11] [8U] |= ((/* implicit */long long int) ((signed char) ((((/* implicit */int) (signed char)-100)) & (var_6))));
                                var_23 = ((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned long long int) arr_0 [i_5] [i_5])), (((((/* implicit */_Bool) -1533861908)) ? (((/* implicit */unsigned long long int) var_14)) : (0ULL))))));
                                var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((+(arr_10 [i_6] [i_10] [8] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_7] [i_10] [i_5] [i_10] [i_11]))))))))) ? (((/* implicit */unsigned long long int) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_5] [i_6] [i_5] [i_6] [i_6] [i_11] [i_11])))))) : (max((((((/* implicit */_Bool) arr_24 [i_5] [i_6] [5LL])) ? (((/* implicit */unsigned long long int) arr_20 [i_6] [i_5])) : (9422651176350605517ULL))), (((/* implicit */unsigned long long int) arr_8 [i_5] [i_6] [i_7] [i_10] [i_11]))))));
                            }
                        } 
                    } 
                    var_25 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_26 [i_7] [i_6] [12U] [i_7])) ? (arr_26 [i_7] [i_6] [i_7] [i_7]) : (var_7))) / (min((arr_26 [i_5] [i_6] [i_5] [i_5]), (((/* implicit */int) var_5))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_12 = 4; i_12 < 17; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (int i_13 = 3; i_13 < 17; i_13 += 2) 
        {
            for (long long int i_14 = 0; i_14 < 18; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        for (int i_16 = 4; i_16 < 17; i_16 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */int) var_13)))) <= (arr_11 [i_12] [i_12] [i_12 - 1] [i_16] [i_16 - 2] [i_16 - 3] [i_16 - 2])))), (9422651176350605517ULL)));
                                arr_53 [i_12] [i_12] [i_14] [i_14] [8U] [i_16] = ((var_8) - (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_12])), (arr_0 [i_12] [i_13]))))))));
                                arr_54 [i_12] = ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-104)))))))), (((((/* implicit */long long int) arr_52 [i_12 - 4] [i_12 - 4] [i_14] [i_15] [i_16] [i_15] [i_12])) / (8657801197343162418LL)))));
                                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (var_14))))));
                                arr_55 [i_12] [i_13] [i_13 - 3] [i_13] [i_12] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2135846559)) ? (((/* implicit */unsigned long long int) -789210459)) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) 1389308773U)) : (0ULL)))) ? (((/* implicit */unsigned long long int) ((max((var_14), (var_12))) / (((/* implicit */unsigned int) arr_11 [i_12] [i_15] [i_15] [i_15] [i_16] [i_16] [i_14]))))) : ((~(9219408266816368639ULL)))));
                            }
                        } 
                    } 
                    arr_56 [i_12] [8U] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(2863878157U))))))) <= (((/* implicit */int) (short)6113))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 18; i_17 += 4) 
        {
            for (short i_18 = 0; i_18 < 18; i_18 += 2) 
            {
                {
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) ((short) min((var_2), (((/* implicit */long long int) var_10)))))) ? (((((/* implicit */_Bool) 899691331)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_12])) ? (var_0) : (-1966242774)))) : ((~(2804345538120680952ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 899691326)) ? (arr_42 [i_17]) : (var_12)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (21ULL))) : (((/* implicit */unsigned long long int) var_0)))))))));
                    var_29 += ((/* implicit */long long int) 2043803190U);
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 17; i_19 += 2) 
                    {
                        for (short i_20 = 2; i_20 < 15; i_20 += 3) 
                        {
                            {
                                var_30 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 1721705988U))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -365752247)) ? (230883177) : (1078447440)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-14))))) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8037)))));
                                var_31 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) -1)) ? (arr_49 [i_12] [i_17] [14] [i_19 - 2]) : (arr_61 [14] [i_19] [i_12] [10])))))));
                                var_32 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) -860338299572121075LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) 899691341)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_33 = ((/* implicit */signed char) var_0);
}
