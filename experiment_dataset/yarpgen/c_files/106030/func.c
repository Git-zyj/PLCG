/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106030
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
    var_16 |= var_5;
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [i_0 + 3])), (1077969029909129254ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-1) : (arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
                            var_18 = ((/* implicit */long long int) (signed char)74);
                            /* LoopSeq 4 */
                            for (unsigned char i_4 = 4; i_4 < 12; i_4 += 2) 
                            {
                                arr_15 [i_1] [i_0 + 3] [i_1 + 3] [i_0 + 3] [i_1 + 3] [i_1] = ((((((/* implicit */int) var_15)) & (((/* implicit */int) arr_1 [i_0 + 1])))) * (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) arr_1 [i_0 - 1])))));
                                arr_16 [i_1] = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (signed char)-14))))))) / (((long long int) var_3)));
                                arr_17 [i_1] [i_3] [i_2] [i_1 + 2] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) 1344693061)))));
                                var_19 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) == (var_12)));
                            }
                            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
                            {
                                arr_20 [i_2] [i_2] [i_2] [i_2] [i_1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_19 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_5] [i_3] [i_0 - 2]) & (((/* implicit */int) (signed char)-15))))) ? (((((/* implicit */_Bool) -1344693047)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))) : (arr_14 [i_1 + 3] [i_1 + 3] [i_0 + 1] [i_3]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
                                arr_21 [i_1] [i_0 - 1] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) (+(((int) var_8))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                            {
                                var_20 = (signed char)-40;
                                var_21 += ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0])), (((803519094) | (((/* implicit */int) (signed char)-59))))));
                                arr_24 [i_6] [i_6] [i_6] [i_6] [i_1] = ((/* implicit */long long int) (+(4)));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
                            {
                                var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((4925527264002767429LL) == (((/* implicit */long long int) arr_12 [i_2])))))));
                                var_23 = ((/* implicit */int) max((var_23), ((-(var_4)))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_8 = 2; i_8 < 13; i_8 += 1) 
                {
                    for (unsigned char i_9 = 2; i_9 < 11; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 2; i_10 < 12; i_10 += 2) 
                        {
                            {
                                arr_37 [i_1] = ((/* implicit */unsigned long long int) var_12);
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_11 [i_10] [i_8 - 2] [i_1])))) ? (((/* implicit */long long int) ((int) arr_11 [i_0 + 1] [i_0 + 1] [i_9 + 3]))) : (-4925527264002767438LL)));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1])) ? (arr_29 [i_1 + 1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1])))))) ? (((((/* implicit */int) arr_18 [i_1])) / (((/* implicit */int) (signed char)-40)))) : ((~(((/* implicit */int) arr_18 [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
    {
        for (int i_12 = 2; i_12 < 9; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                {
                    var_26 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-121)) + (((/* implicit */int) arr_6 [i_12 - 2]))))))) ? (((((/* implicit */_Bool) 9956014062996377471ULL)) ? (((((/* implicit */_Bool) 8521215115264ULL)) ? (var_0) : (var_5))) : (((/* implicit */unsigned long long int) (+(3384164776326747927LL)))))) : (var_5)));
                    var_27 += ((/* implicit */unsigned long long int) (unsigned char)238);
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        for (int i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            {
                                arr_51 [i_13] [i_13] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((signed char) ((unsigned char) (signed char)-106)))), (((unsigned long long int) arr_42 [i_14] [i_12 - 2] [i_11]))));
                                var_28 = ((/* implicit */int) var_1);
                                arr_52 [i_13] [i_15] [i_15] [i_15] [2ULL] [2ULL] [i_15] = ((/* implicit */long long int) arr_34 [i_11] [i_11] [i_11] [i_11] [i_11]);
                                var_29 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_43 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_13])))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_39 [i_15]))))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) (signed char)19)))) : (1344693061)));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (signed char i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        var_30 = ((((unsigned long long int) 6ULL)) << (((-1344693062) + (1344693095))));
                        arr_56 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))) : (((arr_22 [i_12] [i_12 - 2] [i_12 - 2] [i_12 - 2] [i_12] [i_12 - 2]) * (arr_22 [i_12] [i_12 - 2] [(signed char)5] [(signed char)5] [(signed char)5] [i_12])))));
                        arr_57 [i_13] [i_13] = ((/* implicit */int) var_9);
                        var_31 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_0)) ? (12813399320267063879ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_11] [i_12 - 2] [i_12 - 1] [i_16] [i_11]))))));
                        var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_1)))) ? (((arr_13 [i_11] [i_12 - 1] [i_13] [i_11] [i_12 + 1] [i_12 + 1]) * (((/* implicit */unsigned long long int) var_2)))) : (((((/* implicit */_Bool) var_5)) ? (17086611548542619730ULL) : (arr_3 [i_11]))))) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_11] [5LL] [i_12 - 2] [i_12 - 1] [i_11])))))));
                    }
                    for (int i_17 = 0; i_17 < 10; i_17 += 3) 
                    {
                        arr_60 [i_11] [i_13] [7] [i_17] [i_11] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (signed char)-113))))));
                        arr_61 [i_13] [i_11] [i_13] [i_17] = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) var_2)) ? (arr_11 [i_11] [i_11] [i_11]) : (1344693050))) / (((/* implicit */int) (unsigned char)190))))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 2) 
                    {
                        var_33 = var_9;
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) 2165427752182347671ULL))));
                    }
                    for (long long int i_19 = 0; i_19 < 10; i_19 += 3) 
                    {
                        var_35 += ((/* implicit */unsigned char) var_12);
                        var_36 = ((/* implicit */int) var_8);
                        /* LoopSeq 2 */
                        for (int i_20 = 2; i_20 < 6; i_20 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_10 [i_11] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
                            arr_71 [i_13] = min(((+(((var_11) + (((/* implicit */int) var_7)))))), (((/* implicit */int) (signed char)-40)));
                            arr_72 [i_11] [i_12] [i_11] [i_13] [i_20] = ((/* implicit */unsigned long long int) 2147483647);
                        }
                        for (int i_21 = 0; i_21 < 10; i_21 += 2) 
                        {
                            arr_77 [i_11] [i_12] [i_13] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_50 [2ULL] [2ULL] [i_12 - 2] [i_12 + 1] [2ULL])))) ? (6ULL) : (2165427752182347677ULL)));
                            var_38 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) var_8))), (((((/* implicit */_Bool) 18446744073709551604ULL)) ? (arr_67 [i_12 + 1] [i_11]) : (arr_67 [i_12 + 1] [i_11])))));
                        }
                        arr_78 [i_11] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_12 - 1])) ? (((/* implicit */int) arr_44 [i_11] [i_12 - 2] [i_11])) : (((/* implicit */int) arr_44 [i_11] [i_12 - 1] [i_13]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_12 - 2]))) : (var_2)));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_22 = 4; i_22 < 9; i_22 += 2) 
    {
        for (unsigned long long int i_23 = 1; i_23 < 8; i_23 += 1) 
        {
            {
                arr_86 [i_22 + 2] [i_22 + 2] [i_22 + 2] = ((/* implicit */long long int) ((int) (((-(((/* implicit */int) var_15)))) ^ (arr_9 [i_22] [i_22 + 1] [i_22 - 2] [i_22]))));
                var_39 &= ((int) -4925527264002767430LL);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_24 = 0; i_24 < 11; i_24 += 4) 
                {
                    var_40 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_25 [i_22] [i_22 - 4] [i_23 + 3]))));
                    var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((unsigned char) var_11)))));
                }
                var_42 += 9633300424266337024ULL;
                var_43 = ((/* implicit */unsigned char) 16281316321527203947ULL);
            }
        } 
    } 
}
