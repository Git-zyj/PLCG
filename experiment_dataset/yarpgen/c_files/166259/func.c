/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166259
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) ((_Bool) max((-5900061046829379153LL), (((/* implicit */long long int) var_7)))));
        var_13 = ((/* implicit */long long int) ((short) max((-1610564266), (-1882571565))));
        var_14 |= ((/* implicit */long long int) ((unsigned short) min((((14854523445297288342ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) var_2)))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    arr_10 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (+(17321819191134868985ULL)));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_13 [i_1] [i_2 + 1] [i_4] |= ((/* implicit */int) ((2251799813685248LL) == (((/* implicit */long long int) 2147483647))));
                        arr_14 [i_1] |= ((/* implicit */_Bool) var_5);
                        arr_15 [i_1] [i_1] [i_3] [i_4] [i_2 - 1] [(unsigned char)6] = arr_5 [i_1];
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        arr_26 [15ULL] [i_5] [i_5] = ((/* implicit */long long int) var_7);
                        arr_27 [i_1] [i_1] [i_1] [i_6] [i_7] = ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_1)))));
                        arr_28 [i_1] [i_5] [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) ((long long int) arr_9 [i_1] [i_1] [i_1] [i_1]));
                        var_15 = ((/* implicit */_Bool) (short)19388);
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) ((unsigned char) var_11)))));
                            arr_31 [i_7] [i_7] [i_6] [i_7] [i_6] [i_5] [i_7] = ((/* implicit */unsigned char) var_10);
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_8] [11ULL] [i_7] [i_6] [i_5] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7))))));
                            var_18 = ((/* implicit */unsigned long long int) ((short) (short)19388));
                            var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_8] [i_6]))) > (1124924882574682630ULL)));
                        }
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            arr_34 [i_7] = ((/* implicit */unsigned char) ((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_5] [i_6] [i_7] [i_9])))));
                            arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_7] [i_6])) && (((/* implicit */_Bool) arr_17 [i_1] [i_1]))));
                            var_20 |= ((/* implicit */unsigned char) ((short) (short)-19388));
                            var_21 = ((unsigned char) (_Bool)1);
                        }
                        for (int i_10 = 1; i_10 < 22; i_10 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) var_8)))));
                            arr_39 [i_1] [(unsigned char)19] [3LL] |= ((/* implicit */short) ((unsigned short) arr_36 [i_10 + 1] [i_5] [(short)19] [5] [14]));
                        }
                    }
                    for (int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        var_23 = ((/* implicit */int) max((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4222124650659840LL))))), (var_7))), (((/* implicit */unsigned int) max((max((var_8), (var_8))), (var_4))))));
                        var_24 = ((/* implicit */long long int) (unsigned char)134);
                    }
                    arr_44 [i_1] [i_1] [i_1] [i_1] = max((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) arr_42 [i_1] [10LL] [i_1] [i_1] [i_1])), (1951219009999203094ULL))));
                    arr_45 [i_1] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (14854523445297288342ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) ((-4222124650659841LL) == (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (arr_24 [i_1] [(unsigned char)5] [i_1] [i_6] [(unsigned char)3])))))));
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((long long int) -4222124650659841LL)) : (((/* implicit */long long int) min(((+(((/* implicit */int) arr_38 [9LL] [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */int) (_Bool)0)))))));
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 2; i_13 < 22; i_13 += 2) 
        {
            arr_50 [i_12] [i_13] = ((/* implicit */long long int) var_10);
            var_26 = ((/* implicit */unsigned char) ((_Bool) var_11));
            arr_51 [i_13] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) var_11)) : (-1657890263)))) && (((/* implicit */_Bool) var_5))));
        }
        var_27 = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
        /* LoopSeq 2 */
        for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) 
        {
            var_28 = ((/* implicit */long long int) ((_Bool) (~(var_7))));
            /* LoopSeq 3 */
            for (long long int i_15 = 2; i_15 < 20; i_15 += 4) 
            {
                arr_57 [i_15] [i_15] [i_14] [i_12] = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) 4222124650659840LL)) - (17321819191134868985ULL)))));
                arr_58 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_15 + 1] [i_15 + 2] [i_15 + 2] [i_15 + 1])) != (-1882571568)));
                var_29 = ((/* implicit */long long int) ((int) arr_37 [i_12] [i_15 + 3] [i_15 - 1] [i_15 + 1] [i_15]));
            }
            for (unsigned short i_16 = 4; i_16 < 22; i_16 += 4) 
            {
                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)72)) || (((/* implicit */_Bool) 3592220628412263257ULL))));
                var_31 = ((long long int) arr_56 [i_16] [i_16 - 4] [i_16] [i_16 - 2]);
                arr_62 [i_12] [i_14] [i_14] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (arr_37 [i_16 - 4] [i_16 - 2] [i_16 - 2] [i_16] [i_16 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)72)))));
            }
            for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 3) 
            {
                arr_65 [i_17] [i_17] [18] = ((/* implicit */_Bool) ((unsigned short) ((short) arr_55 [i_12] [i_12] [i_12] [i_12])));
                var_32 |= ((/* implicit */unsigned short) ((int) var_4));
            }
            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((long long int) var_11)))));
            var_34 = ((/* implicit */int) ((short) var_0));
        }
        for (int i_18 = 1; i_18 < 20; i_18 += 4) 
        {
            var_35 = ((/* implicit */_Bool) ((long long int) var_4));
            arr_69 [i_18] = ((/* implicit */int) ((unsigned short) (short)30720));
            var_36 = ((/* implicit */short) ((_Bool) var_11));
        }
        /* LoopNest 2 */
        for (short i_19 = 0; i_19 < 23; i_19 += 2) 
        {
            for (short i_20 = 0; i_20 < 23; i_20 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 3) 
                    {
                        for (int i_22 = 0; i_22 < 23; i_22 += 3) 
                        {
                            {
                                arr_81 [i_21] [i_21] [i_20] = ((/* implicit */int) (unsigned char)84);
                                arr_82 [i_12] [i_21] = ((/* implicit */unsigned short) arr_38 [i_12] [i_12] [i_20] [i_21] [i_22]);
                                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (-(arr_6 [i_12] [i_19] [i_20]))))));
                                var_38 = ((/* implicit */_Bool) ((unsigned char) arr_5 [i_22]));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */short) ((unsigned char) arr_4 [i_12]));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (short i_23 = 0; i_23 < 18; i_23 += 3) 
    {
        var_40 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_33 [i_23] [i_23] [i_23])))), (((((/* implicit */int) var_11)) + (((/* implicit */int) arr_33 [i_23] [i_23] [i_23]))))));
        var_41 = ((/* implicit */unsigned char) var_10);
        var_42 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [i_23] [i_23] [i_23] [(_Bool)1] [i_23] [i_23] [i_23]))));
    }
    var_43 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((short) ((_Bool) -4222124650659863LL)))), (min((((/* implicit */unsigned long long int) (short)4092)), (max((((/* implicit */unsigned long long int) (short)-19389)), (var_9)))))));
    var_44 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (var_0)));
}
