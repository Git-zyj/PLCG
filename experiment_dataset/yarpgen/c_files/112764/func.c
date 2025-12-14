/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112764
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
    var_13 = ((/* implicit */unsigned short) var_3);
    var_14 = ((/* implicit */unsigned short) ((unsigned char) ((_Bool) ((unsigned char) var_6))));
    var_15 = var_9;
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (+(((/* implicit */int) var_0)))))));
        var_17 = ((/* implicit */unsigned short) ((signed char) ((short) ((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_11 [i_4] [i_3] [i_2 + 3] [i_1] [i_1] [i_4] = ((/* implicit */short) ((long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_0] [i_3])))));
                                var_18 = ((/* implicit */unsigned short) arr_4 [i_0] [(_Bool)1] [i_1] [i_3]);
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] = ((/* implicit */_Bool) (((-(var_7))) << (((((/* implicit */int) ((_Bool) var_3))) << (((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_2])))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) var_11);
    }
    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 1) 
    {
        var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_14 [i_5] [i_5]))));
        var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_13 [i_5])))));
        var_22 = ((/* implicit */unsigned int) (((~(((unsigned long long int) (unsigned char)207)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_2))))))))));
    }
    /* vectorizable */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_23 = arr_15 [i_6];
        var_24 ^= ((/* implicit */short) ((arr_15 [i_6 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        /* LoopSeq 1 */
        for (unsigned short i_7 = 1; i_7 < 15; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                var_25 = arr_20 [i_6] [i_6] [i_7] [i_8];
                var_26 = ((/* implicit */unsigned short) (!(((_Bool) var_12))));
                /* LoopSeq 4 */
                for (int i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    arr_25 [i_7] [i_7] = ((/* implicit */unsigned char) ((signed char) arr_20 [i_9] [i_8] [i_7 - 1] [i_6]));
                    var_27 = ((/* implicit */signed char) arr_18 [(_Bool)1] [i_7 - 1] [i_7]);
                }
                for (int i_10 = 1; i_10 < 16; i_10 += 4) 
                {
                    var_28 = ((/* implicit */short) arr_23 [i_6] [i_7] [i_7] [i_6] [(unsigned short)8]);
                    var_29 ^= ((/* implicit */unsigned int) ((long long int) arr_22 [i_6 - 1] [i_6 - 1] [i_6]));
                }
                for (unsigned long long int i_11 = 3; i_11 < 16; i_11 += 1) 
                {
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [i_6 - 1] [i_7] [i_8] [(_Bool)0]))));
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    arr_33 [i_6] [i_7] [i_7] [i_8] [i_12] [(_Bool)1] = ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
                    var_32 = ((/* implicit */int) var_12);
                    var_33 = ((/* implicit */long long int) arr_23 [9LL] [i_7] [i_8] [i_12 - 1] [i_7 + 1]);
                }
            }
            /* LoopSeq 2 */
            for (unsigned char i_13 = 3; i_13 < 15; i_13 += 4) 
            {
                arr_36 [i_7] [4] [i_7] = (~(((((/* implicit */int) arr_35 [i_13] [(short)12] [(short)12])) ^ (((/* implicit */int) arr_22 [(unsigned char)8] [i_7 + 2] [i_6 - 1])))));
                var_34 = ((/* implicit */long long int) ((arr_24 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6]) - (arr_24 [i_6] [i_6] [i_6 - 1] [i_6 - 1] [i_6] [i_6])));
                arr_37 [i_7] [i_7 + 2] [i_7] [i_13 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) == (arr_18 [i_7] [i_7 + 1] [i_6]))))));
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                /* LoopSeq 4 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_35 = var_11;
                    arr_43 [i_15] [i_7] [i_7] [i_6] = ((short) var_12);
                    var_36 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (var_7)));
                }
                for (unsigned char i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    arr_47 [i_6] [i_7] [i_14] [i_16] [i_7] = ((/* implicit */unsigned short) ((((((int) var_7)) + (2147483647))) >> (((((/* implicit */int) arr_44 [i_6] [i_7 + 1] [(signed char)15] [i_14])) - (54344)))));
                    var_37 = ((/* implicit */_Bool) ((short) arr_22 [i_6 - 1] [(short)3] [i_7 - 1]));
                }
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    arr_51 [i_17] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) (+(((/* implicit */int) arr_48 [i_17 + 1] [i_17 + 1] [i_17] [i_17 + 1]))));
                    /* LoopSeq 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_38 = ((/* implicit */_Bool) (+(arr_18 [i_7] [i_7] [i_17])));
                        var_39 = ((/* implicit */unsigned int) var_7);
                    }
                    for (unsigned short i_19 = 0; i_19 < 17; i_19 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned char) ((arr_41 [4LL]) / (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6] [i_7 - 1] [i_14] [i_17] [i_17] [i_19])))));
                        arr_57 [i_7] = ((/* implicit */long long int) (+(arr_32 [i_6] [i_6] [i_7] [i_14] [(signed char)11] [i_6])));
                        arr_58 [i_6] [i_7] [i_14] [i_17] [i_17] [i_19] = ((/* implicit */int) arr_52 [i_7 + 2] [i_7] [i_14 - 1] [12U] [i_14 - 1]);
                    }
                    arr_59 [i_7] [i_7] = ((/* implicit */signed char) var_5);
                }
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    arr_63 [i_7] [i_7] [i_14] = ((/* implicit */unsigned char) ((unsigned int) var_11));
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) << (((arr_16 [i_7] [i_7 + 2]) - (2185406959014758147LL)))));
                }
                var_42 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) % ((~(arr_15 [i_7])))));
            }
        }
        var_43 = ((/* implicit */signed char) ((int) (~(((/* implicit */int) var_6)))));
    }
    for (unsigned short i_21 = 2; i_21 < 17; i_21 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_22 = 1; i_22 < 18; i_22 += 3) 
        {
            var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) var_5))));
            arr_69 [i_22] = arr_66 [i_21 + 2] [i_21] [i_21 - 1];
            /* LoopNest 2 */
            for (unsigned long long int i_23 = 4; i_23 < 18; i_23 += 3) 
            {
                for (unsigned long long int i_24 = 1; i_24 < 17; i_24 += 1) 
                {
                    {
                        var_45 = ((short) (unsigned char)48);
                        var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((unsigned short) 76872238U)))));
                        arr_77 [i_21 + 2] [i_22 - 1] [i_23] [i_23] = ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) var_10)))));
                    }
                } 
            } 
            var_47 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_71 [i_21] [i_22] [i_22]))));
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            var_48 = ((/* implicit */long long int) var_5);
            /* LoopNest 2 */
            for (unsigned short i_26 = 1; i_26 < 19; i_26 += 3) 
            {
                for (unsigned long long int i_27 = 0; i_27 < 20; i_27 += 4) 
                {
                    {
                        arr_84 [i_27] [i_26] [i_26] [i_21] [i_25] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)207)) | (((/* implicit */int) (short)-31245))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_28 = 0; i_28 < 20; i_28 += 4) 
                        {
                            arr_88 [i_28] [i_21 + 1] [i_27] [i_25] [i_25] [i_21 + 1] [i_21 + 1] = ((/* implicit */signed char) ((int) var_1));
                            var_49 = ((/* implicit */long long int) ((unsigned short) arr_66 [i_21] [i_25] [i_21]));
                            var_50 = ((/* implicit */unsigned long long int) var_4);
                            var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) arr_80 [i_21] [i_21 + 2] [i_21]))));
                        }
                        var_52 = ((/* implicit */unsigned char) (-(var_7)));
                    }
                } 
            } 
            var_53 = ((/* implicit */short) ((unsigned short) ((((long long int) arr_80 [i_21] [i_21] [i_25])) > (((/* implicit */long long int) ((((/* implicit */int) var_4)) & (arr_72 [i_21])))))));
        }
        var_54 = (-(((/* implicit */int) (((+(((/* implicit */int) var_0)))) == (((/* implicit */int) ((signed char) arr_73 [i_21] [i_21] [(short)19] [i_21])))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_29 = 2; i_29 < 16; i_29 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_30 = 0; i_30 < 20; i_30 += 3) 
            {
                var_55 = ((/* implicit */unsigned int) (~(((long long int) ((short) var_7)))));
                var_56 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_70 [i_21] [i_21] [i_21] [i_21])) - (((/* implicit */int) arr_91 [i_21 + 1] [i_21 + 1]))));
                /* LoopSeq 2 */
                for (unsigned short i_31 = 0; i_31 < 20; i_31 += 4) 
                {
                    arr_95 [i_21 + 1] [i_21 + 1] [i_21 + 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~((~(var_8)))))) ^ (((((/* implicit */long long int) (~(var_8)))) | (((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) arr_78 [i_29] [(_Bool)1])))))))));
                    var_57 ^= ((/* implicit */signed char) ((unsigned char) ((_Bool) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_2))))));
                    var_58 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)207))));
                    arr_96 [i_21 + 2] [i_30] [(short)18] [i_30] [i_29] = ((/* implicit */short) var_4);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
                    {
                        var_59 = ((/* implicit */_Bool) var_6);
                        var_60 = ((/* implicit */unsigned short) arr_64 [i_21] [i_31]);
                        var_61 = ((/* implicit */unsigned char) arr_72 [(unsigned short)10]);
                    }
                }
                for (signed char i_33 = 2; i_33 < 17; i_33 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_34 = 0; i_34 < 20; i_34 += 4) 
                    {
                        var_62 = ((/* implicit */int) arr_99 [i_30] [i_30]);
                        arr_104 [i_21] [i_29] [i_29] [i_33] [i_33] [i_29] = ((/* implicit */signed char) (-((+((+(((/* implicit */int) var_6))))))));
                    }
                    for (int i_35 = 0; i_35 < 20; i_35 += 1) 
                    {
                        arr_107 [8ULL] [i_30] [i_33] [i_35] = ((/* implicit */long long int) var_5);
                        var_63 = ((/* implicit */short) ((((unsigned long long int) arr_87 [i_21] [(unsigned short)0] [i_21] [(_Bool)1] [i_21] [i_21 - 1])) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_87 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21 + 3]))))));
                        arr_108 [i_21] [i_30] [i_35] = ((/* implicit */_Bool) ((((((/* implicit */int) ((short) (+(((/* implicit */int) (short)-31245)))))) + (2147483647))) << (((((((/* implicit */int) var_6)) + (7902))) - (9)))));
                        var_64 = ((/* implicit */signed char) ((unsigned long long int) 1901074577U));
                    }
                    var_65 = ((/* implicit */long long int) ((_Bool) arr_82 [i_33 - 2] [i_30] [i_29 - 1]));
                }
                var_66 &= ((/* implicit */unsigned int) var_4);
            }
            arr_109 [i_21 - 2] [i_21 - 2] [i_21 + 2] = ((/* implicit */int) arr_64 [i_21] [(unsigned char)15]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_36 = 4; i_36 < 18; i_36 += 1) 
            {
                /* LoopNest 2 */
                for (short i_37 = 0; i_37 < 20; i_37 += 4) 
                {
                    for (unsigned long long int i_38 = 3; i_38 < 18; i_38 += 3) 
                    {
                        {
                            var_67 = ((/* implicit */signed char) (+(arr_71 [i_21] [i_21 + 3] [i_29])));
                            var_68 = ((/* implicit */short) max((var_68), (((/* implicit */short) ((unsigned char) arr_85 [i_38 + 2] [i_37] [i_36 + 1] [i_29] [i_21])))));
                            var_69 *= ((/* implicit */unsigned char) ((var_2) < (((/* implicit */int) var_0))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_39 = 0; i_39 < 20; i_39 += 3) 
                {
                    arr_121 [i_39] [i_36] [i_36] [i_21] [i_21] [i_21] = ((/* implicit */signed char) arr_94 [i_21 + 3] [(signed char)15] [i_36] [(unsigned short)2] [i_29] [i_21]);
                    var_70 = ((/* implicit */signed char) var_11);
                    arr_122 [i_21] [i_29 + 4] [(unsigned char)0] [i_21] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                }
                for (short i_40 = 1; i_40 < 18; i_40 += 4) 
                {
                    arr_126 [i_40] [i_40] [i_40] [i_40] [i_40] = ((/* implicit */signed char) (-(arr_118 [i_21] [(unsigned char)12] [i_36 - 1])));
                    var_71 = ((/* implicit */long long int) var_5);
                }
            }
        }
        for (short i_41 = 1; i_41 < 17; i_41 += 4) 
        {
            var_72 = arr_67 [i_21] [i_21];
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_42 = 3; i_42 < 18; i_42 += 4) 
            {
                arr_133 [i_42] = ((/* implicit */long long int) var_12);
                /* LoopSeq 1 */
                for (_Bool i_43 = 0; i_43 < 0; i_43 += 1) 
                {
                    arr_137 [6ULL] [i_41] [i_42 + 1] [i_42 + 1] [i_43] &= ((/* implicit */int) var_6);
                    arr_138 [i_21] [i_21] [i_42] = ((/* implicit */short) arr_117 [(signed char)11] [i_41] [i_42] [i_43]);
                }
                /* LoopNest 2 */
                for (long long int i_44 = 1; i_44 < 17; i_44 += 4) 
                {
                    for (_Bool i_45 = 0; i_45 < 0; i_45 += 1) 
                    {
                        {
                            arr_144 [i_42] [i_42] [i_41] [i_42] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_66 [i_41] [i_42] [i_41])) % (((/* implicit */int) var_3))))));
                            arr_145 [i_21] [(signed char)15] [i_42] [i_44 + 1] [i_44 + 1] [i_42] = (((-(((/* implicit */int) var_10)))) > (((/* implicit */int) var_12)));
                            arr_146 [i_42] = ((/* implicit */short) var_5);
                            arr_147 [(unsigned char)11] [14] [i_42] [i_42] [i_42] [i_42] = ((/* implicit */signed char) ((int) (~(((/* implicit */int) var_0)))));
                        }
                    } 
                } 
                var_73 = (!(((/* implicit */_Bool) arr_87 [i_42] [i_42 + 2] [i_42 - 1] [i_42 + 2] [i_42 + 2] [i_42 - 1])));
            }
            /* LoopNest 2 */
            for (int i_46 = 0; i_46 < 20; i_46 += 4) 
            {
                for (unsigned char i_47 = 0; i_47 < 20; i_47 += 4) 
                {
                    {
                        var_74 = (~((~((~(var_8))))));
                        arr_153 [i_47] [i_46] [i_41] [i_21] = ((/* implicit */unsigned char) var_10);
                    }
                } 
            } 
            var_75 = ((/* implicit */signed char) ((short) ((unsigned short) ((long long int) arr_102 [(_Bool)1] [i_41]))));
        }
        var_76 |= ((/* implicit */_Bool) ((unsigned char) var_3));
    }
}
