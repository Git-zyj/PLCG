/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147135
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
    var_20 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_18)) ? (5651559363747779879ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))), (((/* implicit */unsigned long long int) 7LL))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((int) -2071170271))))), (10739142192189749574ULL)));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) 17227282052282153260ULL))));
                    arr_9 [i_2] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)2)) ? (var_11) : (18446744073709551615ULL))), (1ULL)));
                }
                arr_10 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 12795184709961771737ULL))))), (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-109))) : (((((/* implicit */_Bool) 12795184709961771737ULL)) ? (12419705993566225076ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (+(7707601881519802034ULL)));
    /* LoopSeq 4 */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        var_23 = ((/* implicit */short) (signed char)(-127 - 1));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) -7LL))));
        arr_13 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */unsigned long long int) ((int) max((var_13), (((/* implicit */unsigned long long int) var_15)))))) : (7167902863983265247ULL)));
        arr_14 [i_3] = ((/* implicit */signed char) ((long long int) (+(var_11))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 3) 
    {
        arr_19 [i_4 - 1] = ((/* implicit */short) max((var_9), (var_17)));
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_6 = 3; i_6 < 10; i_6 += 2) 
            {
                var_25 = max((((((/* implicit */_Bool) 358001605U)) ? (((unsigned long long int) var_19)) : (var_6))), (((/* implicit */unsigned long long int) -6756097558539080094LL)));
                var_26 = ((/* implicit */unsigned int) max((var_26), (var_5)));
            }
            arr_26 [i_4 + 1] [i_5] [i_5] = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */unsigned long long int) 0)) : (18446744073709551591ULL))))), (((/* implicit */unsigned long long int) (unsigned char)18))));
            arr_27 [i_5] = 12795184709961771737ULL;
        }
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_8 = 4; i_8 < 10; i_8 += 3) 
            {
                arr_34 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 9076661083877709264LL)) : (13ULL)));
                /* LoopSeq 2 */
                for (long long int i_9 = 4; i_9 < 10; i_9 += 4) 
                {
                    arr_38 [i_7] [i_7] = -860416535;
                    arr_39 [i_4] [i_7] [i_7] [i_7] [i_4] = ((/* implicit */unsigned short) var_15);
                    arr_40 [i_4 - 1] [i_4 - 1] [i_9] [10ULL] &= ((/* implicit */long long int) var_3);
                    /* LoopSeq 1 */
                    for (signed char i_10 = 4; i_10 < 10; i_10 += 1) 
                    {
                        arr_45 [i_4] [i_7] [i_8] [i_8] [i_9] [i_10] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -9076661083877709264LL)) ? (var_10) : (((/* implicit */unsigned long long int) var_0))));
                        var_27 ^= ((/* implicit */unsigned int) var_14);
                        arr_46 [i_7] [i_9] [i_8] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) var_0)) : (6449505931081958815ULL)));
                        var_28 = var_8;
                    }
                }
                for (signed char i_11 = 3; i_11 < 9; i_11 += 4) 
                {
                    arr_51 [i_11] [i_7] [i_7] [i_4 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((int) 14743117869809008616ULL))) : (-3812315530875541445LL)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 2) 
                    {
                        var_29 += ((/* implicit */unsigned int) 4LL);
                        arr_55 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4222273648531500489LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        arr_56 [i_7] [i_7] [i_8 - 3] = ((/* implicit */_Bool) ((unsigned long long int) 3716303104U));
                    }
                    var_30 = ((/* implicit */long long int) 12536682322678137349ULL);
                    arr_57 [i_7] [i_7] [i_8 - 4] [i_7] [i_7] [i_4] = ((/* implicit */unsigned int) 3711502315790286175ULL);
                }
            }
            for (long long int i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
            {
                arr_61 [6ULL] [i_7] [i_7] [6ULL] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) max(((unsigned short)9), ((unsigned short)19098))))))), (min((((/* implicit */unsigned long long int) var_4)), ((+(3165422829389030296ULL)))))));
                arr_62 [i_7] = ((/* implicit */unsigned long long int) var_14);
                arr_63 [i_4 + 1] [i_4] [i_4] [i_7] = ((/* implicit */_Bool) max((var_14), (((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) (signed char)(-127 - 1)))), (var_3))))));
            }
            for (long long int i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
            {
                arr_66 [i_7] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 15281321244320521328ULL))));
                arr_67 [i_4] [i_4] [(signed char)8] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) -2060168921)))))), (max((350157548U), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)21381)))))))));
                arr_68 [i_7] = ((/* implicit */long long int) (~(12795184709961771737ULL)));
                /* LoopNest 2 */
                for (long long int i_15 = 2; i_15 < 10; i_15 += 3) 
                {
                    for (short i_16 = 3; i_16 < 7; i_16 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) max((var_31), (-9076661083877709287LL)));
                            var_32 ^= ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) 2315130503U))), (((int) 15281321244320521330ULL))))) ? (((/* implicit */int) (signed char)19)) : (max((((/* implicit */int) var_15)), (0))));
                        }
                    } 
                } 
                arr_75 [i_4] [i_7] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) max((var_14), (((/* implicit */int) var_19)))))));
            }
            var_33 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)122)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1)))))))), (((/* implicit */unsigned long long int) var_14))));
            arr_76 [i_7] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
            var_34 = ((/* implicit */unsigned short) min((min((0), (((((/* implicit */_Bool) 4294967295U)) ? (0) : (((/* implicit */int) var_12)))))), (((/* implicit */int) var_3))));
        }
        for (unsigned int i_17 = 0; i_17 < 11; i_17 += 3) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (signed char)47))));
            arr_81 [i_17] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
        }
        /* LoopNest 2 */
        for (int i_18 = 2; i_18 < 8; i_18 += 1) 
        {
            for (long long int i_19 = 0; i_19 < 11; i_19 += 4) 
            {
                {
                    var_36 = ((/* implicit */unsigned char) 12749405486029177014ULL);
                    arr_89 [i_18] [i_19] = ((/* implicit */unsigned int) max((min((var_11), (max((((/* implicit */unsigned long long int) 21)), (12795184709961771737ULL))))), (5651559363747779879ULL)));
                    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) 7167902863983265260ULL))));
                }
            } 
        } 
    }
    for (long long int i_20 = 2; i_20 < 16; i_20 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) var_13))));
        arr_93 [i_20] = ((/* implicit */long long int) max((var_8), (max((-2077333105), (((/* implicit */int) (short)27768))))));
    }
    for (long long int i_21 = 2; i_21 < 16; i_21 += 1) /* same iter space */
    {
        arr_97 [i_21] = ((/* implicit */_Bool) var_16);
        /* LoopNest 2 */
        for (int i_22 = 2; i_22 < 18; i_22 += 2) 
        {
            for (unsigned int i_23 = 1; i_23 < 18; i_23 += 3) 
            {
                {
                    var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(var_4)))), (((((/* implicit */_Bool) -3692532261888360904LL)) ? (var_6) : (var_10)))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)108)), (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) -2077333105)))))));
                    arr_105 [i_23] [i_21] [i_21] [i_21] = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) 2077333110)), (15567298665038597159ULL)))));
                    arr_106 [i_21] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 0)), (3174886736672630151ULL)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_24 = 1; i_24 < 16; i_24 += 3) /* same iter space */
                    {
                        var_40 *= ((/* implicit */_Bool) var_16);
                        arr_109 [i_23] [i_23] [i_21] [i_21] = ((/* implicit */short) var_11);
                        /* LoopSeq 2 */
                        for (signed char i_25 = 1; i_25 < 18; i_25 += 3) 
                        {
                            var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) 14281460))));
                            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) ((long long int) (unsigned char)148)))));
                            arr_112 [i_21 - 2] [5U] [i_21] [i_21] [i_21 - 2] [5U] [i_21 + 2] = ((/* implicit */long long int) (signed char)-110);
                        }
                        for (long long int i_26 = 1; i_26 < 19; i_26 += 4) 
                        {
                            arr_115 [i_21] [i_21] = ((/* implicit */short) 2475830345976876192ULL);
                            arr_116 [i_26] [i_24] [i_21] [i_22 - 1] [i_21 + 3] = ((/* implicit */signed char) (+(-3997267128083763776LL)));
                        }
                        /* LoopSeq 2 */
                        for (int i_27 = 0; i_27 < 20; i_27 += 1) 
                        {
                            arr_120 [i_21] = ((/* implicit */unsigned long long int) -1941069472);
                            var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) var_10))));
                            arr_121 [i_21] [i_21] [i_21] [i_24] [i_21] = ((var_12) ? (((/* implicit */unsigned long long int) -2077333119)) : (11278841209726286369ULL));
                        }
                        for (unsigned int i_28 = 4; i_28 < 16; i_28 += 3) 
                        {
                            var_44 ^= ((/* implicit */unsigned char) 974099957U);
                            arr_125 [i_21] = ((/* implicit */signed char) (_Bool)1);
                            var_45 = ((/* implicit */long long int) var_7);
                            var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) (_Bool)1))));
                            arr_126 [i_21] [i_22 + 1] [i_23] [i_21] [i_28 + 4] [i_24] [i_23 - 1] = ((/* implicit */unsigned short) var_15);
                        }
                    }
                    for (long long int i_29 = 1; i_29 < 16; i_29 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_30 = 0; i_30 < 20; i_30 += 4) 
                        {
                            arr_132 [i_21] = ((/* implicit */unsigned short) 0ULL);
                            arr_133 [i_21] [i_21] [i_23] [i_21] [i_21] = ((/* implicit */_Bool) (signed char)-12);
                            arr_134 [(_Bool)1] [(_Bool)1] [i_21] [i_30] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)6540)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (974099957U)));
                            arr_135 [i_21] [i_22] [i_21] [i_21] [i_30] [i_21] = ((/* implicit */unsigned short) (~(var_7)));
                            arr_136 [i_21] [i_21] [i_23] [i_29] [i_21] = ((/* implicit */unsigned long long int) var_5);
                        }
                        arr_137 [i_21] [i_22 - 1] [i_21] [i_22 - 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (var_5)));
                        var_47 = ((/* implicit */long long int) -984730716);
                        /* LoopSeq 2 */
                        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                        {
                            arr_140 [i_22] [i_22] &= ((/* implicit */unsigned long long int) var_7);
                            var_48 &= ((long long int) ((unsigned long long int) -2077333110));
                            arr_141 [i_21] [i_21 - 2] [i_21] [i_21] [i_21] = ((/* implicit */_Bool) ((signed char) 2077333110));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_32 = 4; i_32 < 19; i_32 += 2) 
                        {
                            arr_146 [i_21] = ((((/* implicit */_Bool) var_19)) ? (1999383922649910383ULL) : (((/* implicit */unsigned long long int) var_0)));
                            arr_147 [i_21 + 4] [i_22] [i_21] [i_29 + 3] [i_32 - 1] = (unsigned char)18;
                            arr_148 [i_29 + 1] [i_21] [i_23 - 1] [i_21] [i_21] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)7672)) : (((/* implicit */int) var_15)))));
                            arr_149 [i_21] [i_22] [i_21] [i_22] [i_22] [i_22] = ((/* implicit */unsigned long long int) var_4);
                            arr_150 [i_21] [i_22] [i_22] [i_23 - 1] [i_23 + 1] [i_21] [i_32] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1772174723U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8638754533750103638LL)));
                        }
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_33 = 1; i_33 < 17; i_33 += 3) 
        {
            for (unsigned long long int i_34 = 0; i_34 < 20; i_34 += 1) 
            {
                for (int i_35 = 0; i_35 < 20; i_35 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_36 = 0; i_36 < 20; i_36 += 3) 
                        {
                            var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) var_14))));
                            arr_159 [i_21] [i_33] [i_21] [i_35] [i_36] [i_33] [i_33] = ((/* implicit */long long int) 17);
                            var_50 = ((/* implicit */unsigned char) min((min((7450359333770828828LL), (8111070473121048497LL))), (((/* implicit */long long int) ((int) -31)))));
                        }
                        arr_160 [i_21] [i_33 + 1] [i_21] [i_35] [i_21] = ((/* implicit */unsigned char) max((var_0), (((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (max((926228128), (((/* implicit */int) (short)6540)))))))));
                    }
                } 
            } 
        } 
    }
    var_51 = ((/* implicit */unsigned char) ((var_12) ? (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (0LL) : (max((7450359333770828828LL), (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-6555)))));
}
