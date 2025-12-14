/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121263
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                                arr_12 [i_0] [i_0] [i_2 + 1] [i_3] [i_4] [i_0] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_1 + 3] [i_1] [i_2 + 2])) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))))));
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (-(var_8))))));
                                var_22 = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]);
                                var_23 = ((/* implicit */_Bool) arr_5 [i_2] [i_3] [i_4]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned int i_5 = 1; i_5 < 21; i_5 += 2) /* same iter space */
                {
                    arr_17 [i_0] [i_5] [i_5] [i_0] = ((/* implicit */unsigned int) 4932097390172323379ULL);
                    var_24 = ((/* implicit */unsigned int) (_Bool)1);
                    var_25 = ((((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))))) > ((~(((/* implicit */int) (_Bool)1)))));
                    var_26 = 14237686838158174863ULL;
                }
                for (unsigned int i_6 = 1; i_6 < 21; i_6 += 2) /* same iter space */
                {
                    arr_21 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */_Bool) var_7);
                    arr_22 [i_0] [i_0] [i_0] [i_6] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_1 [i_1] [i_6]), ((-(arr_1 [i_1] [i_6]))))))));
                }
                for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 1) 
                {
                    arr_27 [16U] [i_7] = var_19;
                    var_27 = (!(((/* implicit */_Bool) arr_11 [i_1] [i_1 + 1] [i_7 + 2] [i_1 + 1] [i_1 + 1] [i_0] [i_0])));
                    arr_28 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) (+(min((max((arr_5 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (_Bool)1))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_28 *= ((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0]);
                    var_29 = (-(18010000462970880ULL));
                }
                /* LoopSeq 1 */
                for (unsigned int i_9 = 1; i_9 < 19; i_9 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 4; i_11 < 19; i_11 += 1) 
                        {
                            {
                                var_30 = ((unsigned long long int) (!(((/* implicit */_Bool) ((int) (_Bool)1)))));
                                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) 10161490740705403266ULL))));
                                var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (-1260716622)));
                                var_33 = ((/* implicit */_Bool) min(((+(arr_31 [i_9 + 3]))), (arr_29 [i_0] [i_1] [i_9 - 1] [i_0])));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_12 = 4; i_12 < 22; i_12 += 2) 
                    {
                        var_34 &= ((/* implicit */unsigned int) (((+((+(arr_8 [i_0] [12ULL]))))) * (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_3 [i_0])))))))));
                        var_35 += ((/* implicit */unsigned long long int) var_9);
                        var_36 = ((/* implicit */int) ((_Bool) ((arr_15 [i_0]) - ((+(arr_1 [i_0] [i_0]))))));
                    }
                    for (int i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        var_37 = ((/* implicit */_Bool) (+(9653870766604287539ULL)));
                        var_38 = ((/* implicit */unsigned int) arr_20 [i_0] [i_1] [i_9] [i_13]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_14 = 3; i_14 < 22; i_14 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) arr_34 [i_9] [i_9] [i_9] [i_9] [i_9]);
                        /* LoopSeq 2 */
                        for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) /* same iter space */
                        {
                            arr_53 [i_0] [i_1] [i_9] [i_1] [i_15] = (_Bool)1;
                            arr_54 [i_0] [i_1] [i_0] [i_14] [i_15] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4209057235551376752ULL))));
                            arr_55 [i_9] [i_9] [i_1] = (+(4592282884310249279ULL));
                            arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_26 [i_9 - 1] [i_9 - 1] [i_14 - 3] [i_9 - 1];
                            var_40 = ((/* implicit */unsigned long long int) (-(1745957715)));
                        }
                        for (unsigned int i_16 = 0; i_16 < 23; i_16 += 1) /* same iter space */
                        {
                            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) arr_19 [i_0] [(_Bool)1]))));
                            var_42 = ((/* implicit */int) 719423675U);
                        }
                        arr_61 [i_0] [i_1 + 2] [16ULL] [i_14] [i_1 + 3] = ((/* implicit */unsigned int) arr_46 [i_0] [i_1] [i_0]);
                    }
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_17 = 1; i_17 < 8; i_17 += 2) 
    {
        var_43 = ((4209057235551376762ULL) + (3ULL));
        var_44 &= ((/* implicit */_Bool) 16928678369049016502ULL);
        arr_66 [i_17 + 4] [i_17 + 4] = ((/* implicit */_Bool) ((int) (_Bool)0));
    }
    var_45 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 17293350833551137879ULL)))))))), ((-(18446744073709551612ULL)))));
}
