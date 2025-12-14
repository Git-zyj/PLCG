/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166992
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
    var_10 = ((/* implicit */int) var_3);
    var_11 = ((/* implicit */int) ((min((((((/* implicit */_Bool) 7264486274316827738ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7868630754650708449ULL))), (((/* implicit */unsigned long long int) var_3)))) << (((var_7) + (1629429572)))));
    var_12 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_3))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0 - 3] [i_0] = ((/* implicit */int) arr_1 [17]);
        var_13 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (arr_0 [20ULL]) : (arr_0 [(signed char)8])))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 ^= ((/* implicit */unsigned int) ((unsigned long long int) arr_5 [8]));
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((arr_3 [i_0 - 1] [i_0 - 2]) >= (arr_3 [i_0 - 2] [i_0 + 4]))))));
            var_16 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [(_Bool)1] [i_0 - 1]))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 4) 
        {
            arr_8 [i_0 - 1] [i_0] = ((/* implicit */int) ((unsigned long long int) (-(arr_5 [i_0]))));
            /* LoopSeq 1 */
            for (signed char i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                arr_12 [i_0] [i_2 - 2] [i_3 - 1] = ((/* implicit */_Bool) var_8);
                /* LoopSeq 1 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (642830588U) : (((/* implicit */unsigned int) 1860290795))));
                        var_18 = ((/* implicit */unsigned int) var_2);
                    }
                    for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */int) ((unsigned int) arr_9 [i_2 + 4] [i_3 + 1] [i_4 - 1]));
                        var_20 = ((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [i_2] [i_4]);
                    }
                    arr_20 [i_0] [i_0] [i_4] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 1] [i_3 - 1] [i_2 - 2] [i_2 + 3])) % (((/* implicit */int) arr_16 [i_0]))))) / ((+(9860105704430338346ULL)))))) : (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 1] [i_3 - 1] [i_2 - 2] [i_2 + 3])) * (((/* implicit */int) arr_16 [i_0]))))) / ((+(9860105704430338346ULL))))));
                    arr_21 [21ULL] [i_2] [21ULL] [i_3] [i_0] [(signed char)18] = ((/* implicit */unsigned long long int) var_9);
                    /* LoopSeq 2 */
                    for (int i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */_Bool) ((unsigned long long int) var_9));
                        arr_25 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_14 [i_7 + 1] [i_2 - 3]);
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        var_22 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2]))));
                        arr_28 [i_0 + 3] [i_0] [i_3] [i_2] [i_0 + 3] [i_0] [i_0 + 3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) + (var_7)))) + (18010648324075671730ULL)));
                        var_23 = ((/* implicit */unsigned long long int) var_7);
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 13055230349387585017ULL)) ? (4033897533731369677ULL) : (5391513724321966585ULL)))) ? (var_4) : (((/* implicit */unsigned long long int) (~(arr_6 [i_4]))))))));
                    }
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_8)) ? (5391513724321966564ULL) : (((/* implicit */unsigned long long int) arr_19 [i_0] [i_2 + 4] [i_0] [7ULL] [18U])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_10 = 2; i_10 < 20; i_10 += 1) 
                    {
                        arr_34 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) <= ((~(arr_32 [8U] [i_0] [i_0])))));
                        var_26 = ((/* implicit */int) max((var_26), (((int) 1003688574))));
                        arr_35 [i_3 - 1] [i_0] [i_3 - 1] [i_0] [i_0] = ((/* implicit */int) (((_Bool)1) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (9223372036720558080ULL))) : (((/* implicit */unsigned long long int) var_7))));
                        arr_36 [i_0] [i_2 + 3] [i_3] = ((/* implicit */unsigned long long int) ((int) arr_30 [(_Bool)1] [i_9] [i_3] [i_0 - 1]));
                        arr_37 [i_10] [i_0] [i_3] [i_0] [i_0 - 1] = ((signed char) 13152317139147823538ULL);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_40 [i_9] [i_0] [i_3] [i_9] [i_11] [i_3] = ((arr_13 [i_0] [i_2] [18ULL] [i_0]) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) arr_13 [i_0] [(_Bool)1] [(_Bool)1] [i_0])));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((unsigned long long int) arr_23 [i_3 - 1] [i_0 + 1] [i_2 - 1] [i_3])))));
                        var_28 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (arr_0 [i_0]))) ^ (((/* implicit */unsigned long long int) arr_29 [i_2] [i_3 + 1] [i_9])));
                        arr_41 [i_0 + 3] [i_0] [i_3] [i_9] [i_11] [i_11] = arr_3 [i_3 - 1] [i_2 - 3];
                    }
                    var_29 &= ((/* implicit */unsigned int) var_0);
                    var_30 ^= ((/* implicit */_Bool) arr_38 [i_2 - 2]);
                }
                for (int i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    arr_44 [i_0] [i_0] [i_3] [i_12] = ((/* implicit */int) var_4);
                    var_31 += ((/* implicit */signed char) ((_Bool) arr_13 [i_2] [i_2 - 3] [i_3 - 1] [i_12]));
                    var_32 = ((/* implicit */unsigned int) (~(11972088349977423272ULL)));
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        arr_47 [i_0] [i_0 + 4] [i_0] [21ULL] [i_0] [21ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7868630754650708449ULL)) || (((/* implicit */_Bool) 694305777U))));
                        arr_48 [i_0] [i_2] [i_12] [i_3 - 1] [i_13] [18] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                }
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                var_33 = var_5;
                var_34 ^= ((arr_6 [i_0]) + (((/* implicit */int) var_6)));
                var_35 = ((/* implicit */unsigned long long int) ((11972088349977423272ULL) != (((/* implicit */unsigned long long int) -1272624718))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 4) 
                {
                    arr_56 [i_0] [i_2] [i_15] [i_16] [i_0] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1860290795)) ? (((/* implicit */int) arr_45 [i_0] [i_0] [i_15])) : (((/* implicit */int) (signed char)-5))));
                    arr_57 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
                arr_58 [i_0] = ((unsigned long long int) 5391513724321966598ULL);
                /* LoopSeq 1 */
                for (int i_17 = 0; i_17 < 22; i_17 += 4) 
                {
                    var_36 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 10U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))) : (6907126096299800928ULL)))));
                    var_37 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (arr_27 [i_2] [i_2] [i_15] [i_2 + 3] [i_17] [i_0 + 2]));
                    arr_62 [i_0] [15U] = ((((/* implicit */_Bool) arr_59 [5ULL] [i_0 + 2] [i_0 + 2] [i_2 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((-(14481934153644255875ULL))));
                    var_38 *= ((arr_0 [i_17]) - (((/* implicit */unsigned long long int) arr_39 [i_17] [i_2 - 1] [(signed char)10] [(signed char)12])));
                }
            }
            for (unsigned int i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                var_39 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_6 [i_18])) ? (((/* implicit */int) (signed char)-67)) : (470778780)))));
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                {
                    for (signed char i_20 = 0; i_20 < 22; i_20 += 4) 
                    {
                        {
                            arr_72 [i_0 - 3] [i_0 - 3] [i_0] [i_19 + 1] [(_Bool)1] [17] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_3))))));
                            var_40 = ((/* implicit */_Bool) min((var_40), ((!(((/* implicit */_Bool) arr_4 [i_0 - 3] [i_18]))))));
                        }
                    } 
                } 
            }
            var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) (-(-1))))));
        }
        for (int i_21 = 1; i_21 < 20; i_21 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_22 = 1; i_22 < 19; i_22 += 4) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_23 = 2; i_23 < 19; i_23 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_42 = ((/* implicit */signed char) ((var_8) & (((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */unsigned int) 2085741090)) : (3652136696U)))));
                        arr_85 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
                        var_43 = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((2294956665949211006ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) << (((((((/* implicit */int) arr_52 [i_0])) + (((/* implicit */int) var_5)))) - (99)))))) : (((/* implicit */signed char) ((((2294956665949211006ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) << (((((((((/* implicit */int) arr_52 [i_0])) + (((/* implicit */int) var_5)))) - (99))) + (210))))));
                    }
                    var_44 = ((/* implicit */_Bool) max((var_44), (((1706125196002207097ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_45 = ((/* implicit */unsigned long long int) (signed char)-6);
                }
                for (signed char i_25 = 2; i_25 < 19; i_25 += 1) /* same iter space */
                {
                    var_46 = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) 4191998035U)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_26 = 2; i_26 < 21; i_26 += 4) 
                    {
                        var_47 = ((/* implicit */signed char) ((_Bool) arr_81 [i_0] [i_0] [i_0] [i_25 + 2] [i_0]));
                        var_48 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_51 [i_25] [i_21 + 1] [i_0])))) ? (((/* implicit */unsigned long long int) max((arr_3 [i_26 - 2] [i_21 + 1]), (arr_3 [i_26 + 1] [i_21 - 1])))) : (arr_30 [i_0] [i_21] [i_21 + 2] [i_0 + 3])));
                        var_49 = ((/* implicit */_Bool) arr_68 [i_0] [i_21] [i_22] [i_25] [i_26] [4]);
                    }
                    for (unsigned long long int i_27 = 0; i_27 < 22; i_27 += 1) 
                    {
                        arr_95 [i_0 - 1] [i_0] [i_22] [i_25 + 1] [i_27] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_79 [i_25] [i_22 + 2] [i_25 - 1] [i_22 + 2] [i_21 + 1] [i_0])), (2543842569U)))), (((unsigned long long int) var_9))));
                        var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) (signed char)-43))));
                        var_51 &= ((((/* implicit */_Bool) var_9)) ? (4294967288U) : (((/* implicit */unsigned int) (-(arr_7 [i_21 + 1])))));
                        arr_96 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_27] = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_97 [7ULL] [i_0] [7ULL] [i_0] [i_27] [i_21] = ((/* implicit */unsigned long long int) var_3);
                    }
                    var_52 = ((/* implicit */unsigned int) (signed char)49);
                }
                /* vectorizable */
                for (unsigned int i_28 = 0; i_28 < 22; i_28 += 2) 
                {
                    arr_102 [i_28] [i_0] [8ULL] [8ULL] [i_0] [i_0] = ((/* implicit */unsigned int) (-(arr_1 [i_21 + 2])));
                    var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_1)));
                    var_54 -= var_2;
                    var_55 = ((/* implicit */_Bool) ((((676139933U) <= (((/* implicit */unsigned int) 66846720)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5391513724321966583ULL)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (signed char)16))))) : (11591558340841997570ULL)));
                }
                var_56 = ((/* implicit */unsigned int) max((var_56), (((/* implicit */unsigned int) (~(((int) arr_83 [i_21 - 1] [i_22] [(_Bool)1])))))));
                arr_103 [i_22] [i_0] [i_0] [(_Bool)1] = arr_59 [i_0] [i_21 - 1] [i_22 - 1] [i_22 - 1];
            }
            for (unsigned long long int i_29 = 2; i_29 < 21; i_29 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_30 = 0; i_30 < 22; i_30 += 2) 
                {
                    for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
                    {
                        {
                            arr_112 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_29] = ((/* implicit */_Bool) (+((-(var_7)))));
                            arr_113 [i_0] [i_21] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_67 [i_21] [i_21] [i_21] [i_0 + 3])), (var_0)))), (18156805549835029449ULL)));
                            var_57 |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_8)) ? (arr_61 [i_21] [i_21 - 1] [i_21 - 1] [i_29 - 2]) : (arr_80 [i_21 + 1] [i_30] [i_31 - 1] [i_31] [i_31 - 1])))));
                        }
                    } 
                } 
                var_58 ^= ((/* implicit */unsigned long long int) 1860290780);
            }
            var_59 *= ((/* implicit */signed char) var_4);
        }
        for (int i_32 = 1; i_32 < 20; i_32 += 2) /* same iter space */
        {
            arr_117 [i_0] = ((/* implicit */unsigned int) (+(1860290813)));
            arr_118 [i_0] = ((/* implicit */unsigned long long int) var_8);
            var_60 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_67 [14ULL] [i_0 + 1] [i_0] [5ULL]))));
        }
        var_61 = ((/* implicit */int) (-((+(arr_29 [i_0 - 2] [i_0 - 2] [i_0 - 2])))));
        arr_119 [i_0] [20U] &= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_23 [i_0 - 1] [i_0 - 2] [i_0] [i_0 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_60 [20ULL] [i_0])) || (((/* implicit */_Bool) (signed char)-21))))) : (((/* implicit */int) (_Bool)1)))));
    }
}
