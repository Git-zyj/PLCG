/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181564
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) arr_0 [i_0])), ((+(var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) min((((/* implicit */short) var_15)), (var_7)))))))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (-(((/* implicit */int) var_8))))))) * (var_12))))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((unsigned int) arr_1 [i_3 - 1] [i_1])) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))))));
                        var_19 = ((/* implicit */int) max((((/* implicit */long long int) ((signed char) (signed char)-7))), (var_13)));
                        var_20 = ((/* implicit */_Bool) ((unsigned long long int) (short)(-32767 - 1)));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
                        var_22 *= ((/* implicit */_Bool) (-((-(((/* implicit */int) var_10))))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) != (arr_12 [i_0] [i_0] [i_2] [i_4] [i_5]))))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_0] [i_5] [i_5] [i_1 - 2] [i_1 - 2] [i_1] [i_0])))))));
                            var_25 = ((/* implicit */_Bool) var_2);
                        }
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) arr_0 [i_0]);
                            var_27 = ((/* implicit */short) arr_1 [i_0] [i_0]);
                        }
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_4] [i_4] [i_2] = ((/* implicit */unsigned short) var_12);
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_2] [i_1 + 1] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_20 [i_7] [i_7] [i_1 + 1] [i_7] [i_0] [i_2] [i_2])) : (((/* implicit */int) var_7))));
                            var_29 = ((/* implicit */long long int) arr_6 [i_2] [i_2] [i_4]);
                            var_30 ^= ((/* implicit */unsigned int) var_8);
                            var_31 += ((/* implicit */short) ((_Bool) (short)-11398));
                        }
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((arr_0 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)127)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                arr_30 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */short) arr_7 [i_0] [i_1 - 2] [i_0] [i_2]);
                                arr_31 [i_0] [i_1] [i_0] &= ((/* implicit */long long int) ((var_9) / (arr_27 [i_1])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_33 &= ((/* implicit */unsigned short) ((unsigned char) ((_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    for (short i_10 = 4; i_10 < 21; i_10 += 4) 
    {
        arr_34 [i_10] [i_10] = ((/* implicit */unsigned int) (short)32767);
        var_34 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (short)19291)), ((unsigned short)0)));
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 1) 
        {
            for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        for (int i_14 = 3; i_14 < 20; i_14 += 1) 
                        {
                            {
                                arr_46 [i_10] [i_11] [i_11] [i_10] [i_12] [i_13] [i_14] &= ((/* implicit */short) (+((+(((/* implicit */int) arr_37 [i_10 - 1]))))));
                                var_35 = ((/* implicit */long long int) arr_33 [i_10] [i_10]);
                            }
                        } 
                    } 
                    var_36 += ((/* implicit */signed char) ((unsigned int) min((min((((/* implicit */long long int) arr_38 [i_10])), (arr_40 [i_12] [i_11] [i_10]))), (((/* implicit */long long int) arr_38 [i_12])))));
                }
            } 
        } 
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_37 = ((/* implicit */long long int) ((((/* implicit */int) var_14)) * (((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-19292))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_16 = 1; i_16 < 22; i_16 += 4) /* same iter space */
        {
            var_38 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)18)))))));
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned short i_18 = 0; i_18 < 24; i_18 += 3) 
                {
                    {
                        var_39 = ((((/* implicit */int) arr_50 [i_16 + 1] [i_16] [i_16 + 1])) <= ((-(((/* implicit */int) (short)-19292)))));
                        var_40 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)32767))));
                    }
                } 
            } 
        }
        for (unsigned short i_19 = 1; i_19 < 22; i_19 += 4) /* same iter space */
        {
            var_41 = ((/* implicit */signed char) min((((/* implicit */int) (!(((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (unsigned char)206))))))), (arr_52 [i_15] [i_15])));
            arr_60 [i_15] = 11084672119711610525ULL;
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_20 = 0; i_20 < 24; i_20 += 4) /* same iter space */
            {
                var_42 ^= ((/* implicit */unsigned int) var_2);
                /* LoopSeq 2 */
                for (unsigned char i_21 = 1; i_21 < 20; i_21 += 2) /* same iter space */
                {
                    var_43 -= ((short) arr_59 [i_15] [i_19] [i_21]);
                    var_44 = ((/* implicit */signed char) ((unsigned long long int) arr_51 [i_15]));
                }
                for (unsigned char i_22 = 1; i_22 < 20; i_22 += 2) /* same iter space */
                {
                    var_45 = ((/* implicit */unsigned char) var_13);
                    var_46 -= ((/* implicit */short) ((((/* implicit */int) arr_54 [i_20] [i_19 + 2])) % (((/* implicit */int) var_4))));
                    var_47 = ((/* implicit */unsigned short) arr_49 [i_20] [i_20]);
                }
                var_48 += arr_65 [i_19];
                var_49 += ((/* implicit */signed char) var_9);
            }
            /* vectorizable */
            for (unsigned int i_23 = 0; i_23 < 24; i_23 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_24 = 4; i_24 < 21; i_24 += 1) /* same iter space */
                {
                    var_50 = arr_61 [i_19 + 2] [i_19 + 2];
                    var_51 = ((/* implicit */signed char) ((int) arr_50 [i_19] [i_23] [i_24]));
                    var_52 -= ((/* implicit */signed char) (+(arr_59 [i_15] [i_15] [i_15])));
                }
                for (unsigned short i_25 = 4; i_25 < 21; i_25 += 1) /* same iter space */
                {
                    var_53 = ((/* implicit */unsigned int) arr_64 [i_19] [i_19] [i_19] [i_15]);
                    var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) var_15))));
                    var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((unsigned int) (short)-19292)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_15))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_26 = 0; i_26 < 24; i_26 += 3) 
                {
                    for (int i_27 = 0; i_27 < 24; i_27 += 1) 
                    {
                        {
                            var_56 = ((/* implicit */unsigned int) ((arr_51 [i_15]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23844)))));
                            arr_83 [i_15] [i_23] [i_19] [i_23] [i_26] [i_23] &= ((/* implicit */long long int) ((arr_64 [i_15] [i_19] [i_23] [i_23]) >> (((((/* implicit */int) var_5)) - (30032)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned int i_28 = 0; i_28 < 24; i_28 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_29 = 0; i_29 < 24; i_29 += 3) 
                {
                    for (short i_30 = 4; i_30 < 22; i_30 += 3) 
                    {
                        {
                            arr_92 [i_15] [i_15] [i_28] [i_15] [i_28] = ((/* implicit */_Bool) ((unsigned short) (unsigned char)146));
                            arr_93 [i_15] [i_19] [i_19] [i_29] [i_19] = ((/* implicit */long long int) (short)-1);
                            var_57 = ((/* implicit */short) ((((_Bool) (signed char)-79)) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((_Bool) var_0)))));
                            var_58 = ((/* implicit */short) (-(var_0)));
                        }
                    } 
                } 
                arr_94 [i_15] [i_15] [i_19] [i_15] = ((/* implicit */unsigned int) var_14);
                arr_95 [i_15] [i_19] [i_15] [i_15] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_77 [i_15] [i_15] [i_19] [i_28])))))));
                var_59 = ((/* implicit */short) (~(var_0)));
                /* LoopNest 2 */
                for (unsigned short i_31 = 3; i_31 < 23; i_31 += 3) 
                {
                    for (short i_32 = 3; i_32 < 21; i_32 += 4) 
                    {
                        {
                            arr_102 [i_15] [i_19] [i_15] [i_15] [i_32] = var_14;
                            var_60 = arr_81 [i_15] [i_19 + 1] [i_28] [i_28] [i_32 + 2] [i_32];
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (unsigned long long int i_33 = 0; i_33 < 24; i_33 += 4) 
        {
            var_61 = ((/* implicit */int) (signed char)-39);
            /* LoopNest 2 */
            for (int i_34 = 1; i_34 < 22; i_34 += 1) 
            {
                for (short i_35 = 0; i_35 < 24; i_35 += 3) 
                {
                    {
                        var_62 = ((signed char) arr_67 [i_34] [i_34 + 1] [i_34 + 2] [i_34 + 1] [i_34 + 2]);
                        var_63 ^= ((/* implicit */signed char) var_14);
                    }
                } 
            } 
            arr_111 [i_15] = ((/* implicit */unsigned char) ((int) (short)-7404));
            var_64 ^= var_12;
            var_65 = ((/* implicit */unsigned char) (-(arr_75 [i_15] [i_15] [i_15] [i_33])));
        }
    }
    /* LoopNest 3 */
    for (unsigned int i_36 = 0; i_36 < 25; i_36 += 4) 
    {
        for (unsigned int i_37 = 1; i_37 < 21; i_37 += 3) 
        {
            for (unsigned char i_38 = 2; i_38 < 23; i_38 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_39 = 1; i_39 < 22; i_39 += 3) 
                    {
                        var_66 &= ((/* implicit */unsigned long long int) arr_113 [i_36] [i_37]);
                        var_67 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-13891)), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)32750)) : (((/* implicit */int) (unsigned short)0))))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)113))));
                        var_68 = ((/* implicit */unsigned char) arr_119 [i_36] [i_36] [i_36] [i_36]);
                    }
                    /* vectorizable */
                    for (short i_40 = 0; i_40 < 25; i_40 += 1) 
                    {
                        var_69 = (i_37 % 2 == 0) ? (((/* implicit */short) ((((((/* implicit */int) arr_114 [i_37 + 2] [i_37 - 1] [i_37])) + (2147483647))) >> (((/* implicit */int) arr_118 [i_37 + 2] [i_37] [i_38 + 1] [i_38 - 1]))))) : (((/* implicit */short) ((((((((/* implicit */int) arr_114 [i_37 + 2] [i_37 - 1] [i_37])) - (2147483647))) + (2147483647))) >> (((/* implicit */int) arr_118 [i_37 + 2] [i_37] [i_38 + 1] [i_38 - 1])))));
                        arr_126 [i_37] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-7404)) ? (((/* implicit */int) ((_Bool) (short)31516))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1400838272)))))));
                        arr_127 [i_36] [i_37] [i_37] [i_40] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)58655))));
                        var_70 -= ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
                        var_71 &= ((/* implicit */signed char) ((int) ((unsigned char) var_14)));
                    }
                    arr_128 [i_36] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? ((+(((/* implicit */int) (unsigned short)65535)))) : ((-(((/* implicit */int) (short)7404))))));
                    var_72 = ((/* implicit */unsigned long long int) max((var_72), (((/* implicit */unsigned long long int) (~(var_9))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_41 = 2; i_41 < 11; i_41 += 3) 
    {
        for (unsigned int i_42 = 0; i_42 < 13; i_42 += 4) 
        {
            {
                var_73 = ((/* implicit */unsigned short) ((long long int) ((min((arr_12 [i_41] [i_41] [i_42] [i_42] [i_42]), (((/* implicit */unsigned int) var_4)))) ^ (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) (signed char)-18))))))));
                /* LoopNest 2 */
                for (unsigned short i_43 = 2; i_43 < 11; i_43 += 4) 
                {
                    for (_Bool i_44 = 0; i_44 < 1; i_44 += 1) 
                    {
                        {
                            var_74 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)31516)) ? (var_1) : (((/* implicit */unsigned long long int) 523866909)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))))) ? ((~(min((((/* implicit */int) arr_41 [i_44])), (-523866909))))) : (((((/* implicit */_Bool) arr_6 [i_42] [i_43] [i_43 + 2])) ? (((/* implicit */int) arr_122 [i_41] [i_41 - 2] [i_43 - 2] [i_43])) : (((/* implicit */int) arr_53 [i_42] [i_41 + 1]))))));
                            var_75 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_41] [i_42] [i_42] [i_42] [i_42] [i_43] [i_44])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
