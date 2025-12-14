/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154051
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = 9367990070513009888ULL;
                var_17 *= ((min((4063113109321759067LL), (((/* implicit */long long int) (_Bool)1)))) >> (((((/* implicit */int) arr_3 [i_0] [i_1 - 1] [(_Bool)1])) ^ (((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) ((15494026277565574710ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [3LL] [i_3] [i_4 + 1] [i_4] [i_4])))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12504167943773903646ULL)) ? (1263580599417440367LL) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))))));
                            arr_14 [i_2] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 9534105318085648373ULL)) ? (5696178662551376648ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((arr_17 [i_1 - 1] [i_1 - 1]) != (((/* implicit */unsigned long long int) (~(arr_12 [i_0] [i_0])))))))));
                            arr_18 [4ULL] [i_1] [i_1] [i_1] [11ULL] [(_Bool)1] [i_5] = (-(arr_17 [i_1 - 1] [i_5]));
                        }
                        for (long long int i_6 = 2; i_6 < 11; i_6 += 1) 
                        {
                            arr_22 [i_6] [i_3] [i_2] [i_1 - 1] [i_6] = arr_17 [i_0] [i_1];
                            arr_23 [i_6] [i_3] [(_Bool)1] [i_1] [i_6] = ((/* implicit */unsigned long long int) ((long long int) ((var_12) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 12504167943773903661ULL))));
                        }
                        arr_24 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 2) 
                        {
                            arr_31 [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1] [i_8 + 3] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_8 [i_0] [i_2] [i_7] [i_8 + 3]))));
                            arr_32 [(_Bool)1] [i_8] [i_2] [i_2] [i_8 - 2] = ((arr_12 [i_2] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        }
                        var_22 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                        var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (5030827672656356081ULL)))));
                    }
                    arr_35 [i_2] [i_0] = ((/* implicit */long long int) ((_Bool) arr_15 [i_1 - 1] [i_1]));
                }
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    var_25 = ((unsigned long long int) min((((unsigned long long int) arr_21 [i_0] [i_1] [i_10] [i_1] [i_1])), (((/* implicit */unsigned long long int) max((var_8), (arr_33 [i_0] [i_0] [i_0] [(_Bool)0]))))));
                    arr_39 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */_Bool) -7910944440488360044LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1]))) : (915855764082392872LL))) > (3395577573932341340LL))));
                }
                for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        arr_46 [i_12] [i_11] [i_11] [i_1 - 1] [i_0] [i_0] = -6605114896646290643LL;
                        var_26 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_15 [8ULL] [8ULL])))))) ? ((((!((_Bool)0))) ? (((/* implicit */unsigned long long int) arr_44 [i_11])) : (131071ULL))) : (min(((-(var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -8809004295900491867LL)) == (4215781226459456335ULL))))))));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 8141446855887079619ULL))))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            arr_51 [i_11] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (((17498542485028896823ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_12]))))))))));
                            arr_52 [i_0] [i_0] [i_11] [i_12] [i_11] [i_13] = (!(((/* implicit */_Bool) 7177101847883121711LL)));
                            var_28 = ((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) 684509464512079793ULL)) ? (arr_17 [i_0] [i_0]) : (5664191647348673025ULL))), (((unsigned long long int) (_Bool)1))))));
                        }
                        for (long long int i_14 = 1; i_14 < 11; i_14 += 3) 
                        {
                            arr_55 [i_0] [i_1] [i_1] [i_11] [(_Bool)1] [i_12] [i_14 - 1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_25 [i_1] [i_1 - 1] [i_1 - 1] [i_14] [i_14]), (arr_25 [i_1] [i_1] [i_1 - 1] [i_11] [9LL]))))) | ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1 - 1] [i_1] [i_14 + 1] [i_14 - 1]))) : (9378931963024310765ULL))));
                            arr_56 [i_0] [i_1 - 1] [(_Bool)1] [i_14] [(_Bool)1] |= max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10305297217822471994ULL)) ? (6268672062969009402LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (min((18446744073709551595ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
                            var_29 *= (_Bool)1;
                            var_30 = ((/* implicit */_Bool) ((max((18446744073709551615ULL), (min((var_0), (((/* implicit */unsigned long long int) 1552862080017039236LL)))))) | (max((((unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) (_Bool)0)), (1739717546726560383ULL)))))));
                        }
                    }
                    var_31 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) arr_15 [i_1 - 1] [i_1])) ^ (min((5643696728250174107ULL), (((/* implicit */unsigned long long int) arr_45 [i_11] [i_1] [i_1] [i_0])))))), (((3ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                        {
                            {
                                var_32 *= ((/* implicit */long long int) 3334822854735399048ULL);
                                arr_64 [i_0] [i_11] [i_0] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((3139421417747739054ULL), (((/* implicit */unsigned long long int) arr_45 [i_0] [i_1] [3ULL] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) 3936014490109049944LL)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [i_11] [i_15])), (15182813590211404421ULL)))) ? (((((/* implicit */_Bool) arr_61 [i_11])) ? (((/* implicit */unsigned long long int) arr_26 [i_15])) : (arr_1 [i_0]))) : (((unsigned long long int) arr_7 [i_0] [9LL] [2ULL]))))));
                            }
                        } 
                    } 
                }
                arr_65 [i_1] = arr_54 [(_Bool)1] [i_1];
            }
        } 
    } 
    var_33 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) (!(var_15)))), ((+(0ULL))))), (((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1))))));
}
