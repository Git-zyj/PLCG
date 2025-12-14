/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164111
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */long long int) max((var_13), (max((-4814403958321333265LL), (((/* implicit */long long int) (_Bool)1))))));
            var_14 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (signed char)-120))) && (((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) arr_2 [i_0] [i_1])))))))), (((((_Bool) var_8)) ? ((~(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) max(((signed char)126), ((signed char)-3))))))));
            var_15 = ((/* implicit */signed char) var_1);
        }
        var_16 = var_2;
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_10);
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (_Bool)1)), (var_5))), (max((arr_0 [i_0]), (((/* implicit */long long int) arr_3 [i_0]))))))) ? (((((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (((/* implicit */signed char) var_0))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) min((var_2), (((/* implicit */short) arr_2 [i_0] [i_0])))))))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            arr_13 [i_2] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_3])) ? (((/* implicit */int) arr_12 [i_2 + 1] [i_3])) : (((/* implicit */int) var_9))));
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (_Bool)0))));
            arr_14 [i_2 + 1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_5)))) ? (((/* implicit */unsigned long long int) arr_0 [i_2 + 1])) : (((unsigned long long int) arr_0 [i_2]))));
            var_19 = ((/* implicit */signed char) (+(-7170414927823254862LL)));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) ((_Bool) arr_1 [i_2 + 1] [i_2]));
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                var_22 ^= ((/* implicit */long long int) ((signed char) arr_11 [i_5] [i_2] [i_2]));
                var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_4] [i_4]))));
            }
            for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 2) 
            {
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) arr_7 [i_4]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((signed char) arr_3 [i_7])))));
                    var_25 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)27539)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)32))))));
                    arr_23 [i_2] [i_4] [i_4] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_21 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]);
                    arr_24 [i_2] [i_2] [i_4] [i_4] [i_7] = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_22 [i_2] [i_2]))))));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((signed char) arr_22 [i_6 + 1] [i_2 + 1])))));
                }
                for (unsigned long long int i_8 = 4; i_8 < 12; i_8 += 4) 
                {
                    var_27 = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_2 + 1]))));
                    /* LoopSeq 3 */
                    for (signed char i_9 = 2; i_9 < 12; i_9 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (~(((/* implicit */int) var_4)))))));
                        var_29 ^= ((/* implicit */short) arr_2 [i_6] [i_4]);
                    }
                    for (signed char i_10 = 2; i_10 < 12; i_10 += 3) /* same iter space */
                    {
                        arr_33 [i_2] [i_4] [i_6] [i_8] [i_10] = ((/* implicit */unsigned long long int) var_3);
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_22 [i_4] [i_2]))) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) var_7))));
                    }
                    for (signed char i_11 = 2; i_11 < 12; i_11 += 3) /* same iter space */
                    {
                        arr_36 [i_2] [i_4] [i_2] [i_8 - 4] [i_11] = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_8 - 4] [i_6 + 1] [i_2 + 1]))));
                        var_31 = ((/* implicit */short) var_0);
                    }
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 8153391380824944192LL)) ? (-8153391380824944183LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_35 [i_2] [i_2] [i_4] [i_6] [i_4]))));
                }
                var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((long long int) arr_7 [i_2])))));
                var_36 += ((/* implicit */_Bool) ((signed char) ((signed char) (_Bool)1)));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_42 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */signed char) ((short) arr_31 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_4] [i_13]));
                var_37 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))));
                var_38 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) arr_41 [i_2] [i_2] [i_13])) ? (arr_20 [i_4]) : (var_8)))));
                var_39 -= ((/* implicit */long long int) ((_Bool) arr_11 [i_4] [i_4] [i_2 + 1]));
            }
            arr_43 [i_4] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))));
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 13; i_14 += 2) 
            {
                var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_6 [i_14])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_2] [i_4] [i_14])))))))));
                var_41 = ((/* implicit */unsigned long long int) (_Bool)1);
                var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_4] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_2] [i_4] [i_14]))) : (var_8)))))));
            }
            /* LoopSeq 3 */
            for (signed char i_15 = 0; i_15 < 13; i_15 += 3) 
            {
                arr_50 [i_4] [i_4] [i_4] = ((_Bool) -9223372036854775786LL);
                var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((short) arr_20 [i_2])))));
                var_44 = ((/* implicit */signed char) (~(((/* implicit */int) arr_16 [i_4] [i_4]))));
                var_45 *= ((/* implicit */signed char) ((_Bool) ((signed char) -7170414927823254874LL)));
                /* LoopSeq 1 */
                for (long long int i_16 = 2; i_16 < 10; i_16 += 3) 
                {
                    arr_55 [i_2] [i_2] [i_4] [i_2] [i_2] = arr_12 [i_4] [i_16 - 1];
                    var_46 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) var_2))))));
                    var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_34 [i_2] [i_2 + 1] [i_4] [i_4] [i_15] [i_16 + 3] [i_16])) : (((/* implicit */int) arr_9 [i_2 + 1] [i_4])))))));
                    var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) arr_4 [i_2] [i_4]))));
                    var_49 -= ((/* implicit */short) var_7);
                }
            }
            for (long long int i_17 = 2; i_17 < 12; i_17 += 2) 
            {
                arr_58 [i_2] [i_2] [i_4] [i_17] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                arr_59 [i_4] [i_4] [i_17 - 1] = ((/* implicit */_Bool) ((short) 18446744073709551615ULL));
            }
            for (short i_18 = 2; i_18 < 12; i_18 += 2) 
            {
                var_50 = ((/* implicit */unsigned long long int) var_11);
                arr_62 [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_5)))) ? (((((/* implicit */_Bool) -8153391380824944209LL)) ? (arr_44 [i_2] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_18]))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                arr_63 [i_2] [i_4] = ((/* implicit */long long int) ((_Bool) (~(var_5))));
            }
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            arr_66 [i_2] [i_19] = ((/* implicit */signed char) (~(arr_17 [i_2] [i_2 + 1])));
            var_51 = ((/* implicit */signed char) ((arr_37 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? (((/* implicit */int) arr_37 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_37 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2]))));
        }
        /* LoopSeq 1 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            var_52 += ((signed char) (signed char)104);
            /* LoopSeq 2 */
            for (unsigned long long int i_21 = 3; i_21 < 11; i_21 += 4) 
            {
                var_53 = ((/* implicit */_Bool) max((var_53), (((/* implicit */_Bool) (~(((long long int) arr_46 [i_2] [i_20])))))));
                var_54 = ((/* implicit */signed char) max((var_54), (((/* implicit */signed char) ((((/* implicit */_Bool) 7170414927823254885LL)) ? (4578282966460301786LL) : (-2819566790923479434LL))))));
                var_55 = ((/* implicit */unsigned long long int) (signed char)105);
                arr_72 [i_2 + 1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_40 [i_21 - 3] [i_2 + 1] [i_2 + 1])) ? (((var_1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_61 [i_2] [i_20] [i_21])))) : (((/* implicit */int) ((_Bool) var_10)))));
                /* LoopSeq 3 */
                for (signed char i_22 = 0; i_22 < 13; i_22 += 3) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_23 = 0; i_23 < 13; i_23 += 3) 
                    {
                        var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_61 [i_23] [i_21 - 3] [i_2]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_21 [i_2] [i_2 + 1] [i_23] [i_23]))));
                        arr_78 [i_22] = ((/* implicit */long long int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))));
                    }
                    for (signed char i_24 = 0; i_24 < 13; i_24 += 2) 
                    {
                        var_57 = ((/* implicit */signed char) ((short) arr_38 [i_2] [i_2 + 1]));
                        var_58 += ((/* implicit */signed char) arr_22 [i_21] [i_21]);
                        arr_82 [i_20] [i_21] [i_22] = (i_22 % 2 == 0) ? (((/* implicit */short) ((signed char) ((arr_18 [i_22] [i_24]) + (arr_79 [i_2] [i_20] [i_22] [i_2] [i_24] [i_22] [i_21]))))) : (((/* implicit */short) ((signed char) ((arr_18 [i_22] [i_24]) - (arr_79 [i_2] [i_20] [i_22] [i_2] [i_24] [i_22] [i_21])))));
                    }
                    for (signed char i_25 = 1; i_25 < 11; i_25 += 3) 
                    {
                        arr_86 [i_20] [i_2] [i_22] [i_20] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) 8659568586065240103ULL));
                        var_59 += ((/* implicit */long long int) (+((~(14583403636121797175ULL)))));
                        arr_87 [i_22] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(7353102479189132950LL)))) ? (((/* implicit */int) ((_Bool) var_11))) : (((/* implicit */int) (signed char)-101))));
                        arr_88 [i_22] [i_20] [i_21] [i_22] [i_22] [i_25] = ((short) 5333566936476568961LL);
                    }
                    /* LoopSeq 1 */
                    for (long long int i_26 = 0; i_26 < 13; i_26 += 3) 
                    {
                        arr_92 [i_22] [i_22] [i_21 - 3] [i_21 - 3] [i_21 - 3] = ((/* implicit */short) arr_21 [i_2] [i_2] [i_21] [i_26]);
                        var_60 = ((/* implicit */signed char) arr_4 [i_20] [i_26]);
                        var_61 = ((/* implicit */long long int) var_6);
                        var_62 = ((/* implicit */short) max((var_62), ((short)10240)));
                    }
                    var_63 = ((/* implicit */_Bool) var_11);
                    var_64 = ((long long int) ((long long int) (signed char)104));
                }
                for (long long int i_27 = 1; i_27 < 9; i_27 += 2) 
                {
                    arr_96 [0LL] &= ((/* implicit */signed char) ((_Bool) ((signed char) arr_1 [i_27] [i_21])));
                    var_65 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (short)-4976))) ? (((/* implicit */int) (signed char)-52)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_85 [i_2 + 1] [i_27]))))));
                    arr_97 [i_27] = ((/* implicit */short) arr_53 [i_2] [i_2] [i_2]);
                }
                for (long long int i_28 = 0; i_28 < 13; i_28 += 2) 
                {
                    var_66 &= arr_15 [i_2 + 1] [i_20] [i_21];
                    var_67 = ((/* implicit */short) var_5);
                    var_68 = ((/* implicit */short) var_8);
                    var_69 = ((/* implicit */short) (_Bool)0);
                    var_70 = ((/* implicit */_Bool) max((var_70), (((/* implicit */_Bool) var_8))));
                }
            }
            for (short i_29 = 2; i_29 < 11; i_29 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_30 = 3; i_30 < 10; i_30 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_31 = 1; i_31 < 11; i_31 += 2) 
                    {
                        arr_109 [i_2 + 1] [i_20] [i_30] [i_30] [i_31] = ((/* implicit */signed char) var_0);
                        arr_110 [i_30] [i_30] [i_29] [i_29] [i_30] [i_31] [i_31] = ((/* implicit */_Bool) ((signed char) arr_84 [i_2] [i_31] [i_31] [i_31] [i_2] [i_31 + 1] [i_31 + 2]));
                        arr_111 [i_30] [i_30] = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) var_1)))));
                    }
                    for (signed char i_32 = 4; i_32 < 12; i_32 += 1) 
                    {
                        var_71 -= ((/* implicit */_Bool) 5068412120983953551LL);
                        var_72 = ((/* implicit */short) max((var_72), (((/* implicit */short) ((arr_60 [i_20] [i_29] [i_32]) ? (((/* implicit */int) ((signed char) arr_81 [i_2] [i_29 + 2] [i_2]))) : (((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_73 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2] [i_2])))))))));
                    }
                    for (short i_33 = 0; i_33 < 13; i_33 += 2) 
                    {
                        var_73 = arr_75 [i_2 + 1];
                        var_74 = ((/* implicit */short) max((var_74), (((/* implicit */short) ((arr_26 [i_2] [i_2] [i_2 + 1] [i_29 - 1] [i_29] [i_30 + 2]) ? (((/* implicit */int) arr_26 [i_2] [i_2] [i_2 + 1] [i_29 + 2] [i_29 + 2] [i_30 + 1])) : (((/* implicit */int) var_0)))))));
                        var_75 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_20] [i_20] [i_30])) ? (arr_106 [i_2] [i_20] [i_30] [i_30]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) arr_16 [i_30] [i_30])) : (((/* implicit */int) (signed char)-87))));
                    }
                    var_76 = ((/* implicit */long long int) ((unsigned long long int) arr_44 [i_2 + 1] [i_2]));
                    arr_118 [i_2] [i_30] [i_30] [i_2] [i_30] [i_30] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_40 [i_2 + 1] [i_29 - 1] [i_2 + 1]))));
                }
                for (signed char i_34 = 3; i_34 < 10; i_34 += 2) /* same iter space */
                {
                    var_77 = ((/* implicit */short) max((var_77), (arr_74 [i_2] [i_2] [i_20] [i_2] [i_29] [i_34 - 1])));
                    var_78 = ((/* implicit */long long int) (+(arr_30 [i_34 + 3] [i_34 - 1] [i_34 - 3] [i_34 - 3] [i_34 - 3])));
                }
                var_79 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_4)))));
                var_80 = ((/* implicit */_Bool) var_2);
            }
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_35 = 0; i_35 < 13; i_35 += 2) 
        {
            var_81 = (~(6615555250523213935LL));
            /* LoopSeq 1 */
            for (signed char i_36 = 0; i_36 < 13; i_36 += 2) 
            {
                var_82 &= ((/* implicit */signed char) var_2);
                arr_127 [i_35] [i_35] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-117))));
            }
        }
    }
    var_83 = ((/* implicit */_Bool) max((var_83), (((/* implicit */_Bool) max((((/* implicit */short) ((signed char) ((long long int) var_12)))), (var_6))))));
    var_84 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((_Bool) min((((/* implicit */short) var_9)), ((short)23120))))) : (((/* implicit */int) var_10))));
    var_85 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) var_12)))))), (min((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (18446744073709551615ULL)))))));
}
