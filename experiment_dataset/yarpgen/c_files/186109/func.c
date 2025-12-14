/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186109
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
    var_17 = ((/* implicit */int) var_10);
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3121148727609405566ULL)) ? (15325595346100146049ULL) : (((/* implicit */unsigned long long int) 3797079938U))))) ? ((+(var_16))) : (((/* implicit */int) (signed char)119))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) var_7);
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_11)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19206))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (17826726884008696661ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [(signed char)2])) || (((/* implicit */_Bool) var_12))))))))))));
        var_20 = ((/* implicit */_Bool) min((((((var_13) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) + (((/* implicit */unsigned int) (-(355753962)))))), (((/* implicit */unsigned int) (-(var_16))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */int) arr_4 [i_1] [i_1]);
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(4105250715U)))) ? (((/* implicit */int) (short)31507)) : (((/* implicit */int) var_9))));
        var_22 = var_13;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            {
                                arr_19 [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */short) var_3);
                                var_23 = ((/* implicit */unsigned int) arr_10 [i_1] [i_1] [(signed char)1]);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-31503))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-9)) : (((/* implicit */int) ((((/* implicit */int) var_7)) != (var_16))))));
                        arr_22 [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_6)))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_9 = 3; i_9 < 24; i_9 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    arr_34 [i_8] = ((/* implicit */int) (~(var_14)));
                    var_26 = ((/* implicit */signed char) var_13);
                    /* LoopSeq 2 */
                    for (int i_11 = 3; i_11 < 24; i_11 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (var_2)));
                        arr_38 [i_7] [(signed char)22] [i_11 - 3] [i_10] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(5382782691361647423ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) : (var_11)));
                        var_28 = ((/* implicit */unsigned short) (((+(var_14))) - (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    }
                    for (int i_12 = 2; i_12 < 24; i_12 += 4) 
                    {
                        var_29 *= ((/* implicit */unsigned int) -472600805080676754LL);
                        arr_41 [i_8] [i_8] [i_9 + 1] [i_10] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (1280263274U)));
                        arr_42 [i_8] = ((/* implicit */unsigned short) var_12);
                        var_30 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (arr_30 [i_7] [i_10] [i_9 + 1] [i_7])));
                    }
                }
                for (short i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    arr_46 [i_13] [i_8] [i_8] [i_7] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_23 [i_9 - 2] [i_8 - 1]));
                    var_31 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)5))))));
                    var_32 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (signed char)92)) | (((/* implicit */int) (short)-19192)))));
                    arr_47 [i_8] [i_9] [i_8 - 1] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)0))));
                    arr_48 [i_7] [i_8] [i_8] [i_13] = ((/* implicit */unsigned int) (short)-13055);
                }
                var_33 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (arr_23 [i_8 - 1] [i_8 - 1]) : (((/* implicit */unsigned long long int) var_2))));
                /* LoopSeq 1 */
                for (int i_14 = 1; i_14 < 23; i_14 += 2) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((unsigned long long int) var_12))));
                        var_35 = arr_30 [i_8] [i_9 - 1] [i_14] [i_8];
                        var_36 -= ((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_7] [i_7] [i_8 - 1] [(_Bool)0] [i_14] [i_15])) ^ (((/* implicit */int) arr_40 [i_9 - 2] [i_9 - 3] [i_9 + 1]))));
                    }
                    for (short i_16 = 1; i_16 < 23; i_16 += 3) 
                    {
                        arr_58 [i_7] [i_8] [i_9] = ((/* implicit */unsigned long long int) var_16);
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (short)21)) : (((/* implicit */int) var_10))));
                        var_38 = ((/* implicit */unsigned short) var_0);
                    }
                    for (signed char i_17 = 2; i_17 < 22; i_17 += 4) 
                    {
                        arr_61 [i_8] [i_8] [i_9 - 3] [i_9 - 3] [(signed char)15] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)0)) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_25 [i_7])) : (((/* implicit */int) var_9))))));
                        var_39 = ((/* implicit */long long int) var_11);
                        var_40 = ((/* implicit */int) min((var_40), (((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */int) var_10))))));
                    }
                    arr_62 [i_8] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)27))) + (var_1)));
                }
                var_41 = ((/* implicit */short) (-(arr_32 [i_9] [i_9 - 3] [i_8 - 1] [i_8 - 1])));
            }
            for (unsigned short i_18 = 0; i_18 < 25; i_18 += 1) 
            {
                var_42 = ((/* implicit */short) ((((7172354896549085986LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)110))))) / (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                arr_66 [i_7] [i_18] [i_8] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) != ((-(-355647067)))));
            }
            var_43 = ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7] [i_8] [18U]))))) > (arr_57 [i_8 - 1] [i_7] [i_8] [i_7] [i_7] [i_7])));
            arr_67 [i_8] [i_8] = ((/* implicit */long long int) (signed char)-104);
        }
        /* vectorizable */
        for (unsigned int i_19 = 1; i_19 < 24; i_19 += 1) 
        {
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)11)) : (((/* implicit */int) var_9))));
            var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)200)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29024)))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_19 - 1] [i_19 - 1] [i_19 - 1])))));
            var_46 ^= ((/* implicit */short) (-(var_6)));
        }
        /* LoopSeq 2 */
        for (signed char i_20 = 3; i_20 < 23; i_20 += 1) 
        {
            var_47 = ((/* implicit */unsigned int) min((var_47), (var_1)));
            arr_73 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (298050861))) | (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)6)) & (((/* implicit */int) var_5))))))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) var_15))) | (var_8)))))));
        }
        for (unsigned char i_21 = 0; i_21 < 25; i_21 += 1) 
        {
            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (min((3683153239U), (((/* implicit */unsigned int) (signed char)4)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (signed char)33))))))))));
            arr_76 [i_21] = ((/* implicit */signed char) var_2);
        }
    }
}
