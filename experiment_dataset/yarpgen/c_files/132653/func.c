/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132653
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (var_2)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((unsigned short) (unsigned char)42)), (((/* implicit */unsigned short) ((signed char) (unsigned char)42))))))) ^ (((unsigned int) -835824274))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-(((long long int) (-(var_10))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~(835824273)));
    }
    for (unsigned int i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((var_2), (((/* implicit */unsigned long long int) (-(835824274)))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (long long int i_3 = 2; i_3 < 8; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_20 *= ((/* implicit */long long int) min((((unsigned short) ((short) var_7))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 12232911531456559188ULL)))))));
                        arr_14 [i_1] [i_2] [i_3 - 1] [i_4] &= ((/* implicit */signed char) max((11574632941435155724ULL), (0ULL)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_5 = 3; i_5 < 15; i_5 += 4) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned int) ((9023309418176019691LL) / (9023309418176019700LL)));
        arr_20 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49152)) ? (((unsigned long long int) -835824274)) : (((/* implicit */unsigned long long int) var_16))));
        /* LoopSeq 4 */
        for (short i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            arr_24 [i_6] [i_6] [i_6] = ((/* implicit */signed char) (unsigned char)210);
            /* LoopSeq 3 */
            for (int i_7 = 1; i_7 < 14; i_7 += 2) 
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_16))));
                arr_29 [i_7] [(unsigned char)12] [(unsigned char)12] [i_5] |= ((/* implicit */unsigned short) ((short) var_13));
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    arr_33 [i_5] [i_5] [i_5] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) -835824280))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 3; i_9 < 15; i_9 += 3) 
                    {
                        arr_37 [i_6] = ((/* implicit */long long int) ((var_1) | (6872111132274395891ULL)));
                        arr_38 [i_6] [i_8] [i_7] [i_5] [i_5] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)15)) >> (((((/* implicit */int) var_15)) - (33710)))));
                        var_22 |= ((/* implicit */unsigned char) 3821741448U);
                        var_23 = ((/* implicit */short) (!((_Bool)1)));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_42 [i_5 + 1] [i_6] [i_7] [i_8] [i_6] = ((/* implicit */signed char) var_5);
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((unsigned int) (-(920368712U)))))));
                        var_25 = ((/* implicit */unsigned char) ((short) var_16));
                    }
                }
                for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    arr_45 [i_5 - 2] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_12))));
                }
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_48 [i_6] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (3528415749080285618ULL));
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (!(((_Bool) (unsigned char)218)))))));
            }
            for (int i_13 = 1; i_13 < 15; i_13 += 1) 
            {
                arr_52 [i_6] = ((/* implicit */unsigned char) var_10);
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((short) (signed char)-45)))));
                arr_53 [i_5] [i_5] [i_6] [i_13] = ((/* implicit */short) (+(2322648747U)));
            }
            arr_54 [i_5] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) -3527294042288635276LL))));
        }
        for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (unsigned short i_16 = 0; i_16 < 16; i_16 += 1) 
                {
                    for (unsigned short i_17 = 0; i_17 < 16; i_17 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_13))))) && (((_Bool) var_12))));
                            arr_66 [i_5 - 3] [i_14] [i_16] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (unsigned short)65521)))));
                        }
                    } 
                } 
            } 
            arr_67 [i_5] = ((/* implicit */long long int) (~(3374598580U)));
        }
        for (long long int i_18 = 1; i_18 < 13; i_18 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_19 = 0; i_19 < 16; i_19 += 2) 
            {
                /* LoopSeq 3 */
                for (short i_20 = 0; i_20 < 16; i_20 += 3) 
                {
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) var_13))))));
                    arr_74 [i_5 - 3] [i_18 - 1] &= ((/* implicit */long long int) var_4);
                    arr_75 [i_5 + 1] [i_18] [i_19] [i_20] [i_20] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1708858817)) || (((/* implicit */_Bool) (short)-30338)))))) + (4236376026U));
                    arr_76 [i_20] [9] [i_5] [i_18] [i_18 + 2] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) var_7));
                }
                for (unsigned char i_21 = 0; i_21 < 16; i_21 += 1) 
                {
                    arr_81 [i_5] [i_5 + 1] = (unsigned char)42;
                    arr_82 [i_21] [i_19] [i_18] [i_5] [i_5] |= ((/* implicit */unsigned long long int) ((long long int) ((int) var_3)));
                }
                for (int i_22 = 0; i_22 < 16; i_22 += 3) 
                {
                    arr_85 [i_5] [i_18 - 1] [i_22] [i_22] = (~(((/* implicit */int) (unsigned char)37)));
                    /* LoopSeq 4 */
                    for (unsigned int i_23 = 0; i_23 < 16; i_23 += 3) 
                    {
                        arr_88 [i_22] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)214)) >> (((11574632941435155739ULL) - (11574632941435155712ULL)))));
                        arr_89 [i_5] [i_22] [i_19] [i_22] = ((/* implicit */unsigned char) ((((unsigned int) var_0)) & (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
                        arr_90 [i_5] [i_18] [i_18] [i_22] [i_23] [i_22] = ((/* implicit */long long int) var_13);
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (+(((/* implicit */int) var_9)))))));
                    }
                    for (unsigned short i_24 = 0; i_24 < 16; i_24 += 2) 
                    {
                        arr_94 [i_5] [i_18] [i_22] = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_12)) ^ (var_10)));
                        arr_95 [i_5] [i_5 - 1] [i_5] [i_22] [1LL] [i_5] = var_5;
                        arr_96 [i_22] [i_18 + 2] [6LL] [i_22] [i_18 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)6799)) ^ (524855159)));
                        arr_97 [i_22] [1U] = ((/* implicit */int) 920368712U);
                    }
                    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                    {
                        arr_101 [i_5] [i_22] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) -24902978))) >> (((((/* implicit */int) (unsigned char)42)) - (33)))));
                        var_32 -= ((((/* implicit */long long int) ((/* implicit */int) (short)0))) == (-1748956916099629267LL));
                        arr_102 [i_5] [i_18] [i_22] [i_22] [i_25] = ((/* implicit */signed char) (+(((int) (_Bool)0))));
                        arr_103 [i_5] [i_18 + 3] [i_19] [i_22] [i_22] = ((/* implicit */long long int) (-(((unsigned int) (short)63))));
                        arr_104 [i_25 + 1] [i_19] [i_19] [(unsigned char)10] |= ((/* implicit */unsigned char) (~(4219037656881955268ULL)));
                    }
                    for (int i_26 = 0; i_26 < 16; i_26 += 4) 
                    {
                        arr_107 [i_26] [i_22] [i_22] [i_18 + 2] = var_8;
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (+(((/* implicit */int) (signed char)0)))))));
                        arr_108 [i_5 - 3] [i_5] [i_5] [i_22] [i_22] [i_22] [i_5 - 3] = ((/* implicit */unsigned short) (~(2565086901729340820ULL)));
                        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) var_4))));
                        arr_109 [i_5] [i_22] [i_19] [i_22] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))) > (2565086901729340820ULL))))));
                    }
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (((~(((/* implicit */int) var_11)))) + (((/* implicit */int) ((short) 1734828386))))))));
                }
                var_36 = ((/* implicit */int) var_8);
            }
            /* LoopSeq 3 */
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_28 = 0; i_28 < 16; i_28 += 2) 
                {
                    for (unsigned char i_29 = 0; i_29 < 16; i_29 += 3) 
                    {
                        {
                            arr_117 [i_5] [i_5] [i_5] [i_5] [i_27] = ((/* implicit */unsigned short) ((-1757745591568182217LL) + (((/* implicit */long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_5)))))));
                            var_37 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (-1757745591568182215LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))));
                            var_38 += ((/* implicit */unsigned char) ((_Bool) -1708858817));
                            var_39 = ((/* implicit */_Bool) min((var_39), (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned short)7928))))));
                        }
                    } 
                } 
                arr_118 [i_27] [i_18] [i_27] = ((/* implicit */long long int) ((var_10) << ((((+(((/* implicit */int) var_0)))) - (42865)))));
                arr_119 [i_27] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)2032))));
            }
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) (signed char)-68)) + (72)))));
                arr_124 [i_30] [i_18 + 3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-2033)) >= (((/* implicit */int) (short)12134))));
                arr_125 [i_5 - 3] [i_5] [i_5] |= ((/* implicit */signed char) (~(2860475387U)));
                arr_126 [i_18 - 1] = (!(((/* implicit */_Bool) ((unsigned char) var_6))));
                /* LoopNest 2 */
                for (unsigned long long int i_31 = 0; i_31 < 16; i_31 += 2) 
                {
                    for (unsigned short i_32 = 0; i_32 < 16; i_32 += 2) 
                    {
                        {
                            arr_134 [i_32] [i_5] [i_30] [i_18 + 1] [i_5] = ((/* implicit */long long int) (-(0)));
                            var_41 = ((long long int) 2322648747U);
                        }
                    } 
                } 
            }
            for (unsigned char i_33 = 1; i_33 < 12; i_33 += 4) 
            {
                var_42 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)-13435)))))));
                /* LoopSeq 2 */
                for (long long int i_34 = 0; i_34 < 16; i_34 += 1) 
                {
                    arr_141 [i_33] [i_18] [i_33] [i_34] = ((/* implicit */int) (unsigned char)188);
                    var_43 = ((/* implicit */unsigned short) var_9);
                    arr_142 [i_5 - 1] [i_5] [i_5] [i_33] = ((/* implicit */short) ((((var_3) + (2147483647))) << (((2709102657U) - (2709102657U)))));
                    var_44 += ((/* implicit */unsigned int) var_2);
                }
                for (unsigned long long int i_35 = 3; i_35 < 14; i_35 += 3) 
                {
                    var_45 = ((/* implicit */unsigned int) (short)-20114);
                    arr_145 [i_18] [i_33] = ((/* implicit */int) var_1);
                }
            }
        }
        for (unsigned short i_36 = 0; i_36 < 16; i_36 += 4) 
        {
            arr_148 [i_36] [i_5] [i_36] = ((/* implicit */unsigned short) ((short) (unsigned short)62193));
            var_46 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
            arr_149 [i_36] [i_5] = ((/* implicit */_Bool) var_14);
            /* LoopSeq 2 */
            for (signed char i_37 = 0; i_37 < 16; i_37 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_38 = 3; i_38 < 13; i_38 += 3) 
                {
                    for (signed char i_39 = 1; i_39 < 14; i_39 += 2) 
                    {
                        {
                            var_47 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (var_2) : (var_2)));
                            arr_158 [i_37] [i_36] [i_36] [i_36] [i_36] [i_36] = (+(((/* implicit */int) var_8)));
                            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) (unsigned short)62193))));
                            arr_159 [i_5] [i_37] [i_5 - 3] [i_5] [i_5 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) | (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68))) : (1757745591568182227LL)));
                            arr_160 [i_5 - 3] [i_36] [i_37] [i_38] [i_37] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-94)) ? ((+(1495080803))) : (((/* implicit */int) var_7))));
                        }
                    } 
                } 
                var_49 = ((/* implicit */unsigned long long int) var_3);
            }
            for (unsigned long long int i_40 = 2; i_40 < 14; i_40 += 3) 
            {
                var_50 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(553854554U)))) & (var_16)));
                arr_163 [i_40] [i_5 - 3] [i_36] [i_40] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)68))));
                arr_164 [i_36] |= ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) - (var_6)));
            }
        }
        arr_165 [1LL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)18272))));
    }
}
