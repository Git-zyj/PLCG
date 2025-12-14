/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146854
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
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_10 ^= ((/* implicit */long long int) arr_1 [i_0 + 3]);
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) 16777215LL)) ? (-7148406949325271063LL) : (-7148406949325271091LL))) : (((((/* implicit */_Bool) (short)-30260)) ? (7148406949325271057LL) : (arr_0 [i_0])))));
        arr_4 [11ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned short)1])) ? (((/* implicit */unsigned long long int) (-(-7148406949325271063LL)))) : (((((/* implicit */_Bool) var_1)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) var_9)))))))) : (((/* implicit */int) ((short) 15814309267492817265ULL)))));
    }
    for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_1])))))));
        arr_7 [i_1 + 3] [i_1] &= ((14105640851143325181ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13680))));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_6))));
    }
    for (unsigned short i_2 = 3; i_2 < 20; i_2 += 4) /* same iter space */
    {
        var_14 += ((/* implicit */short) ((unsigned long long int) var_5));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) 9507795028336786515ULL))));
    }
    var_16 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */long long int) var_0);
        arr_14 [i_3] = ((((/* implicit */_Bool) 144115185928372224ULL)) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) 7148406949325271062LL)));
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 16; i_4 += 4) 
        {
            for (unsigned short i_5 = 2; i_5 < 17; i_5 += 1) 
            {
                {
                    arr_21 [i_3] [i_5] [i_3] = ((/* implicit */unsigned short) var_5);
                    arr_22 [i_5] [i_4] [i_5 - 2] = ((/* implicit */long long int) (~(((/* implicit */int) ((18446744073709551615ULL) <= (3582570320591460530ULL))))));
                    var_17 = ((((/* implicit */_Bool) var_3)) ? (((arr_17 [i_3] [i_4] [i_5]) >> (((((/* implicit */int) var_2)) - (43650))))) : (((unsigned long long int) var_2)));
                    var_18 = ((/* implicit */unsigned short) var_6);
                    arr_23 [i_5] [(short)17] [i_4] [i_5] = arr_20 [i_5 + 2] [i_5 - 1] [i_5] [i_5];
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
    {
        var_19 = arr_6 [i_6];
        var_20 = ((/* implicit */short) (unsigned short)22860);
        var_21 = ((/* implicit */long long int) arr_19 [i_6] [i_6] [i_6] [i_6]);
        var_22 = ((/* implicit */short) 7281302976882358950ULL);
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
    {
        arr_29 [(unsigned short)14] [i_7] = var_4;
        arr_30 [i_7] [i_7] = ((/* implicit */long long int) var_5);
        var_23 &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_7])))))));
    }
    for (unsigned short i_8 = 3; i_8 < 8; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                {
                    arr_39 [i_8] [i_9] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775805LL)) ? (-1LL) : (-1427083933355334642LL)))) ? (arr_15 [i_8 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_8 + 2] [i_8] [i_8 - 3] [i_8 - 2]))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        var_24 = var_7;
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3582570320591460529ULL)) ? (-9223372036854775795LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (var_8) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)42123))))))) > (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_10] [i_10] [i_10]))))))));
                        var_26 = (unsigned short)42655;
                        arr_44 [i_8 + 2] [i_9] [i_10] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (arr_3 [i_8 - 1])))) ? (arr_3 [i_8 - 3]) : (((/* implicit */unsigned long long int) ((long long int) var_9))));
                        var_27 = var_5;
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 1; i_12 < 8; i_12 += 2) 
                    {
                        var_28 = ((/* implicit */long long int) (-(2320687565287861121ULL)));
                        arr_47 [i_8 + 2] [i_9] [i_10] [i_12 + 2] = ((/* implicit */unsigned long long int) arr_19 [i_8 - 1] [i_12 + 1] [i_12 + 2] [7ULL]);
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8 - 1]))) - (14490869037429946319ULL))))));
                        var_30 -= (short)25184;
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        var_31 = ((((/* implicit */_Bool) (unsigned short)28050)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (11165441096827192649ULL));
                        var_32 -= 4517362329402670310ULL;
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (+(arr_42 [i_8 - 2]))))));
                        var_34 = ((/* implicit */long long int) var_1);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_14 = 1; i_14 < 8; i_14 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) arr_53 [i_8] [i_8 - 1] [i_13]);
                            arr_54 [i_14] [i_9] [i_9] [i_9] [(short)4] [(short)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_14 + 2] [4ULL] [i_8 + 2] [i_13])) ? (((/* implicit */int) ((unsigned short) arr_38 [i_13] [i_9] [i_10] [i_10]))) : (((/* implicit */int) arr_46 [i_8 - 1] [i_8 - 1] [i_14 + 1] [i_8 - 1]))));
                        }
                        for (unsigned short i_15 = 1; i_15 < 9; i_15 += 4) 
                        {
                            var_36 += ((/* implicit */short) -2682973790419197525LL);
                            var_37 -= arr_58 [i_8] [(short)8] [i_10] [i_13] [i_10];
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) (-(var_6))))));
                        }
                        /* vectorizable */
                        for (long long int i_16 = 0; i_16 < 10; i_16 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) var_9))));
                            var_41 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                            arr_63 [i_8] [(unsigned short)6] [0ULL] = ((/* implicit */long long int) var_1);
                        }
                        for (unsigned long long int i_17 = 2; i_17 < 9; i_17 += 4) 
                        {
                            arr_66 [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) arr_31 [i_17 - 1] [i_8 + 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [0ULL] [i_10])) || (((/* implicit */_Bool) var_0)))))));
                            arr_67 [(unsigned short)0] [i_9] [(unsigned short)0] [i_13] [(unsigned short)0] [i_13] [6LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7148406949325271072LL)) ? (6917529027641081856LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)22695)) : (((/* implicit */int) arr_50 [i_9])))) : (((((/* implicit */int) var_3)) + (((/* implicit */int) var_2))))));
                        }
                    }
                    arr_68 [i_8] [i_9] [i_10] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_8 + 2])) ? (arr_3 [i_8 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                }
            } 
        } 
        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (unsigned short)56791))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((long long int) ((short) var_0)))));
        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_5))));
        var_44 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3009451964164369807ULL)) ? (2320687565287861133ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24395)))))) ? (((/* implicit */int) arr_9 [i_8 + 2] [i_8 - 2])) : (((/* implicit */int) arr_9 [i_8 + 2] [i_8 + 1]))));
        arr_69 [i_8] = ((/* implicit */short) arr_27 [i_8 - 2]);
    }
    var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) var_8))));
}
