/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15957
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
    var_11 = ((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) (unsigned char)189))))))));
    var_12 = ((/* implicit */unsigned char) (!(((_Bool) ((unsigned long long int) var_8)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)26), ((signed char)-26))))) & (min((5893775597324984452ULL), (arr_1 [i_1])))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-40)) | (((/* implicit */int) arr_6 [i_1] [6ULL]))))) || (((/* implicit */_Bool) (~(var_9))))));
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_8 [i_3] [i_2] [10]))) ? (arr_1 [i_0]) : (((unsigned long long int) arr_10 [i_1] [i_2] [i_3]))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) ((unsigned long long int) ((8215647567663047183LL) * (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))));
                        arr_13 [i_1] [i_1] [i_1] [(unsigned short)19] = ((/* implicit */unsigned char) max((((/* implicit */signed char) arr_6 [i_1] [i_2])), ((signed char)-26)));
                        var_16 = ((/* implicit */int) arr_5 [(unsigned short)4] [i_4]);
                        arr_14 [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_4])))), (min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)127)) : (arr_3 [i_1]))), (var_7)))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */int) arr_2 [i_1] [i_1] [i_1])) & (((/* implicit */int) arr_2 [i_1] [i_4] [i_4])))) : ((+(((/* implicit */int) (signed char)-95))))));
                    }
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 3) 
                        {
                            var_18 = ((signed char) var_0);
                            var_19 = ((/* implicit */short) arr_21 [i_6] [i_5] [i_1]);
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_22 [i_0] [i_1] [i_2] [i_0] [i_0] [(signed char)16] [i_6]))));
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 2) 
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) arr_1 [i_5]);
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) | (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((_Bool) arr_7 [(unsigned short)20] [i_1] [i_5]))) : (var_3))))));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) (signed char)-2);
                            arr_30 [(unsigned char)14] [12] [i_2] [i_1] [(unsigned short)10] [20] = ((/* implicit */short) ((-1813103025) + (((/* implicit */int) (unsigned char)20))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))));
                            var_24 = var_6;
                            var_25 = ((arr_10 [i_0] [(unsigned char)16] [i_2]) ? (((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_8])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2])));
                        }
                        for (signed char i_9 = 3; i_9 < 18; i_9 += 3) 
                        {
                            var_26 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_1))))) == (((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_1] [(unsigned char)14]))) : (-5770133109798888298LL)))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_3)) : ((-(var_6)))))));
                            arr_33 [i_9] [i_5] [i_1] [i_1] [i_0] = ((/* implicit */short) (unsigned char)28);
                            var_27 = ((/* implicit */long long int) ((int) arr_5 [i_0] [i_2]));
                        }
                        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned short) arr_26 [i_0]);
                            var_29 = ((/* implicit */unsigned short) arr_34 [i_0] [i_1] [(unsigned char)8] [21LL] [i_10] [i_1]);
                        }
                    }
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        arr_41 [i_1] [9LL] [i_2] [(unsigned char)7] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), (((arr_7 [i_0] [i_1] [i_2]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (arr_36 [i_2] [i_2] [i_2] [i_2] [10] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_1] [i_1] [(unsigned char)4] [i_11] [i_0]))))))))));
                        var_30 = ((/* implicit */_Bool) max((((var_7) ^ (arr_3 [i_1]))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)3))))));
                    }
                    var_31 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) arr_3 [i_2])) : (arr_32 [i_0] [i_1] [5ULL] [0])))) ? (((((/* implicit */_Bool) arr_32 [i_0] [i_0] [11] [i_0])) ? (8659632376630736429ULL) : (arr_32 [(_Bool)1] [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) min((arr_3 [i_2]), (arr_3 [i_2])))));
                    arr_42 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_34 [i_0] [i_1] [i_1] [i_0] [i_0] [i_0]))));
                }
                /* LoopSeq 4 */
                for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 21; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned short) (-((~((~(((/* implicit */int) (unsigned char)242))))))));
                                var_33 = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_12] [i_14])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)14844))))))));
                            }
                        } 
                    } 
                    var_34 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) arr_43 [i_0] [i_1] [i_12])) : (((/* implicit */int) (_Bool)1))))));
                }
                for (unsigned char i_15 = 0; i_15 < 22; i_15 += 1) 
                {
                    arr_51 [i_1] = ((/* implicit */long long int) ((min(((!(((/* implicit */_Bool) (signed char)-60)))), (arr_2 [i_1] [i_0] [(_Bool)0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_46 [i_0] [2] [i_1] [i_15] [(unsigned char)13])) && (((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) arr_45 [i_0] [i_1] [i_15] [i_15])))))) : ((((!(((/* implicit */_Bool) arr_46 [i_0] [18ULL] [i_1] [(unsigned short)20] [i_15])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (max((((/* implicit */unsigned long long int) arr_24 [i_0] [(_Bool)1] [i_1] [i_1] [i_15] [i_15] [i_15])), (11372667882417578903ULL)))))));
                    var_35 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [5ULL] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [(signed char)6] [i_1] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_12 [i_0] [i_1] [(short)11] [i_1] [i_0] [i_15])))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [(unsigned short)17] [i_0] [i_0] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_15] [i_0] [i_15] [i_15] [(_Bool)1] [i_15])))))));
                }
                /* vectorizable */
                for (unsigned short i_16 = 0; i_16 < 22; i_16 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 22; i_17 += 3) 
                    {
                        for (signed char i_18 = 0; i_18 < 22; i_18 += 2) 
                        {
                            {
                                var_36 -= ((((/* implicit */int) arr_54 [i_17] [i_16] [i_0])) == (var_3));
                                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_9)))))));
                                var_38 = ((/* implicit */unsigned long long int) var_2);
                                arr_60 [14ULL] [i_1] [i_16] [i_17] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) -1813103020))) ? (arr_26 [i_17]) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (14590709643049245717ULL))))));
                                var_39 = ((/* implicit */int) ((((/* implicit */int) arr_44 [i_0] [i_18] [i_16] [i_17])) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_16] [i_17])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_19 = 1; i_19 < 20; i_19 += 4) 
                    {
                        for (short i_20 = 1; i_20 < 20; i_20 += 1) 
                        {
                            {
                                var_40 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)134)) << (((/* implicit */int) ((_Bool) var_4)))));
                                var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_19] [i_20 - 1])) ? (((/* implicit */int) arr_44 [i_0] [i_16] [i_19 - 1] [i_20 - 1])) : (((/* implicit */int) arr_44 [i_0] [i_1] [i_16] [21LL]))));
                            }
                        } 
                    } 
                    var_42 = var_0;
                }
                for (signed char i_21 = 0; i_21 < 22; i_21 += 2) 
                {
                    var_43 = var_2;
                    var_44 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) (signed char)-42)))) ? (9050724493636084348ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [(unsigned short)11] [i_1] [(unsigned short)9] [i_21] [i_21])) ? (((/* implicit */int) arr_49 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))))) - (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_26 [i_0])), (arr_31 [i_0] [20LL] [i_21])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (max((arr_38 [i_1] [i_21] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_64 [i_21] [i_21] [i_1]))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_45 = ((/* implicit */_Bool) arr_63 [i_0]);
                        var_46 = ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65))) : (var_9))), (((/* implicit */unsigned long long int) ((_Bool) arr_50 [i_1] [i_21])))))));
                    }
                    for (signed char i_23 = 0; i_23 < 22; i_23 += 2) 
                    {
                        var_47 = (~((~((-(var_9))))));
                        var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) ((signed char) arr_56 [i_21] [i_23])))));
                        var_49 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [(short)17] [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_11 [i_23] [i_21] [i_1] [i_0]))))), (arr_12 [i_1] [7LL] [i_1] [i_1] [i_1] [i_1])));
                        arr_74 [2LL] [i_1] [i_21] [i_0] [i_23] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))))) : (var_9)));
                    }
                }
                var_50 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_8)) : (arr_3 [i_1])))));
            }
        } 
    } 
}
