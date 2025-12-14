/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148866
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
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 1]))));
                        arr_13 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-26))));
                        /* LoopSeq 1 */
                        for (short i_4 = 4; i_4 < 11; i_4 += 4) 
                        {
                            arr_16 [(unsigned short)0] [i_0] [6U] [i_3 + 2] = ((/* implicit */unsigned char) ((short) (unsigned char)35));
                            arr_17 [i_0] [i_0] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)114))));
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)217)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (unsigned short)59418))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 3; i_5 < 10; i_5 += 3) 
                        {
                            arr_22 [i_0 - 2] [(unsigned char)6] [i_0 - 3] [i_1] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-26))))));
                            arr_23 [i_1] = ((/* implicit */signed char) ((3477348726U) - (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-5515)) + (2147483647))) << (((999418095U) - (999418095U))))))));
                            arr_24 [i_1] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */signed char) (+(-1550944481)));
                            arr_25 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_10 [i_2] [i_0 - 3] [i_5 - 2] [i_3 + 1]))));
                        }
                        for (short i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            arr_28 [i_1] [i_0] = ((/* implicit */signed char) ((unsigned char) var_2));
                            arr_29 [i_0] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)204)) ^ (((/* implicit */int) arr_6 [i_3 + 1] [i_2] [i_1] [i_0]))));
                            arr_30 [i_1] [(signed char)4] [i_1] [i_3] [i_6] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-29)) != (((/* implicit */int) arr_1 [i_2]))));
                        }
                    }
                    for (signed char i_7 = 1; i_7 < 10; i_7 += 1) /* same iter space */
                    {
                        arr_33 [i_0 + 1] [i_0] = ((/* implicit */long long int) (unsigned short)752);
                        arr_34 [i_7] [(short)6] [i_1] [i_1] [i_0 - 1] [i_0] = ((/* implicit */signed char) (~((~(var_1)))));
                        arr_35 [i_0] = ((/* implicit */short) ((unsigned long long int) (+(((/* implicit */int) (short)-4225)))));
                        arr_36 [i_0] [i_0] [i_2] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 3] [i_1] [i_1] [i_7 + 1])) ? (((/* implicit */unsigned int) (+(var_2)))) : (534935646U)));
                    }
                }
            } 
        } 
        arr_37 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)6107))) % (arr_9 [i_0] [i_0] [8] [i_0 - 2])));
        arr_38 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_0] [i_0 + 1] [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_32 [i_0] [i_0 - 3] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_32 [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 3]))));
    }
    for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        arr_42 [i_8] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) (short)4225))));
        /* LoopSeq 2 */
        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            arr_47 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)4225))))) ? ((~(((/* implicit */int) (signed char)-90)))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (short)-5509))))) & (((/* implicit */int) min((((/* implicit */short) (signed char)26)), (arr_43 [i_8]))))))));
            arr_48 [i_8] [i_8] = ((/* implicit */signed char) max(((-((+(arr_5 [i_9] [0LL] [(signed char)8] [i_9]))))), (((/* implicit */long long int) (-(((arr_27 [i_8] [i_8]) / (337875351))))))));
        }
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            arr_53 [i_8] [i_8] [i_10] = ((/* implicit */unsigned long long int) var_5);
            arr_54 [i_8] [(short)10] = var_4;
            arr_55 [i_8] [i_8] = ((/* implicit */signed char) var_2);
        }
    }
    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        arr_60 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)64784)) - (((/* implicit */int) arr_57 [i_11]))));
        arr_61 [i_11] = ((/* implicit */signed char) (((+(var_7))) < (((/* implicit */int) (unsigned char)106))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_12 = 2; i_12 < 20; i_12 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_13 = 0; i_13 < 21; i_13 += 3) /* same iter space */
            {
                arr_67 [i_11] [i_12] [i_11] = ((((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) (unsigned short)1)))) ? (arr_65 [i_11] [i_12 - 2] [i_12] [i_12 + 1]) : (((/* implicit */int) (unsigned short)27)));
                arr_68 [i_12] = ((/* implicit */signed char) (+(arr_62 [i_12 + 1] [i_13])));
                /* LoopSeq 1 */
                for (unsigned int i_14 = 0; i_14 < 21; i_14 += 2) 
                {
                    arr_71 [10LL] [i_12] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12163))) - (0ULL)));
                    arr_72 [(signed char)11] [i_12] [(signed char)11] [i_14] = ((/* implicit */short) arr_62 [i_12 + 1] [i_12 - 1]);
                }
            }
            for (signed char i_15 = 0; i_15 < 21; i_15 += 3) /* same iter space */
            {
                arr_77 [(signed char)0] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)57)) ? (((((/* implicit */int) (short)8192)) & (((/* implicit */int) (unsigned char)56)))) : (((/* implicit */int) (unsigned short)761))));
                arr_78 [i_11] [i_12 - 2] [i_11] [8] = ((/* implicit */signed char) (-(2027782975)));
            }
            arr_79 [i_12] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)3))));
        }
        for (unsigned char i_16 = 0; i_16 < 21; i_16 += 3) 
        {
            arr_82 [9ULL] [i_16] = ((/* implicit */unsigned int) (unsigned char)207);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 1) 
            {
                arr_86 [(short)9] [(unsigned char)18] [(unsigned char)18] [(unsigned char)18] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)6))));
                arr_87 [i_11] [i_11] [(signed char)20] = ((/* implicit */signed char) ((int) ((int) (unsigned char)204)));
            }
            arr_88 [i_11] [i_11] [i_16] = ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_5))))) - (((((/* implicit */_Bool) -2027782976)) ? (((/* implicit */int) var_9)) : (arr_66 [i_11] [(signed char)3]))));
            arr_89 [i_11] [i_16] = ((/* implicit */int) min((min((arr_70 [i_11] [i_11] [i_11] [i_16]), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (-(-2027782975))))));
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_18 = 2; i_18 < 9; i_18 += 2) 
    {
        arr_93 [i_18] [i_18] = ((/* implicit */signed char) arr_74 [i_18] [i_18 - 1] [i_18 - 1] [i_18 - 1]);
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 10; i_19 += 3) 
        {
            for (signed char i_20 = 0; i_20 < 10; i_20 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        arr_103 [i_19] [i_18] [i_19] [i_19] [i_18] [i_18 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_101 [i_18] [i_18 - 1] [i_18] [i_18])) ? (arr_94 [i_18 - 1] [i_18] [i_18 + 1]) : (arr_94 [i_18] [i_18] [i_18 - 1])));
                        arr_104 [i_19] [i_19] [i_19] [i_19] [(short)7] = ((/* implicit */unsigned int) (~(arr_27 [i_18 + 1] [i_18])));
                        arr_105 [(unsigned char)4] [i_18] [(unsigned short)0] [i_19] = ((/* implicit */int) ((unsigned int) arr_97 [i_19]));
                        arr_106 [i_18] [i_21] [2U] [i_21] [i_18] |= ((/* implicit */short) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_20 [i_18 - 1] [i_18 - 1] [i_18] [i_21] [i_21]))));
                        arr_107 [i_21] [i_18] [i_18] [(signed char)8] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-114))));
                    }
                    arr_108 [i_18] [i_18] [i_19] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_19])) || (((/* implicit */_Bool) var_9))));
                    arr_109 [(signed char)3] [i_19] [i_19] = ((/* implicit */short) (+(-2027782975)));
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 2; i_22 < 9; i_22 += 3) 
                    {
                        arr_112 [i_18] [i_22 - 1] [i_19] [i_22] = ((/* implicit */unsigned char) ((int) var_0));
                        arr_113 [i_19] [i_19] [i_20] [i_22] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (unsigned char)200)))));
                        arr_114 [i_22] [i_19] [i_20] [i_20] [i_19] [0ULL] = ((3157923538U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54522))));
                    }
                }
            } 
        } 
        arr_115 [i_18] = ((/* implicit */short) (-(1086651656U)));
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 21; i_23 += 2) 
    {
        arr_119 [i_23] [i_23] = ((/* implicit */short) arr_80 [i_23]);
        arr_120 [6U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)5493)) : (((/* implicit */int) (unsigned short)43))))) ? (((/* implicit */unsigned int) arr_65 [i_23] [i_23] [i_23] [i_23])) : (arr_69 [i_23] [i_23] [i_23] [i_23])));
    }
    var_10 = ((/* implicit */short) 1688849860263936LL);
}
