/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138348
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~(var_16))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8064U)) ? (((/* implicit */int) ((8064U) >= (4294959231U)))) : (((/* implicit */int) ((2531782000U) >= (((/* implicit */unsigned int) -18934822)))))))) ? (var_11) : (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((((/* implicit */unsigned int) arr_0 [i_0])) >= (695089700U))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                var_20 &= ((/* implicit */unsigned int) (~(arr_2 [i_1 + 1] [i_0])));
                var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 470119533U)) ? (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) arr_1 [i_1 + 3]))))) : ((+(arr_2 [i_1 + 2] [i_1])))));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) -1992450963)) ? (max((var_4), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [4U] [4U]))))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_12)) ? (arr_3 [i_1]) : (arr_4 [i_0])))))))))));
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
                {
                    {
                        arr_12 [i_0] [18ULL] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_1 + 2] [i_3] [i_4])), (var_6))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_11 [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_1 - 1]) - (((/* implicit */unsigned long long int) var_4))))) ? (min((arr_8 [15ULL]), (((unsigned long long int) var_15)))) : (((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (((unsigned long long int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned int) -352801568)))))))));
                        var_24 = ((((/* implicit */_Bool) arr_1 [i_1])) ? (((long long int) -4816956701866627525LL)) : (((((/* implicit */_Bool) arr_8 [i_4 - 1])) ? ((+(arr_5 [i_0] [i_0] [i_3] [13]))) : (((long long int) 3882936164U)))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                var_25 -= ((/* implicit */unsigned int) arr_6 [i_0] [9] [i_0]);
                arr_15 [i_5] = ((int) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) == (17592186044400ULL)));
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (!(((/* implicit */_Bool) 6499375832881095050LL)))))));
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((unsigned long long int) arr_9 [i_0] [i_1 - 1] [i_5] [i_6] [i_0]))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                {
                    arr_20 [i_0] [i_0] [i_7] = ((/* implicit */unsigned long long int) 3882936169U);
                    var_28 += ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    arr_21 [i_5] [i_5] = ((/* implicit */long long int) 448ULL);
                }
                arr_22 [i_5] [i_1] [i_0] |= ((/* implicit */unsigned long long int) var_7);
            }
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                var_29 = ((((/* implicit */_Bool) 3882936152U)) ? (18934821) : (-18934822));
                var_30 += ((/* implicit */unsigned int) (-(var_2)));
            }
            for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                var_31 += 47620048971835788ULL;
                arr_27 [i_0] = max((((((/* implicit */unsigned long long int) 1992450963)) | (var_15))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2147483647)) | (7104963515916981093LL)))));
                arr_28 [1] [i_1 + 1] [i_9] = ((/* implicit */unsigned long long int) 596649390U);
                arr_29 [i_0] [i_0] [i_9] = (+(arr_18 [8LL] [i_1] [i_1 + 1] [i_0] [i_1 + 2]));
            }
            var_32 ^= (~(((unsigned int) var_1)));
        }
        for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((arr_18 [i_0] [i_0] [18] [i_0] [i_10]), (7104963515916981093LL)))) * (((((/* implicit */_Bool) arr_13 [i_0] [i_10] [i_0])) ? (540431955284459520ULL) : (((/* implicit */unsigned long long int) arr_31 [i_10 + 1] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) arr_11 [i_10 + 1] [i_10] [i_10 + 2] [i_10 - 1])) ? (((/* implicit */unsigned long long int) arr_19 [i_10 + 2] [i_0] [i_10 + 2] [i_10 + 2] [i_10] [i_0])) : (var_5))) : (((/* implicit */unsigned long long int) (+(1567836907))))));
            /* LoopSeq 1 */
            for (long long int i_11 = 1; i_11 < 17; i_11 += 1) 
            {
                arr_35 [i_10] [17ULL] [i_10] = ((/* implicit */unsigned int) 3401794926315532475ULL);
                var_34 = ((/* implicit */long long int) ((arr_17 [i_11 + 3] [i_11] [i_11 - 1] [i_10 + 3] [i_10] [i_10]) & (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0] [i_10] [i_10] [i_10])) ? (4611686009837453312ULL) : (((/* implicit */unsigned long long int) arr_17 [i_11 + 1] [i_11 + 3] [16U] [i_11] [i_10] [5LL]))))) && (((/* implicit */_Bool) ((int) 4538639921791163735LL))))))));
            }
        }
        for (unsigned long long int i_12 = 1; i_12 < 17; i_12 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (max((arr_18 [i_12 + 2] [i_0] [i_0] [i_0] [i_0]), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))))));
            var_36 = 2147483647;
        }
    }
    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 3) 
    {
        var_37 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_2)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_15 = 1; i_15 < 18; i_15 += 1) 
            {
                for (long long int i_16 = 3; i_16 < 17; i_16 += 4) 
                {
                    for (unsigned int i_17 = 2; i_17 < 18; i_17 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 3882936169U)), (2702572685430105568ULL))))));
                            arr_50 [i_13] [i_13] [i_17] = ((/* implicit */long long int) 1048576U);
                            arr_51 [i_17 + 2] [i_13] = max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 560260907853938755ULL))))), (arr_26 [i_17 + 2] [i_16 + 1] [i_15 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) / (arr_4 [i_15 + 2])))));
                            var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) 3698317928U))) ? ((~(-7140354117097097984LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1097076270U)), (1152919305583591424ULL))))))))));
                            arr_52 [i_13] [i_13] [i_17] [10U] [i_16] [i_17] |= ((((/* implicit */_Bool) (+(arr_43 [i_16] [i_17 + 1])))) ? (((/* implicit */unsigned int) ((int) 4294967295U))) : (((unsigned int) var_13)));
                        }
                    } 
                } 
            } 
            arr_53 [i_13] [i_13] [i_14] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3882936152U))))), (max((((/* implicit */unsigned long long int) ((long long int) 504403158265495552LL))), (arr_16 [i_13] [i_14] [i_14])))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 4) 
        {
            var_40 -= ((/* implicit */int) ((((/* implicit */_Bool) max((((long long int) arr_41 [i_13])), (((long long int) 389343986U))))) && (((/* implicit */_Bool) 17886483165855612850ULL))));
            /* LoopSeq 1 */
            for (unsigned long long int i_19 = 3; i_19 < 19; i_19 += 4) 
            {
                var_41 = ((/* implicit */int) var_2);
                arr_62 [i_13] [i_13] [i_13] [i_18] = ((/* implicit */long long int) (-((((-(2147483136U))) | (((/* implicit */unsigned int) ((int) 1073676288)))))));
            }
        }
        var_42 += ((/* implicit */unsigned int) arr_9 [6] [i_13] [i_13] [i_13] [i_13]);
        var_43 = ((/* implicit */int) (~((~(var_1)))));
    }
    for (unsigned int i_20 = 2; i_20 < 24; i_20 += 4) 
    {
        var_44 = ((/* implicit */unsigned long long int) var_10);
        var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((((((unsigned long long int) 2702572685430105568ULL)) & (max((((/* implicit */unsigned long long int) var_3)), (var_11))))) & (((((/* implicit */_Bool) 1097076249U)) ? (((((/* implicit */unsigned long long int) arr_63 [i_20 + 1])) * (2731726982243571207ULL))) : (arr_64 [i_20 - 2]))))))));
    }
    for (int i_21 = 3; i_21 < 12; i_21 += 4) 
    {
        arr_69 [i_21] [i_21] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(arr_66 [i_21])))), (((((/* implicit */_Bool) ((7533312515022815388LL) >> (((4395899027456ULL) - (4395899027393ULL)))))) ? (arr_44 [i_21 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_21 - 2] [i_21] [i_21]))))))))));
        arr_70 [i_21] = ((((9ULL) / (arr_38 [i_21] [i_21 - 3] [17LL]))) + (((((/* implicit */_Bool) 540431955284459501ULL)) ? (arr_38 [i_21] [i_21 + 2] [i_21 - 3]) : (((/* implicit */unsigned long long int) var_9)))));
    }
}
