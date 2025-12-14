/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179228
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) ((min((arr_10 [i_4] [i_4 + 2] [(unsigned char)19] [(unsigned char)19] [i_4 + 3]), (((/* implicit */long long int) var_9)))) != (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (arr_10 [i_4 + 1] [i_4 + 3] [i_4] [i_4] [i_4 - 1])))));
                                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) -7083570792064980272LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (signed char i_6 = 2; i_6 < 21; i_6 += 2) 
                        {
                            {
                                arr_21 [(short)7] [i_1 - 1] [i_2] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_19 [i_0] [i_2] [i_6 - 1] [i_6 + 1] [i_6])))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
                                var_15 ^= ((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_1] [i_2] [i_5 + 1]);
                                arr_22 [(short)21] [i_5] [(short)21] [i_5] [i_6] = ((/* implicit */unsigned int) var_3);
                                var_16 = ((((/* implicit */_Bool) ((unsigned int) (-(var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_6] [i_5 + 1] [i_6 - 2] [i_1 + 4])))))) : (min((((/* implicit */long long int) arr_0 [i_0 + 1] [i_5 + 1])), (min((((/* implicit */long long int) arr_5 [i_5])), (476263029161809678LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 4; i_7 < 12; i_7 += 1) 
    {
        for (long long int i_8 = 2; i_8 < 10; i_8 += 4) 
        {
            {
                var_17 -= min((((/* implicit */int) ((((/* implicit */_Bool) -476263029161809688LL)) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (476263029161809688LL))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_8] [i_8] [i_7 - 4])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_2)) : (max((((/* implicit */int) var_12)), (arr_1 [i_8 + 2]))))));
                var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)125))));
                var_19 -= ((/* implicit */unsigned char) ((min(((_Bool)1), (arr_17 [(_Bool)1] [i_7] [i_7 - 2] [i_8 - 2]))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)105))) - (-7688209941037198336LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            for (unsigned char i_11 = 2; i_11 < 20; i_11 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), (((((min((-476263029161809664LL), (((/* implicit */long long int) var_11)))) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((unsigned char) arr_33 [i_9] [i_9] [(_Bool)1])), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)3307)))))))) : (-1988071057)))));
                    arr_34 [i_9] [i_10] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_11] [19U] [i_11])) % ((+(((/* implicit */int) arr_14 [i_11 + 2] [i_11] [i_11 + 1] [i_11 + 1] [i_11 - 2]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 22; i_12 += 1) 
        {
            for (signed char i_13 = 0; i_13 < 22; i_13 += 2) 
            {
                for (int i_14 = 1; i_14 < 21; i_14 += 1) 
                {
                    {
                        var_21 += ((/* implicit */_Bool) (-2147483647 - 1));
                        var_22 = ((/* implicit */long long int) min((var_22), (((((((/* implicit */_Bool) 1873890671U)) ? (-6152959800408980187LL) : (((/* implicit */long long int) arr_7 [i_12] [i_14 + 1] [i_14 - 1] [i_14 + 1])))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_7 [i_12] [i_13] [i_14 - 1] [i_14 + 1]) : (arr_7 [i_14] [i_14] [i_14 + 1] [i_14 + 1]))))))));
                        var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_19 [i_14] [i_14] [i_14 - 1] [i_14] [i_14])) ? (arr_19 [i_14] [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_14]) : (arr_19 [i_14] [i_14 - 1] [i_14 - 1] [i_14] [i_14]))), (var_0)));
                        var_24 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967277U)) ? (arr_35 [i_13] [i_14 + 1]) : (arr_35 [i_9] [i_14 - 1])))), (-476263029161809678LL)));
                        var_25 -= max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ (var_5)))) ? (((/* implicit */int) (_Bool)0)) : (((var_10) ? (((/* implicit */int) (_Bool)1)) : (1612348482))))), ((-((~(((/* implicit */int) arr_36 [(_Bool)1] [i_14])))))));
                    }
                } 
            } 
        } 
        arr_42 [i_9] [i_9] = ((/* implicit */long long int) (-((+(arr_12 [i_9] [i_9] [(short)6] [i_9] [i_9])))));
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (signed char i_16 = 1; i_16 < 20; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 20; i_17 += 2) 
                    {
                        for (int i_18 = 0; i_18 < 22; i_18 += 2) 
                        {
                            {
                                arr_53 [i_15] = ((/* implicit */_Bool) (signed char)125);
                                arr_54 [i_15] = (!(((/* implicit */_Bool) 3639359713U)));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_1))));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 22; i_19 += 2) 
                    {
                        for (short i_20 = 4; i_20 < 19; i_20 += 1) 
                        {
                            {
                                arr_62 [i_9] [i_9] [4] [i_15] [i_9] [i_9] = ((/* implicit */long long int) ((unsigned int) ((arr_57 [i_9] [i_20 - 1] [i_16 - 1]) | (((/* implicit */int) (_Bool)1)))));
                                var_27 = ((/* implicit */unsigned char) min((var_27), (var_2)));
                                var_28 = ((((/* implicit */int) min(((_Bool)1), (var_10)))) % (1612348487));
                            }
                        } 
                    } 
                    var_29 -= ((((/* implicit */int) var_11)) * (((/* implicit */int) (_Bool)0)));
                }
            } 
        } 
    }
    for (unsigned char i_21 = 2; i_21 < 8; i_21 += 2) 
    {
        var_30 = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_21 - 2] [i_21 - 2]))) % (arr_47 [(short)11] [i_21 + 1] [i_21 + 1] [i_21 + 1]))), (((/* implicit */long long int) ((int) arr_47 [18] [i_21 - 2] [i_21] [i_21 - 2])))));
        var_31 *= ((/* implicit */short) var_9);
        /* LoopSeq 2 */
        for (long long int i_22 = 1; i_22 < 8; i_22 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_23 = 0; i_23 < 10; i_23 += 1) 
            {
                for (unsigned int i_24 = 0; i_24 < 10; i_24 += 1) 
                {
                    {
                        var_32 = ((/* implicit */int) min((var_32), (((((/* implicit */_Bool) ((arr_60 [i_22 + 2] [i_21 + 1] [i_23]) | (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((arr_68 [i_22 - 1] [i_21] [i_22]) / (arr_68 [i_22 + 2] [i_21] [i_22]))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_60 [i_21] [i_21] [i_23]), (((/* implicit */long long int) 1255065080U))))))))))));
                        arr_73 [i_21] [i_21 + 2] [i_22] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_65 [i_21 + 2] [i_21] [i_22 + 2])) + (var_9)))) ? (((((/* implicit */_Bool) arr_7 [i_22] [i_22] [i_22] [i_22 - 1])) ? (arr_7 [i_22] [i_22] [i_22 + 2] [i_22 + 1]) : (1612348487))) : (((/* implicit */int) var_3))));
                    }
                } 
            } 
            arr_74 [i_21] [i_22] [i_22] = ((/* implicit */unsigned int) var_7);
            arr_75 [3] [i_22] = ((((((/* implicit */int) (short)1583)) / (((/* implicit */int) var_11)))) <= (((((/* implicit */_Bool) arr_51 [i_21 + 1] [i_21])) ? (((((/* implicit */_Bool) -1988071057)) ? (var_1) : (((/* implicit */int) var_4)))) : (((((/* implicit */int) var_10)) >> (((((/* implicit */int) (short)22059)) - (22056))))))));
        }
        for (long long int i_25 = 1; i_25 < 9; i_25 += 4) 
        {
            var_33 = ((/* implicit */long long int) min((var_1), (((((/* implicit */_Bool) ((int) var_3))) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) var_10))))));
            arr_78 [i_25 + 1] &= ((/* implicit */short) ((((((long long int) var_7)) / (((/* implicit */long long int) arr_24 [(unsigned char)10])))) >> (((/* implicit */int) max((((_Bool) 1612348464)), (arr_39 [i_21] [5U] [i_21] [i_25 + 1] [i_25 + 1]))))));
        }
    }
    var_34 = ((/* implicit */int) max((((/* implicit */unsigned int) var_1)), (min(((+(3639359713U))), (((/* implicit */unsigned int) ((int) var_1)))))));
    /* LoopNest 2 */
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
    {
        for (short i_27 = 1; i_27 < 16; i_27 += 2) 
        {
            {
                var_35 -= ((/* implicit */long long int) ((int) (short)-22075));
                arr_85 [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (((arr_50 [i_27] [i_27] [i_27] [i_27] [i_27 - 1]) + (arr_52 [i_26] [i_27] [i_26])))))) ? ((-(1612348487))) : (((/* implicit */int) ((short) var_11)))));
                /* LoopNest 2 */
                for (unsigned int i_28 = 0; i_28 < 18; i_28 += 2) 
                {
                    for (long long int i_29 = 2; i_29 < 15; i_29 += 1) 
                    {
                        {
                            arr_93 [i_27] [i_27] [i_28] [13LL] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)104))));
                            var_36 = ((/* implicit */_Bool) ((int) min((2352252337U), (((2848631915U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))))))));
                            arr_94 [i_26] [i_26] [i_27] = 1612348486;
                            var_37 = ((/* implicit */long long int) arr_49 [(_Bool)1] [i_27 + 1] [i_27] [i_29 + 3]);
                        }
                    } 
                } 
            }
        } 
    } 
}
