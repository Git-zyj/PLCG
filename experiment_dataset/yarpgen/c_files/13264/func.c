/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13264
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        arr_2 [(_Bool)1] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_20 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (short)6857)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)21553))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 3; i_2 < 17; i_2 += 3) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) var_17);
            /* LoopNest 2 */
            for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */_Bool) var_17);
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 776683550))))) : (((((/* implicit */_Bool) (short)-20938)) ? (-1130229717) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (signed char i_6 = 4; i_6 < 17; i_6 += 4) 
                        {
                            arr_21 [i_6] [2LL] [i_6] [(_Bool)1] [i_2] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)104)) ? (((((/* implicit */_Bool) (unsigned char)126)) ? (-1157140574) : (1130229717))) : (((((/* implicit */_Bool) 1130229716)) ? (-821326567) : (((/* implicit */int) (_Bool)1))))))));
                            arr_22 [i_1] [(signed char)1] [(unsigned char)0] [i_2] [(unsigned char)0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)-21059))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_7 = 1; i_7 < 17; i_7 += 4) 
                        {
                            arr_25 [i_7 - 1] [i_7 - 1] [i_4] [i_2] [i_3 + 1] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_14))));
                            arr_26 [i_7 - 1] [i_2] [i_3 + 1] [i_2 + 1] [i_2] [i_1] = ((/* implicit */unsigned int) (((_Bool)0) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)146))));
                        }
                    }
                } 
            } 
            var_23 = arr_19 [i_1] [i_1];
        }
        arr_27 [i_1] = ((/* implicit */short) (~(max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) arr_7 [i_1]))))));
    }
    /* LoopNest 3 */
    for (long long int i_8 = 2; i_8 < 21; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_14))));
                        var_25 = ((/* implicit */signed char) ((arr_33 [i_8 + 2] [i_8 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        arr_38 [i_8] [i_8] = ((/* implicit */_Bool) var_8);
                        var_26 *= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)104))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_12 = 3; i_12 < 22; i_12 += 2) 
                    {
                        for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_2))));
                                arr_45 [i_8] [i_9] [i_10] [i_8] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2094569920226927209ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))));
                                arr_46 [i_8] [i_9] [(_Bool)1] [i_10] [i_8] = ((/* implicit */signed char) var_18);
                                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (3349288092081453213ULL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (int i_15 = 4; i_15 < 22; i_15 += 2) 
                        {
                            {
                                var_29 = min((((/* implicit */unsigned int) max((arr_36 [i_15] [i_15 - 4] [i_15] [i_15] [i_15 + 1] [i_15 - 4]), (((/* implicit */unsigned short) var_4))))), (max((((/* implicit */unsigned int) arr_36 [i_15] [i_15] [i_15] [i_15] [i_15 + 1] [i_15])), (arr_51 [i_15] [i_15 + 1] [20] [i_15] [i_15 - 4] [i_8] [i_15]))));
                                var_30 = var_8;
                                arr_53 [i_8] [i_8] [i_8] [(_Bool)1] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) -941932024)))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) arr_37 [i_8] [i_8] [i_8] [i_8]))));
                    var_32 = ((/* implicit */signed char) var_15);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_16 = 1; i_16 < 20; i_16 += 2) 
    {
        arr_56 [i_16] [i_16] = ((var_4) ? (((/* implicit */int) arr_36 [i_16 + 1] [i_16] [i_16] [i_16] [i_16] [14])) : (((/* implicit */int) (!(var_9)))));
        var_33 = ((/* implicit */int) ((arr_51 [i_16] [i_16] [i_16] [i_16] [i_16 + 1] [(short)14] [4U]) * (arr_51 [i_16] [(short)6] [i_16] [i_16] [i_16 - 1] [2ULL] [(short)2])));
        /* LoopSeq 2 */
        for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 3) 
        {
            var_34 |= ((/* implicit */_Bool) 2ULL);
            /* LoopSeq 1 */
            for (int i_18 = 0; i_18 < 22; i_18 += 4) 
            {
                var_35 = ((/* implicit */int) var_1);
                var_36 = ((/* implicit */int) arr_58 [i_16 + 1] [i_16 - 1]);
            }
            var_37 ^= ((/* implicit */int) ((_Bool) var_19));
            var_38 = ((/* implicit */_Bool) ((arr_41 [i_17] [i_17] [13] [i_17] [i_16] [i_16 + 2] [i_16 + 2]) / (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_17])))));
        }
        for (int i_19 = 0; i_19 < 22; i_19 += 3) 
        {
            arr_65 [i_16] = ((/* implicit */long long int) ((((/* implicit */int) (short)6857)) == (((/* implicit */int) (_Bool)1))));
            var_39 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (3295002560U)))) % (var_13)));
        }
    }
    var_40 = ((/* implicit */short) min(((+(((/* implicit */int) ((16352174153482624383ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))), ((-2147483647 - 1))));
    /* LoopNest 3 */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        for (unsigned char i_21 = 0; i_21 < 23; i_21 += 1) 
        {
            for (unsigned char i_22 = 0; i_22 < 23; i_22 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_23 = 1; i_23 < 21; i_23 += 4) 
                    {
                        var_41 = ((/* implicit */signed char) max((16352174153482624383ULL), (4445189271323922075ULL)));
                        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16352174153482624383ULL)) ? (3490104882450049988ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_23 - 1])))))) : (max((16421879580019535196ULL), (((/* implicit */unsigned long long int) var_9))))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_24 = 2; i_24 < 21; i_24 += 2) 
                    {
                        for (unsigned short i_25 = 1; i_25 < 19; i_25 += 2) 
                        {
                            {
                                var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) max((((((/* implicit */_Bool) max((14371849631769478006ULL), (var_8)))) ? (((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_18))))) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_24 + 1] [i_25] [i_25 + 4] [i_25 + 4] [i_25 + 4] [i_25 + 3]))))), (((/* implicit */long long int) ((arr_81 [i_24 - 2] [(signed char)11] [i_24] [i_24 + 2] [i_24]) != (((/* implicit */int) (unsigned char)98))))))))));
                                arr_82 [i_20] [i_21] [i_20] [i_24] [i_25] [10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1349552909)) ? (2094569920226927241ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)6848))))) ? ((-(min((var_8), (((/* implicit */unsigned long long int) var_11)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))))))));
                            }
                        } 
                    } 
                    var_45 = ((/* implicit */unsigned short) ((arr_50 [i_22] [i_21]) & (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_21] [(signed char)17] [i_21] [(unsigned short)1])))));
                }
            } 
        } 
    } 
}
