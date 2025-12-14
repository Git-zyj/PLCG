/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136159
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)174)), (63ULL))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_17 -= ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_18 *= ((arr_0 [i_0]) / (arr_0 [i_0]));
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))) >= (7680261536637672000ULL)))), (arr_0 [i_0 + 1]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_1] [i_2] [i_3] [i_1] |= ((/* implicit */_Bool) (+((+(2851065045U)))));
                        var_20 ^= ((/* implicit */unsigned int) ((4023907689U) > (2898436282U)));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) arr_5 [i_5] [i_1]);
                        var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_1] [i_2]))));
                        arr_22 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [(_Bool)0]))) >= (((arr_15 [i_2] [i_3] [i_2] [i_2] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2])))))));
                    }
                    var_23 *= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2 - 1]))) - (min((arr_15 [i_3] [i_2] [i_2] [i_2 - 1] [i_1]), (((/* implicit */unsigned long long int) arr_16 [i_1]))))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3] [i_2] [i_1])) * (((/* implicit */int) arr_2 [i_1]))))));
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_24 = arr_21 [i_2] [i_2] [i_2] [i_7];
                            arr_28 [i_2] = ((/* implicit */int) (+((~(min((arr_26 [i_2]), (((/* implicit */unsigned int) arr_0 [i_7]))))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_6] [i_6] [i_3] [i_6] [i_2] = arr_0 [i_2 - 1];
                            arr_32 [i_1] [i_2] [i_3] [i_2] [i_8] [i_1] [i_1] = ((/* implicit */unsigned char) min(((((+(((/* implicit */int) arr_9 [i_2] [i_8])))) | (((/* implicit */int) (!(arr_24 [i_8] [i_2] [i_6] [i_3] [i_2] [i_1])))))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_6]))))) >= (((/* implicit */int) min((((/* implicit */signed char) arr_6 [i_1] [i_2])), (arr_12 [i_2])))))))));
                            arr_33 [i_3] [i_1] [i_1] &= ((/* implicit */unsigned long long int) arr_13 [13] [13] [(unsigned char)12] [i_8]);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((arr_29 [i_1] [i_2] [i_3] [i_3] [i_1]) << ((+(((0) & (((/* implicit */int) arr_6 [i_1] [i_1])))))))))));
                            var_26 = ((/* implicit */_Bool) arr_35 [i_1] [i_2] [i_3] [i_2] [i_9]);
                            var_27 = ((/* implicit */_Bool) max((var_27), (arr_5 [i_1] [i_1])));
                        }
                        arr_37 [i_1] [i_1] [i_3] [i_2] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1] [i_1] [i_2] [i_2] [i_2] [i_6]))) % (min((((/* implicit */unsigned long long int) arr_7 [i_2])), (arr_14 [i_1] [i_2] [(_Bool)1] [i_2]))))), (((/* implicit */unsigned long long int) min((min((arr_30 [i_6]), (((/* implicit */unsigned int) arr_5 [5ULL] [i_3])))), (((/* implicit */unsigned int) arr_6 [i_2] [i_2]))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) arr_2 [i_3]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            var_29 *= arr_39 [i_1] [i_2] [i_3] [i_10] [i_11];
                            arr_45 [i_1] [i_2] [10ULL] [i_10] [i_11] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
                            arr_46 [i_2] [i_10] [i_2 - 1] [i_2] = ((/* implicit */unsigned long long int) (-(1181389866U)));
                        }
                        for (unsigned int i_12 = 1; i_12 < 12; i_12 += 4) 
                        {
                            arr_51 [i_12] [i_2] [10ULL] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))));
                            arr_52 [i_1] [i_2] [i_2] [i_10] [i_12] = ((/* implicit */unsigned long long int) (+(-192289009)));
                            arr_53 [3U] [i_2] [3U] [3U] [i_2] = ((/* implicit */int) ((-4515547597708134128LL) > (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_1] [i_2] [i_3] [i_10] [i_2])))));
                            var_30 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_18 [i_12] [i_2] [i_3] [i_2]))))));
                        }
                    }
                }
            } 
        } 
        arr_54 [i_1] = ((/* implicit */unsigned int) (~(arr_29 [i_1] [i_1] [i_1] [i_1] [i_1])));
        var_31 += arr_49 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1];
    }
    /* LoopNest 3 */
    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 2) 
    {
        for (long long int i_14 = 3; i_14 < 15; i_14 += 1) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 1; i_16 < 15; i_16 += 3) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 1) 
                        {
                            {
                                arr_69 [i_17] [i_14] [i_15] [i_14] [i_13] = ((/* implicit */unsigned char) (~((-(((((/* implicit */int) arr_63 [i_15])) - (arr_57 [i_13])))))));
                                var_32 = ((/* implicit */signed char) arr_58 [i_15]);
                                var_33 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_67 [i_13] [i_16 + 1] [i_14] [i_16 + 2] [i_17] [i_14] [i_17])), (arr_66 [i_13] [i_14 + 1])));
                                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (((+((-(arr_65 [i_14] [i_13] [i_13] [i_13] [i_17]))))) >> (((((/* implicit */int) arr_68 [i_17] [i_14] [i_15] [i_17] [i_15])) + (499))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 17; i_18 += 1) 
                    {
                        for (unsigned char i_19 = 1; i_19 < 13; i_19 += 2) 
                        {
                            {
                                arr_75 [i_14] = ((/* implicit */unsigned int) (-(min((((/* implicit */int) arr_55 [i_18])), (arr_0 [i_19])))));
                                arr_76 [i_14] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_57 [i_15])), (arr_58 [i_13])));
                                var_35 = arr_58 [(short)10];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
