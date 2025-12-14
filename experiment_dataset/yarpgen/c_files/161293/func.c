/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161293
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
    var_19 = ((signed char) var_15);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = arr_1 [i_0];
        arr_5 [(signed char)8] = (signed char)-1;
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 2; i_2 < 10; i_2 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)-1))) ? (((/* implicit */int) ((signed char) (signed char)(-127 - 1)))) : (min((((((/* implicit */int) (signed char)110)) - (((/* implicit */int) (signed char)82)))), ((+(((/* implicit */int) var_13)))))))))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_9 [i_2 + 1])) : (((/* implicit */int) ((signed char) (signed char)-74))))), (((/* implicit */int) (signed char)-94)))))));
        }
        /* vectorizable */
        for (signed char i_3 = 2; i_3 < 10; i_3 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [(signed char)9])) ? (((/* implicit */int) arr_10 [i_1] [(signed char)10])) : (((/* implicit */int) (signed char)26)))) >= (((/* implicit */int) var_10))));
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 10; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            var_23 += ((signed char) arr_15 [i_3] [i_3] [i_3 - 2]);
                            var_24 = var_15;
                        }
                    } 
                } 
                var_25 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_12 [(signed char)4] [i_3] [i_4]))));
                arr_22 [i_1] [(signed char)2] [(signed char)4] [i_4] = var_10;
                var_26 = arr_18 [i_1] [i_4];
                var_27 = (signed char)-82;
            }
            for (signed char i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_8 = 2; i_8 < 10; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        {
                            var_28 = (signed char)48;
                            var_29 = ((signed char) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) arr_21 [(signed char)5] [i_3 - 1] [i_7] [i_8] [i_8]))));
                            arr_31 [(signed char)10] [i_1] [i_7] [i_1] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (signed char)53))));
                            var_30 = ((/* implicit */signed char) (+((+(((/* implicit */int) (signed char)-102))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_3 - 2] [i_10] [i_3 + 1] [i_3 - 2] [i_10] [i_3 + 1])) ? (((/* implicit */int) arr_27 [i_3 - 2] [i_3] [i_3 + 1] [i_3 - 2] [i_3] [i_3 + 1])) : (((/* implicit */int) arr_27 [i_3 - 2] [i_10] [i_3 + 1] [i_3 - 2] [i_10] [i_3 + 1])))))));
                    arr_34 [i_10] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_1] [i_3 - 1] [i_7] [i_10])) << (((((/* implicit */int) arr_17 [i_1] [i_3 + 1] [i_7] [i_7] [i_10])) + (76)))));
                    var_32 = var_8;
                    var_33 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) (signed char)46))));
                }
                var_34 *= ((signed char) (signed char)101);
                var_35 = (signed char)-1;
                arr_35 [i_1] [i_3] [i_7] |= ((signed char) (!(((/* implicit */_Bool) (signed char)-65))));
            }
            for (signed char i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
            {
                arr_39 [(signed char)10] [i_3 + 1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_3 + 1]))));
                var_36 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-1))));
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        {
                            var_37 = (signed char)98;
                            var_38 = ((/* implicit */signed char) min((var_38), ((signed char)-45)));
                        }
                    } 
                } 
            }
            arr_46 [i_1] [i_1] = (signed char)48;
            /* LoopSeq 3 */
            for (signed char i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                var_39 = ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_3 - 1] [i_1] [i_3 - 1] [i_14] [i_14] [i_14])) / (((/* implicit */int) arr_27 [i_1] [i_1] [i_3 - 1] [i_14] [i_14] [i_1]))));
                var_40 = var_9;
            }
            for (signed char i_15 = 1; i_15 < 10; i_15 += 4) 
            {
                var_41 = ((/* implicit */signed char) min((var_41), (var_18)));
                var_42 &= arr_38 [i_1] [i_1] [i_3 - 1] [i_3];
            }
            for (signed char i_16 = 1; i_16 < 9; i_16 += 3) 
            {
                var_43 = ((/* implicit */signed char) max((var_43), (arr_11 [(signed char)5] [(signed char)0] [i_16])));
                arr_57 [i_1] [i_3 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_53 [i_3 + 1] [i_16 - 1] [i_16 - 1]))));
                arr_58 [i_3] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_24 [i_16 + 2] [i_3 + 1]))));
            }
            /* LoopSeq 3 */
            for (signed char i_17 = 3; i_17 < 9; i_17 += 1) 
            {
                arr_63 [i_3] [i_3] [i_1] |= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(signed char)3] [i_17 + 2])))))));
                arr_64 [i_3 - 1] [i_1] [(signed char)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) (signed char)127)) : (((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) arr_48 [(signed char)3] [i_1] [i_3 + 1] [i_17 - 1])) : (((/* implicit */int) var_11))))));
                var_44 = arr_28 [(signed char)8] [i_3 - 1] [i_3] [i_3 - 2] [i_17 - 1];
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 11; i_18 += 3) 
                {
                    for (signed char i_19 = 2; i_19 < 10; i_19 += 3) 
                    {
                        {
                            arr_71 [i_1] [i_1] [i_17] [i_18] [i_18] [i_19] = (signed char)-103;
                            arr_72 [i_1] [i_1] [i_19 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)106))));
                            var_45 |= (signed char)-88;
                            arr_73 [i_1] [(signed char)0] [i_19 + 1] = ((signed char) arr_27 [i_3 + 1] [i_1] [i_17 - 3] [(signed char)4] [i_17 + 1] [i_19 - 2]);
                        }
                    } 
                } 
            }
            for (signed char i_20 = 0; i_20 < 11; i_20 += 1) 
            {
                var_46 += ((/* implicit */signed char) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_44 [i_1] [(signed char)2] [(signed char)3] [i_20] [i_20]))));
                var_47 = arr_21 [i_1] [(signed char)4] [(signed char)4] [(signed char)5] [(signed char)5];
            }
            for (signed char i_21 = 1; i_21 < 9; i_21 += 4) 
            {
                var_48 = ((signed char) arr_42 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 2] [i_21 + 2] [i_21 + 1]);
                var_49 += ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-1))));
                arr_80 [(signed char)5] [i_1] = arr_67 [i_21 - 1] [i_1] [i_3 + 1] [i_1] [i_1];
                arr_81 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) var_15))));
            }
        }
        var_50 *= ((/* implicit */signed char) max(((+(((/* implicit */int) (signed char)-125)))), (((/* implicit */int) var_15))));
    }
    /* vectorizable */
    for (signed char i_22 = 0; i_22 < 15; i_22 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_23 = 3; i_23 < 14; i_23 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_24 = 0; i_24 < 15; i_24 += 3) 
            {
                var_51 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)102))));
                var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)70))) ? (((((/* implicit */_Bool) arr_87 [i_23] [(signed char)8] [i_23])) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) arr_86 [i_22] [i_23 - 3])))) : ((+(((/* implicit */int) (signed char)72))))));
            }
            var_53 = var_0;
        }
        for (signed char i_25 = 0; i_25 < 15; i_25 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_26 = 0; i_26 < 15; i_26 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_27 = 1; i_27 < 12; i_27 += 4) 
                {
                    for (signed char i_28 = 0; i_28 < 15; i_28 += 1) 
                    {
                        {
                            var_54 ^= (signed char)127;
                            var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)31))) || (((/* implicit */_Bool) var_18))));
                        }
                    } 
                } 
                var_56 ^= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
                var_57 = arr_96 [i_22] [i_22] [i_25] [i_25] [i_26];
            }
            arr_97 [i_22] [i_22] [i_22] = (signed char)102;
            arr_98 [i_25] = var_15;
        }
        /* LoopNest 2 */
        for (signed char i_29 = 2; i_29 < 14; i_29 += 1) 
        {
            for (signed char i_30 = 2; i_30 < 13; i_30 += 4) 
            {
                {
                    var_58 -= ((signed char) (signed char)-125);
                    var_59 |= ((/* implicit */signed char) (-(((/* implicit */int) arr_102 [i_29 - 1] [i_29 - 2] [i_29 - 2] [i_30 - 2]))));
                    /* LoopSeq 2 */
                    for (signed char i_31 = 1; i_31 < 14; i_31 += 4) 
                    {
                        var_60 = ((/* implicit */signed char) (+(((/* implicit */int) arr_88 [i_29 + 1]))));
                        /* LoopSeq 1 */
                        for (signed char i_32 = 0; i_32 < 15; i_32 += 4) 
                        {
                            var_61 += ((signed char) arr_93 [i_30] [i_29 - 2] [i_22]);
                            var_62 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-56))));
                            var_63 = (signed char)(-127 - 1);
                            var_64 = ((/* implicit */signed char) min((var_64), (((signed char) (signed char)2))));
                            var_65 &= arr_94 [i_29 + 1] [(signed char)3] [i_29] [i_29 + 1] [i_31 + 1] [i_32];
                        }
                        var_66 &= var_14;
                        /* LoopSeq 4 */
                        for (signed char i_33 = 0; i_33 < 15; i_33 += 1) 
                        {
                            arr_112 [i_22] [i_31 - 1] [i_30 + 2] [i_31] [i_31] [i_33] = arr_104 [i_29] [i_29] [i_29] [i_29];
                            arr_113 [i_31 + 1] [i_30 + 2] [i_29] = arr_107 [i_22] [i_29 - 2] [i_30] [(signed char)11] [i_33];
                            var_67 *= ((signed char) (signed char)12);
                            var_68 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_111 [(signed char)2] [i_31 + 1] [i_31])) : (((/* implicit */int) arr_111 [i_30 + 2] [i_30 - 1] [i_30]))));
                            var_69 = ((/* implicit */signed char) min((var_69), (arr_105 [i_22] [i_29 + 1] [(signed char)2] [(signed char)6] [i_30 - 1] [(signed char)12] [i_33])));
                        }
                        for (signed char i_34 = 0; i_34 < 15; i_34 += 1) /* same iter space */
                        {
                            var_70 = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
                            arr_117 [(signed char)11] [(signed char)0] [i_30 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_108 [i_30] [i_29 - 1] [i_22] [(signed char)6] [i_22]))));
                        }
                        for (signed char i_35 = 0; i_35 < 15; i_35 += 1) /* same iter space */
                        {
                            arr_122 [i_22] [i_35] [(signed char)10] = var_3;
                            arr_123 [(signed char)10] [i_35] [i_35] [i_29] [i_35] [i_22] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                        }
                        for (signed char i_36 = 0; i_36 < 15; i_36 += 1) /* same iter space */
                        {
                            var_71 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_107 [(signed char)9] [i_36] [(signed char)4] [i_31 + 1] [i_31 + 1])) ? (((/* implicit */int) arr_108 [i_31 - 1] [i_36] [(signed char)11] [i_36] [i_31 - 1])) : (((/* implicit */int) arr_107 [i_36] [i_36] [i_36] [(signed char)2] [i_31 - 1]))));
                            var_72 = ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)(-127 - 1))))) != (((((/* implicit */int) (signed char)71)) / (((/* implicit */int) (signed char)-50))))));
                            arr_128 [i_22] [i_29 - 2] [i_30] [i_31] [(signed char)12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_107 [i_30 - 1] [i_31 + 1] [i_36] [i_36] [(signed char)7]))));
                            var_73 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_92 [i_30] [i_30])) ? (((/* implicit */int) arr_87 [i_30] [(signed char)12] [(signed char)12])) : (((/* implicit */int) arr_102 [i_31 - 1] [i_29 - 2] [i_30 - 1] [i_31 - 1]))));
                        }
                    }
                    for (signed char i_37 = 0; i_37 < 15; i_37 += 1) 
                    {
                        var_74 = ((/* implicit */signed char) min((var_74), (((/* implicit */signed char) (-(((/* implicit */int) arr_119 [i_37] [i_30 - 1] [i_22])))))));
                        arr_131 [i_37] [(signed char)0] = (signed char)(-127 - 1);
                    }
                    var_75 = ((/* implicit */signed char) max((var_75), (arr_94 [i_22] [(signed char)2] [i_30] [i_30 - 1] [i_22] [i_29 - 1])));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_38 = 0; i_38 < 20; i_38 += 3) 
    {
        for (signed char i_39 = 0; i_39 < 20; i_39 += 4) 
        {
            for (signed char i_40 = 0; i_40 < 20; i_40 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_41 = 1; i_41 < 19; i_41 += 3) 
                    {
                        arr_141 [i_38] [i_39] [i_40] [i_41] = (signed char)0;
                        var_76 = max(((signed char)125), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)110))))));
                    }
                    for (signed char i_42 = 1; i_42 < 18; i_42 += 4) 
                    {
                        var_77 = ((signed char) arr_132 [i_40] [i_42]);
                        arr_144 [i_39] [i_39] [i_40] [i_42 - 1] [i_42] [i_38] = ((signed char) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) arr_138 [i_42] [i_42 + 2] [i_42] [i_42 + 1]))));
                    }
                    var_78 = (signed char)-2;
                    arr_145 [i_38] [i_38] [i_40] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-83))))) ? (((((/* implicit */int) (signed char)67)) - (((/* implicit */int) arr_143 [i_40] [i_39] [i_38])))) : (((/* implicit */int) var_5))));
                }
            } 
        } 
    } 
    var_79 = ((/* implicit */signed char) min((min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_8)))))), ((-(((/* implicit */int) (signed char)0))))));
}
