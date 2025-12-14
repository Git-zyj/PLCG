/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143223
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
    var_10 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) ((int) var_8));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((((/* implicit */unsigned int) var_6)) - (arr_4 [i_0] [i_1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))));
            arr_5 [i_0] [11U] = ((/* implicit */unsigned int) var_3);
            arr_6 [i_0] [i_0] [i_1 + 4] = ((/* implicit */short) (~(((/* implicit */int) var_3))));
        }
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 7; i_2 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) var_6);
        var_14 = ((/* implicit */unsigned char) ((long long int) arr_1 [i_2]));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */long long int) (unsigned short)27001);
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            arr_15 [23LL] [i_3] [23LL] = ((/* implicit */unsigned long long int) var_3);
            arr_16 [i_4] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 12521882021635013084ULL)) ? (16646144LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)75))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-89)))))));
            /* LoopSeq 2 */
            for (short i_5 = 1; i_5 < 24; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 4; i_6 < 22; i_6 += 4) 
                {
                    for (short i_7 = 2; i_7 < 24; i_7 += 2) 
                    {
                        {
                            arr_27 [i_7 - 1] [i_6] [i_5 - 1] [i_5] [(unsigned short)24] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_11 [i_7 + 1]) : (arr_11 [i_7 + 1])));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_8 = 1; i_8 < 24; i_8 += 1) 
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)46)) || (((/* implicit */_Bool) 3883279237U))));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 1; i_9 < 24; i_9 += 4) 
                    {
                        arr_35 [i_3] [(unsigned char)4] [(signed char)1] [i_8] [i_8 - 1] [i_8] [i_9 + 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) (unsigned short)65535)))));
                        var_17 = (+(-6166371740015566115LL));
                    }
                    for (unsigned char i_10 = 1; i_10 < 24; i_10 += 3) 
                    {
                        var_18 -= ((/* implicit */unsigned char) -9080789234604557727LL);
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)81))) : (-3850285304956855950LL)));
                    }
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [(signed char)1] [i_8 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) <= (var_9))))) : (arr_32 [i_5 - 1] [i_8] [i_8 - 1] [i_8 - 1])));
                }
                for (int i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    var_21 = ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((((/* implicit */_Bool) var_5)) ? (var_8) : (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))));
                    var_22 = ((/* implicit */long long int) var_0);
                    var_23 = ((/* implicit */long long int) min((var_23), (var_8)));
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 2; i_12 < 21; i_12 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_33 [i_4] [i_5 - 1] [i_5]))));
                        arr_43 [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_9)))) ? (arr_37 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_12 + 4]) : (((((/* implicit */unsigned long long int) arr_39 [i_3])) ^ (var_5)))));
                        arr_44 [i_3] [i_4] [i_4] [i_4] [i_12] = ((/* implicit */long long int) ((int) arr_17 [i_12 + 4] [i_5 - 1] [i_3]));
                    }
                }
                arr_45 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-5449))));
            }
            for (long long int i_13 = 0; i_13 < 25; i_13 += 3) 
            {
                arr_48 [i_3] [(signed char)15] [i_13] = ((/* implicit */short) ((long long int) arr_21 [i_3] [7U] [i_3] [i_3]));
                /* LoopSeq 2 */
                for (unsigned char i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_15 = 1; i_15 < 21; i_15 += 4) 
                    {
                        var_25 = ((/* implicit */short) (-(((/* implicit */int) var_3))));
                        var_26 = ((/* implicit */unsigned char) (~(var_6)));
                    }
                    for (signed char i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))));
                        arr_57 [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_3]))) + (var_5)));
                        var_28 = var_5;
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) 2047U))))));
                    }
                    for (long long int i_17 = 2; i_17 < 24; i_17 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) var_8);
                        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_17 + 1] [i_17] [i_17] [i_17] [i_17])) ? (arr_55 [i_17 - 2] [i_17] [i_17] [i_17] [i_17 - 2] [i_17]) : (arr_55 [i_17 - 2] [i_17 - 2] [i_17 - 1] [i_17] [(unsigned short)17] [i_17]))))));
                    }
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) -9223372036854775805LL)) || (((/* implicit */_Bool) (signed char)127))));
                    var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
                    var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_59 [i_13] [13U] [i_4] [i_13] [i_13] [i_4]))));
                }
                for (short i_18 = 1; i_18 < 22; i_18 += 3) 
                {
                    var_35 = ((/* implicit */signed char) (~(((var_6) + (var_6)))));
                    /* LoopSeq 3 */
                    for (short i_19 = 0; i_19 < 25; i_19 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned char) (+((~(3850285304956855949LL)))));
                        var_37 = ((/* implicit */unsigned int) (-((+(var_9)))));
                        arr_66 [i_3] [i_13] [i_18] [i_19] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_40 [i_18 + 2] [i_18 + 2] [i_18 + 2] [i_18 - 1]))));
                    }
                    for (unsigned long long int i_20 = 2; i_20 < 24; i_20 += 2) 
                    {
                        var_38 = ((/* implicit */long long int) max((var_38), (((arr_51 [i_18 + 1] [i_20] [i_18 - 1] [i_18 + 1] [i_18 - 1]) >> (((var_4) - (7310221878549877406ULL)))))));
                        arr_69 [i_13] [i_18] [i_13] [i_4] [i_3] [i_13] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_6)) : (8382108640379738372LL))));
                    }
                    for (signed char i_21 = 1; i_21 < 24; i_21 += 4) 
                    {
                        arr_72 [i_3] [i_3] [i_3] [i_13] [i_21] [i_21] [i_13] = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                        arr_73 [i_3] [i_13] [(unsigned char)17] [i_3] [i_3] = ((/* implicit */long long int) (+(var_5)));
                    }
                    var_39 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_10 [i_18 + 1])) : (1715591093592207221ULL)));
                }
                var_40 = ((/* implicit */unsigned long long int) (~(arr_70 [i_13] [i_4] [i_3])));
                var_41 = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
            }
            arr_74 [i_3] = ((-8382108640379738373LL) ^ (arr_49 [i_4] [i_4] [(unsigned char)3] [i_4]));
        }
    }
    var_42 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-75))));
}
