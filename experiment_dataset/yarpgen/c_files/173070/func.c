/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173070
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((((/* implicit */int) arr_0 [i_0 - 1])) / (arr_1 [i_0 + 1]))) : (((/* implicit */int) var_13))));
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned int) ((unsigned long long int) (-(2147483647))));
        var_19 += ((/* implicit */long long int) ((unsigned int) ((max((1089872414), (((/* implicit */int) var_14)))) + (((/* implicit */int) arr_0 [i_0])))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (_Bool)0);
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_1))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) (~(arr_1 [i_2])));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 2; i_3 < 24; i_3 += 2) 
            {
                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) arr_9 [i_0 - 1]));
                /* LoopNest 2 */
                for (unsigned int i_4 = 3; i_4 < 23; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_1 [i_3]))))));
                            arr_20 [i_5] [i_4] [i_3 - 2] [i_2] [i_5] = ((/* implicit */signed char) arr_6 [i_3] [i_0] [i_0]);
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        {
                            arr_28 [i_2] [i_6] [i_8] = ((/* implicit */unsigned int) ((long long int) arr_16 [i_8] [i_6] [i_6] [i_0]));
                            var_23 &= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_16 [i_0 - 1] [i_7] [i_0 + 1] [i_0 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_16 [i_0 - 1] [i_6] [i_0 + 1] [i_0])) + (45)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_9 = 4; i_9 < 23; i_9 += 2) 
            {
                for (unsigned short i_10 = 1; i_10 < 22; i_10 += 3) 
                {
                    {
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_19 [i_0] [i_2] [i_9 - 2] [i_9 - 2] [i_9 - 2]))));
                        var_25 += ((/* implicit */unsigned short) arr_23 [i_0] [i_2] [i_0] [i_10]);
                    }
                } 
            } 
        }
        for (long long int i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                arr_41 [i_0] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((arr_39 [i_0 - 1] [i_0 + 1] [i_0 + 1]) | (((/* implicit */int) var_13))))) < (((unsigned int) arr_23 [i_0] [i_11] [i_11] [i_11]))));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (~(((long long int) var_7)))))));
                var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_0] [i_11] [i_12] [i_0])) : (min((arr_39 [i_0 - 1] [i_0] [i_0]), (((/* implicit */int) var_14))))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    for (short i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        {
                            var_28 = ((((/* implicit */unsigned long long int) (-((-(var_3)))))) == (((unsigned long long int) (-(((/* implicit */int) (unsigned char)72))))));
                            arr_47 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned char) ((unsigned int) ((_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_14] [i_0] [i_0])), (var_2)))));
                            var_29 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) min((((/* implicit */unsigned short) (unsigned char)30)), (arr_0 [i_12])))));
                            var_30 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_31 [i_0] [i_11] [i_14]))))))), (max((min((((/* implicit */unsigned long long int) (short)-12080)), (16081683395409813975ULL))), (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */signed char) var_1)))))))));
                        }
                    } 
                } 
                arr_48 [i_0 + 1] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_17)), (((((/* implicit */_Bool) arr_24 [i_0] [i_11] [i_11] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_11] [i_12]))) : (arr_30 [i_0 - 1])))));
            }
            for (unsigned int i_15 = 2; i_15 < 24; i_15 += 4) 
            {
                arr_53 [i_15] [i_11] [i_0] = ((/* implicit */unsigned short) min((54043195528445952ULL), (((/* implicit */unsigned long long int) (short)-1))));
                arr_54 [i_0] [i_0 - 1] [i_11] [i_15] &= max((((/* implicit */unsigned int) max((arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 1]), (arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 1])))), (min((((/* implicit */unsigned int) max((((/* implicit */int) (short)9594)), (var_17)))), (min((((/* implicit */unsigned int) (_Bool)1)), (498854774U))))));
                var_31 &= ((/* implicit */unsigned int) (((+(arr_24 [i_0 + 1] [i_15 - 1] [i_15] [i_15]))) - (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_16 = 1; i_16 < 22; i_16 += 2) 
            {
                var_32 ^= ((/* implicit */unsigned int) ((((((/* implicit */long long int) 1659215642U)) & (4055411164728687354LL))) <= (((/* implicit */long long int) ((int) arr_9 [i_16 + 1])))));
                /* LoopNest 2 */
                for (unsigned int i_17 = 2; i_17 < 21; i_17 += 2) 
                {
                    for (unsigned short i_18 = 3; i_18 < 22; i_18 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) (unsigned char)48)), (528642645469731825ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_25 [i_18] [i_18] [i_18 + 2] [i_18 + 3] [i_18 + 2] [i_18 - 2]))))));
                            var_34 &= ((/* implicit */unsigned int) (unsigned short)29298);
                            var_35 = ((/* implicit */unsigned long long int) arr_23 [i_0] [i_11] [i_16 + 3] [i_18]);
                            var_36 += ((/* implicit */unsigned int) ((int) arr_0 [i_0]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_19 = 3; i_19 < 24; i_19 += 4) 
                {
                    for (signed char i_20 = 0; i_20 < 25; i_20 += 1) 
                    {
                        {
                            arr_67 [i_0] [i_11] [i_16 + 2] [i_19] [i_20] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_14))))))));
                            arr_68 [i_0] [i_11] [i_11] [i_11] [i_16] [i_19] [i_11] &= ((/* implicit */long long int) (short)13642);
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (+(arr_51 [i_0] [i_0] [i_0 - 1] [i_11]))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 2) 
            {
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 25; i_22 += 1) 
                {
                    for (short i_23 = 0; i_23 < 25; i_23 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) var_11))));
                            var_39 = ((/* implicit */signed char) ((_Bool) ((int) var_17)));
                        }
                    } 
                } 
                arr_75 [i_0] [i_0] [i_0] &= ((/* implicit */short) ((unsigned char) ((unsigned int) (-(((/* implicit */int) arr_46 [i_0] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))))));
                /* LoopSeq 1 */
                for (unsigned char i_24 = 0; i_24 < 25; i_24 += 3) 
                {
                    var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_18 [i_11] [i_0] [i_11] [i_0] [i_24] [i_24]), (((/* implicit */unsigned long long int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_24]))))))) : ((~(((((/* implicit */_Bool) (short)-13649)) ? (4294967295U) : (3796112522U)))))));
                    var_41 += ((/* implicit */unsigned int) ((unsigned long long int) ((short) arr_58 [i_0] [i_0] [i_11] [i_21] [i_0] [i_11])));
                    arr_79 [i_24] [i_21] [i_11] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
                }
            }
            var_42 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 924536699U)), (arr_52 [i_0])));
        }
    }
    /* LoopNest 3 */
    for (unsigned int i_25 = 1; i_25 < 19; i_25 += 4) 
    {
        for (unsigned char i_26 = 0; i_26 < 21; i_26 += 3) 
        {
            for (int i_27 = 1; i_27 < 20; i_27 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_28 = 1; i_28 < 19; i_28 += 1) 
                    {
                        arr_91 [i_26] [i_27] = ((/* implicit */int) ((_Bool) var_2));
                        var_43 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)142))));
                        arr_92 [i_25] [i_26] [i_27 - 1] [i_28] &= ((/* implicit */unsigned int) (-(((unsigned long long int) (-(arr_29 [i_26] [i_26] [i_26]))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_29 = 1; i_29 < 20; i_29 += 4) 
                        {
                            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((unsigned short) var_4)))));
                            var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) min((((/* implicit */unsigned long long int) 3678461010U)), (7361706192658445078ULL))))));
                            arr_96 [i_25 + 2] [i_26] [i_26] [i_28] [i_25 + 2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_58 [i_25] [i_26] [i_25] [i_25] [i_26] [i_28]))));
                            arr_97 [i_25 - 1] [i_26] [i_27] [i_27] [i_28] [i_29] = (-(arr_86 [i_25] [i_25] [i_25] [i_25]));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_30 = 0; i_30 < 21; i_30 += 1) 
                        {
                            var_46 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)8979))));
                            var_47 += ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_25] [i_26] [i_25] [i_28])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (var_15)));
                            arr_100 [i_25] [i_25] [i_25] = ((((/* implicit */int) arr_55 [i_25] [i_25 + 1] [i_25])) >> (((14222111) - (14222098))));
                            var_48 += ((/* implicit */unsigned char) ((unsigned short) arr_58 [i_27 - 1] [i_27 - 1] [i_27] [i_27 + 1] [i_27 + 1] [i_27]));
                        }
                    }
                    var_49 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_44 [i_27] [i_27]))));
                }
            } 
        } 
    } 
    var_50 = ((/* implicit */short) var_11);
}
