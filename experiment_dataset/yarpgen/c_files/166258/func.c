/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166258
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
    var_20 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_8))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (var_10))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_6))))) | (min((var_0), (((/* implicit */unsigned long long int) var_14))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_22 = ((/* implicit */int) var_4);
            var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_15) / (((/* implicit */int) var_3))))) ^ (var_17)));
            arr_5 [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || ((!((!(((/* implicit */_Bool) var_8))))))));
        }
        arr_6 [i_0] &= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((var_16) - (((/* implicit */int) (signed char)-55))))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (((((/* implicit */unsigned long long int) -1LL)) + (var_17))))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((var_5), (((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_10))))))))));
        var_25 = ((/* implicit */unsigned char) var_9);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 15; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 3; i_3 < 16; i_3 += 3) 
        {
            var_26 = ((/* implicit */_Bool) ((long long int) (~(var_1))));
            arr_11 [i_3] = ((/* implicit */int) var_12);
        }
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            var_27 = ((/* implicit */unsigned char) ((-1LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241)))));
            var_28 = ((unsigned short) var_10);
            arr_15 [i_4] [i_2] = ((/* implicit */signed char) var_10);
            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((var_4) / (((/* implicit */long long int) var_15)))))));
        }
        arr_16 [i_2] = ((/* implicit */int) ((short) var_16));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 15; i_5 += 1) 
        {
            for (int i_6 = 1; i_6 < 16; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    {
                        arr_25 [i_7] [i_6] [i_6] [i_2] = (-((+(var_15))));
                        var_30 = ((/* implicit */unsigned char) var_12);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        arr_33 [i_2] [14LL] [i_9] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_0))))));
                        var_31 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
                    }
                    for (signed char i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        arr_38 [i_2 - 2] [i_11] [i_8] [i_9] [i_11] = ((int) var_9);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_11))));
                            arr_42 [i_2] [i_9] [i_11] [i_11] [i_12] [i_12] = var_19;
                        }
                        for (signed char i_13 = 2; i_13 < 16; i_13 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) var_13)) != (var_15))));
                            var_34 ^= ((/* implicit */int) ((_Bool) var_9));
                            arr_45 [i_11] [i_8] [i_9] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((-3343812992926958268LL) - (0LL)))) * (var_17)));
                            arr_46 [i_2 + 2] [i_11] [i_11] [i_2 + 3] [i_2 + 2] = ((/* implicit */unsigned char) var_1);
                        }
                        for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) 
                        {
                            arr_49 [8] [i_11] [i_9] [i_11] [i_11] [i_11] [i_14] = ((var_4) / (var_7));
                            arr_50 [i_11] [i_8] [i_8] [i_11] [i_14] = ((/* implicit */unsigned char) ((((unsigned long long int) var_2)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((signed char) var_15)))));
                        }
                        var_36 = ((/* implicit */short) ((_Bool) var_19));
                    }
                    for (long long int i_15 = 1; i_15 < 17; i_15 += 3) 
                    {
                        arr_53 [i_2 + 1] [i_8] [i_9] [i_15] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_7)));
                        var_37 = ((/* implicit */unsigned long long int) var_8);
                    }
                    var_38 = ((/* implicit */unsigned char) ((unsigned long long int) var_16));
                    arr_54 [i_2] [i_2] [i_9] = ((/* implicit */short) ((((/* implicit */int) var_13)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))));
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (int i_17 = 4; i_17 < 15; i_17 += 4) 
                        {
                            {
                                arr_59 [i_2 + 2] [(_Bool)1] [i_9] [i_9] [i_2 + 3] = ((/* implicit */unsigned short) ((var_16) + (((((/* implicit */int) var_9)) - (((/* implicit */int) var_19))))));
                                var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((unsigned long long int) var_15)))));
                                arr_60 [i_2] [i_2 + 2] [i_2 + 2] [i_2] [i_2] [i_2 + 2] [i_2] = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_18 = 2; i_18 < 14; i_18 += 2) 
    {
        arr_63 [(unsigned char)4] [i_18] = ((/* implicit */int) max(((+(var_1))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned short)65535)))))));
        arr_64 [i_18] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
        /* LoopSeq 2 */
        for (signed char i_19 = 2; i_19 < 14; i_19 += 3) 
        {
            var_40 = ((/* implicit */long long int) (-((-(((/* implicit */int) var_5))))));
            arr_68 [i_18 - 1] [i_18 - 1] = ((/* implicit */unsigned char) (+(((((var_18) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) / (var_18)))));
            /* LoopSeq 2 */
            for (unsigned char i_20 = 3; i_20 < 14; i_20 += 3) 
            {
                arr_71 [i_20] [i_20] [i_20] = ((/* implicit */int) var_7);
                var_41 = ((/* implicit */unsigned int) ((((var_16) >> (((((/* implicit */int) var_11)) - (142))))) >> (((((var_4) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_15)))))) - (38715375197946524LL)))));
            }
            for (unsigned char i_21 = 0; i_21 < 17; i_21 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_22 = 0; i_22 < 17; i_22 += 2) 
                {
                    arr_76 [i_21] [i_21] = ((/* implicit */long long int) max((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_16)) ^ (var_14))) & (var_4))))));
                    var_42 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_5))))), (var_10)));
                    var_43 = (-(((/* implicit */int) var_2)));
                    var_44 &= ((/* implicit */unsigned long long int) ((-1LL) >= (1LL)));
                }
                for (int i_23 = 0; i_23 < 17; i_23 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_24 = 1; i_24 < 14; i_24 += 2) 
                    {
                        arr_84 [(_Bool)0] [i_19] [i_21] [i_23] [i_24] = ((/* implicit */unsigned short) var_7);
                        arr_85 [i_18] [i_18] [i_18 - 1] [i_18] [i_18 + 2] [i_24] = ((/* implicit */unsigned long long int) var_4);
                    }
                    arr_86 [i_18] [i_18] [i_21] [i_23] [i_18] = ((/* implicit */unsigned char) var_16);
                }
                /* vectorizable */
                for (unsigned long long int i_25 = 0; i_25 < 17; i_25 += 2) 
                {
                    arr_90 [i_19] [i_21] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_7))));
                    arr_91 [i_25] [i_19] [i_18] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) == (((var_14) << (((var_17) - (16639601338233448250ULL)))))));
                    arr_92 [i_18] [i_19] [i_21] [i_18] [i_25] = ((/* implicit */int) var_11);
                }
                for (long long int i_26 = 2; i_26 < 15; i_26 += 2) 
                {
                    var_45 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)5)) >= (((/* implicit */int) (signed char)15))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_27 = 4; i_27 < 14; i_27 += 3) 
                    {
                        var_46 = ((long long int) var_0);
                        arr_99 [i_18 + 3] [(_Bool)1] [i_26] = ((/* implicit */unsigned char) ((var_15) | (((/* implicit */int) var_2))));
                        var_47 = ((/* implicit */int) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    }
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_28 = 0; i_28 < 17; i_28 += 2) 
                {
                    arr_102 [i_19] [i_19] [i_19 + 2] [i_19] [i_19] [i_19 + 2] = ((/* implicit */long long int) (+(((((/* implicit */int) var_19)) + (((/* implicit */int) var_9))))));
                    arr_103 [i_18 + 3] [i_18 + 3] [i_21] [i_18 + 3] = ((/* implicit */long long int) var_19);
                }
                for (unsigned long long int i_29 = 0; i_29 < 17; i_29 += 2) 
                {
                    var_48 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((int) var_5))))), (((((/* implicit */long long int) ((/* implicit */int) (short)22963))) - (0LL)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_30 = 0; i_30 < 17; i_30 += 4) 
                    {
                        var_49 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 15872U)))))) == (((((/* implicit */int) var_9)) & ((+(2016)))))));
                        arr_110 [i_21] [i_21] [i_19 - 2] = ((/* implicit */int) ((long long int) var_1));
                        arr_111 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [0U] [i_29] [i_19 + 2] = ((/* implicit */int) ((-19LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                        arr_112 [i_30] [i_18 + 2] [16] [i_19] [i_18 + 2] &= ((/* implicit */signed char) (((+(((/* implicit */int) var_8)))) == (((/* implicit */int) min((((/* implicit */short) var_5)), (var_8))))));
                    }
                    /* vectorizable */
                    for (long long int i_31 = 0; i_31 < 17; i_31 += 2) 
                    {
                        arr_116 [i_18] [i_18] [i_19 - 1] [i_19 - 1] [i_29] [i_31] = ((/* implicit */_Bool) var_14);
                        arr_117 [i_18] = ((/* implicit */unsigned char) var_7);
                        var_50 = ((/* implicit */unsigned char) ((1073741312) >> (((-2006) + (2007)))));
                        arr_118 [(unsigned short)14] [(unsigned short)14] [(unsigned short)14] [(signed char)10] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_19))));
                    }
                    var_51 = var_3;
                }
                /* vectorizable */
                for (short i_32 = 0; i_32 < 17; i_32 += 3) 
                {
                    var_52 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) ((((/* implicit */_Bool) 1242925850)) && (((/* implicit */_Bool) (unsigned short)61157)))))));
                    var_53 = ((/* implicit */unsigned short) var_9);
                    var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_18))) + (var_17))))));
                    var_55 = ((/* implicit */unsigned int) min((var_55), (((/* implicit */unsigned int) ((-2027) / (var_15))))));
                }
                var_56 = ((/* implicit */signed char) var_16);
                arr_121 [i_18] [i_19] [i_21] = ((/* implicit */long long int) var_5);
            }
        }
        for (signed char i_33 = 0; i_33 < 17; i_33 += 3) 
        {
            var_57 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_13)) | (((/* implicit */int) var_12)))) + (2147483647))) >> (((((/* implicit */int) ((var_18) == (var_0)))) + (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_10)))))))));
            var_58 = ((/* implicit */int) ((max((var_1), (((/* implicit */long long int) var_6)))) - (((((/* implicit */long long int) ((/* implicit */int) var_11))) - (var_7)))));
        }
    }
    var_59 = ((/* implicit */int) var_11);
    var_60 = ((/* implicit */unsigned short) var_19);
    var_61 = ((/* implicit */unsigned int) var_2);
}
