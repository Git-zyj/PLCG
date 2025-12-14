/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135608
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((((/* implicit */_Bool) 483016339)) || (((/* implicit */_Bool) var_8)))))))));
                            var_21 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (unsigned short)2047)), (14327144552963288265ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        arr_15 [i_4] [i_0] [i_0] [i_5 - 1] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)38326)), ((-(9104621970319495167ULL)))));
                        arr_16 [i_4] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) var_9);
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 10; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_6 - 1] [i_6 - 1]))));
                        var_23 = ((/* implicit */unsigned long long int) (+(-7399153955598462604LL)));
                        var_24 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)38322)) ? (((/* implicit */int) (unsigned short)50683)) : (((/* implicit */int) (unsigned short)65535)))) << (((-2083471708) + (2083471722)))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_0] [i_4])) * (((/* implicit */int) arr_12 [i_4] [i_6 - 1]))));
                    }
                    var_26 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) (-2147483647 - 1)))))) ? (((/* implicit */int) ((arr_11 [i_0] [i_0] [i_0]) > (arr_11 [i_0] [i_0] [i_0])))) : ((+((-2147483647 - 1))))));
                    var_27 -= max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14))) & (8598230333345587193ULL))), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_4])));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((var_1) - ((-2147483647 - 1)))), (((((/* implicit */int) var_14)) + (((/* implicit */int) (unsigned short)65171))))))) ? (min((arr_13 [i_0] [i_1] [i_1]), (min((((/* implicit */int) arr_3 [i_4])), (var_1))))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), ((unsigned char)0))))));
                }
                var_29 = ((/* implicit */unsigned long long int) ((var_0) / (max((((7399153955598462604LL) / (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) min((arr_14 [i_0]), (((/* implicit */unsigned char) arr_12 [i_0] [i_1])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_30 -= ((/* implicit */unsigned short) ((4991926169051920287LL) / (((/* implicit */long long int) (~(((/* implicit */int) (signed char)127)))))));
                                arr_29 [i_8] [i_1] [i_1] [i_1] [8] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) -7399153955598462604LL)))))));
                                arr_30 [5ULL] [i_8] [(unsigned short)0] [i_8] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)38326))) == (7399153955598462625LL)));
                            }
                        } 
                    } 
                    arr_31 [(unsigned short)8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_7] [i_7] [i_1] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) var_19)) != (890640327)))) : ((-2147483647 - 1))));
                    arr_32 [i_0] [i_1] = ((arr_25 [i_0] [i_0] [(signed char)9] [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_19))));
                    var_31 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))) <= (4294967281U)));
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_0])))))));
                }
                for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        var_33 += ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_0]))))) != ((~(var_12))))) || (((/* implicit */_Bool) ((arr_1 [i_0] [i_1]) / (2147483647))))));
                        var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((474366079) + (((/* implicit */int) (unsigned short)0))))) ? ((+(arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_1]) : (-7399153955598462590LL)))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        arr_42 [i_0] [i_0] [i_10] [i_10] [i_12] = min((((/* implicit */long long int) (+(((/* implicit */int) arr_36 [i_0] [i_1] [i_0] [i_12]))))), (-7399153955598462604LL));
                        arr_43 [i_0] [i_1] [i_10] [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_18)) ? (-7399153955598462651LL) : (7399153955598462651LL))) == (var_0)))), (var_12)));
                        arr_44 [i_0] [i_0] [i_1] [i_10] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 7399153955598462651LL))))), (7399153955598462651LL)))) ? (max((((/* implicit */unsigned long long int) max((var_4), (arr_40 [i_0] [i_1] [i_10] [i_12] [i_12] [i_10])))), (((arr_33 [i_1] [i_1] [i_1] [i_12]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (min((arr_27 [i_0] [i_0] [i_1] [i_10] [i_10] [i_12]), (((/* implicit */unsigned long long int) var_5))))));
                        arr_45 [i_0] [i_1] [i_1] [i_12] = ((/* implicit */unsigned short) var_8);
                        arr_46 [i_0] [i_0] [i_10] [i_12] = ((/* implicit */_Bool) -170096573422692471LL);
                    }
                    arr_47 [7LL] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_0);
                }
                /* LoopNest 3 */
                for (unsigned short i_13 = 3; i_13 < 10; i_13 += 2) 
                {
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        for (unsigned short i_15 = 1; i_15 < 9; i_15 += 1) 
                        {
                            {
                                arr_57 [i_0] [i_1] [5U] [i_14] [i_1] [i_15] [i_13] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)29))));
                                var_35 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_49 [i_0] [i_0] [i_13] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))) - ((-(0ULL)))))) ? (((/* implicit */unsigned long long int) max((max((-170096573422692442LL), (((/* implicit */long long int) arr_7 [i_1] [(unsigned short)4] [i_13 - 2] [3])))), (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_14]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_14])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (unsigned short)44312))))) ? (((/* implicit */unsigned long long int) var_2)) : (arr_52 [i_15 - 1] [10] [i_15 + 1] [i_15 + 1] [10LL] [i_15])))));
                                arr_58 [i_13] [8ULL] [1ULL] [i_14] [i_14] = ((/* implicit */_Bool) (~(max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) 7399153955598462603LL)) ? (var_1) : (((/* implicit */int) var_13))))))));
                                var_36 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_37 [i_15 + 1] [i_13 + 1] [i_13 + 1] [i_14])))), (((7399153955598462629LL) / (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_15 - 1] [i_13 - 2] [i_14])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_37 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)49878)) / (-474366065)));
    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (var_12)));
}
