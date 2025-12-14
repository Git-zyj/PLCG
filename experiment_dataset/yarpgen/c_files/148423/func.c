/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148423
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
    var_15 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] |= ((/* implicit */unsigned char) var_14);
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_2 [i_0])));
        arr_6 [i_0] = (~(((/* implicit */int) arr_1 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_11 [i_1] = ((/* implicit */short) arr_10 [i_1]);
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 23; i_2 += 4) 
        {
            arr_15 [(short)13] [4LL] [(signed char)12] &= ((/* implicit */_Bool) 2794692594U);
            arr_16 [i_1] [i_1] [i_1] = ((unsigned char) 1187943986299150103ULL);
            /* LoopSeq 4 */
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                arr_19 [i_1] [i_1] |= ((/* implicit */unsigned char) var_10);
                arr_20 [i_2 - 1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_12 [(unsigned char)17]);
                arr_21 [i_2] = ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) arr_13 [i_1] [i_1])) ? (var_3) : (((/* implicit */unsigned int) var_2))))))));
            }
            for (unsigned int i_4 = 2; i_4 < 22; i_4 += 2) 
            {
                arr_25 [3LL] [(unsigned char)15] [(unsigned char)15] = ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned char)241))))));
                arr_26 [i_1] [i_2 + 1] [(unsigned char)0] [1U] = ((/* implicit */unsigned int) ((unsigned short) ((signed char) var_8)));
            }
            for (int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    arr_33 [i_5] = ((/* implicit */signed char) (~(1187943986299150104ULL)));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        arr_38 [i_5] = ((/* implicit */unsigned short) var_11);
                        arr_39 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                    }
                    for (unsigned short i_8 = 2; i_8 < 24; i_8 += 3) 
                    {
                        arr_42 [i_1] [i_2 + 2] [i_1] [12LL] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_1] [i_2 + 1]))))) ? (((((((/* implicit */int) arr_31 [(unsigned short)16] [i_1] [i_6])) >= (arr_28 [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_6] [i_8 - 1]))) : ((~(var_1))))) : (((/* implicit */unsigned int) ((int) min((17258800087410401515ULL), (((/* implicit */unsigned long long int) (signed char)-92))))))));
                        arr_43 [i_8] [i_1] [i_6] [i_5] [i_1] [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_8 - 2] [i_8] [i_8] [i_8] [i_2]))))) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) ((signed char) arr_41 [i_8 + 1] [1LL] [i_8 - 1] [i_8 - 2] [i_8 - 1]))));
                        arr_44 [i_5] [i_5] = var_8;
                    }
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    arr_47 [i_1] [i_1] [i_2] [(signed char)6] [i_1] = ((/* implicit */int) 4121170772U);
                    arr_48 [i_9] [i_1] [i_1] [i_1] &= ((/* implicit */signed char) (short)-18592);
                }
                for (long long int i_10 = 3; i_10 < 22; i_10 += 1) /* same iter space */
                {
                    arr_52 [i_10] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_8 [i_10 + 2]);
                    arr_53 [i_1] [i_5] = ((/* implicit */int) var_8);
                    arr_54 [i_1] [i_1] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_29 [i_1] [i_2 + 1]))))) | (((/* implicit */int) arr_14 [i_5] [i_2 + 2] [i_1]))));
                }
                /* vectorizable */
                for (long long int i_11 = 3; i_11 < 22; i_11 += 1) /* same iter space */
                {
                    arr_57 [i_11] [i_5] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_50 [(short)22] [i_1]))));
                    arr_58 [i_5] [i_2 + 1] [i_2 + 1] [i_11] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535))));
                }
            }
            for (short i_12 = 3; i_12 < 23; i_12 += 1) 
            {
                arr_62 [i_1] [i_12 - 1] = ((/* implicit */signed char) 1187943986299150116ULL);
                arr_63 [i_12] [i_12] = ((/* implicit */int) (~(arr_17 [21U] [i_2 + 1] [22U])));
                arr_64 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_40 [i_12] [i_12 + 2] [i_12] [i_12 + 1] [i_12])))) : (((unsigned int) arr_59 [(short)4] [i_1] [i_2 + 1] [(unsigned short)1]))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            /* LoopNest 3 */
            for (int i_14 = 3; i_14 < 21; i_14 += 2) 
            {
                for (unsigned short i_15 = 0; i_15 < 25; i_15 += 1) 
                {
                    for (unsigned char i_16 = 1; i_16 < 24; i_16 += 3) 
                    {
                        {
                            arr_77 [18U] [i_13] [i_14] [i_14] [(unsigned short)14] [(unsigned short)14] [(unsigned short)7] = ((/* implicit */signed char) ((unsigned short) (unsigned short)62982));
                            arr_78 [16U] [i_1] [2LL] [i_15] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_14)) & ((~(((/* implicit */int) arr_50 [i_1] [i_1]))))));
                            arr_79 [i_14] [i_13] [i_15] [i_15] = (~(((/* implicit */int) (unsigned short)62988)));
                            arr_80 [i_14] [i_15] [i_14 + 2] [i_13] [i_14] = ((/* implicit */unsigned char) ((((((min((((((/* implicit */_Bool) var_3)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)112)))), (min((((/* implicit */int) (short)22480)), (var_4))))) + (2147483647))) + (2147483647))) << (((((var_5) + (4415720931762215219LL))) - (15LL)))));
                        }
                    } 
                } 
            } 
            arr_81 [i_1] = ((/* implicit */short) (((-((-(((/* implicit */int) var_8)))))) <= (((((/* implicit */_Bool) arr_74 [i_13] [i_13] [3] [(short)21] [i_1])) ? (1813433199) : (((/* implicit */int) var_0))))));
            arr_82 [i_1] = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)26));
        }
    }
    for (unsigned int i_17 = 0; i_17 < 25; i_17 += 3) 
    {
        arr_85 [i_17] = (i_17 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((((/* implicit */_Bool) ((unsigned char) var_0))) ? (min((arr_27 [i_17]), (((/* implicit */long long int) arr_72 [8U] [i_17] [i_17] [i_17])))) : (((/* implicit */long long int) ((/* implicit */int) ((4201570230U) < (63U))))))) - (35112LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((((((/* implicit */_Bool) ((unsigned char) var_0))) ? (min((arr_27 [i_17]), (((/* implicit */long long int) arr_72 [8U] [i_17] [i_17] [i_17])))) : (((/* implicit */long long int) ((/* implicit */int) ((4201570230U) < (63U))))))) - (35112LL))) + (20041LL))))));
        arr_86 [i_17] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) arr_35 [i_17] [i_17] [17U] [i_17])) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (17258800087410401522ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_17])))))));
    }
    var_16 = ((/* implicit */unsigned short) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
}
