/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143714
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) % (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), (((/* implicit */int) (!(((/* implicit */_Bool) -1387927066)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 3; i_4 < 11; i_4 += 4) 
                            {
                                var_12 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */int) min((arr_5 [i_4]), (((/* implicit */short) var_5))))) : (((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 1] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) max((arr_0 [i_4]), (arr_7 [i_0] [i_1] [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0]))))) : (max((((/* implicit */unsigned long long int) var_0)), (arr_6 [i_0] [i_0] [i_0])))))));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)7576)), (min((var_2), (14621617553824028488ULL)))))) ? (((/* implicit */int) arr_12 [i_2] [i_3] [i_3] [i_3])) : ((+(((/* implicit */int) (short)-18175))))));
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] [i_3] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)65535))));
                            }
                            arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_2 - 1]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 1; i_5 < 22; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_6 = 1; i_6 < 22; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_27 [i_8] [i_6 + 1] [i_6] [i_6] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) 2580508852U)) ? (arr_17 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5 + 2] [i_6 - 1])))));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_6] [i_6 - 1] [i_6] [i_6 + 2])) ? (((/* implicit */int) arr_21 [i_6] [i_6] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_21 [i_6] [i_6] [i_6] [i_6 - 1]))));
                            arr_31 [i_8] [i_6 + 1] [i_8] = ((/* implicit */unsigned char) var_5);
                            arr_32 [i_5] [i_5] [i_5] [i_8] [i_9] [i_9] [i_5] = ((/* implicit */_Bool) var_5);
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            arr_36 [i_5 + 1] [i_6] [i_8] [i_8] [i_10] = ((/* implicit */signed char) ((short) arr_23 [i_6] [i_7 - 1] [i_7 - 1] [i_6]));
                            arr_37 [i_7 + 2] [i_8] [i_7] [i_8] [i_7 + 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)3))));
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_33 [i_5 + 1] [i_5 + 1] [i_7] [i_7] [i_6] [i_10] [i_6]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (arr_17 [i_7]))))) : (((((/* implicit */_Bool) arr_21 [i_8] [i_7 + 2] [i_6 - 1] [i_5])) ? (arr_18 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_40 [i_5] [i_11] = ((/* implicit */int) var_0);
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                for (unsigned short i_13 = 3; i_13 < 23; i_13 += 3) 
                {
                    {
                        arr_47 [i_11] [i_11] = ((/* implicit */signed char) arr_46 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]);
                        /* LoopSeq 2 */
                        for (signed char i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            arr_50 [i_14] [i_14] [i_11] [i_11] [i_11] [i_5] = (+(((/* implicit */int) arr_34 [i_5] [i_11] [i_12])));
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(var_1))))));
                            arr_51 [i_11] [i_11] [i_13] [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_5 + 2] [i_11] [i_13 - 1] [i_11])) ? (66977792U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) arr_23 [i_13 - 1] [i_13 + 1] [i_13 - 3] [i_5 - 1]))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 4) 
                        {
                            var_17 = ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) var_10)));
                            arr_55 [i_13 - 1] [i_13] [i_11] [i_13] [i_13] [i_13] [i_13 - 1] = ((/* implicit */unsigned short) ((short) arr_16 [i_5 + 2]));
                            arr_56 [i_12] [i_11] [i_12] = ((/* implicit */int) ((arr_39 [i_5 - 1] [i_12] [i_15]) < (((/* implicit */unsigned int) (+(((/* implicit */int) arr_53 [i_15] [i_13] [i_11] [i_11] [i_5])))))));
                            var_18 = ((((/* implicit */int) (signed char)63)) >> (((18446744073709551615ULL) - (18446744073709551605ULL))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (unsigned short i_17 = 0; i_17 < 24; i_17 += 3) 
                {
                    {
                        var_19 = ((/* implicit */long long int) (((!(var_9))) && (((/* implicit */_Bool) arr_20 [i_5 + 1]))));
                        arr_61 [i_5 + 2] [i_5 + 2] [i_11] [i_5 + 2] [i_5] = ((/* implicit */int) arr_58 [i_5] [i_16] [i_17]);
                    }
                } 
            } 
            arr_62 [i_5] [(signed char)0] &= ((arr_52 [i_11] [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_5 + 1]) && (arr_52 [i_11] [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_5 + 1]));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_5] [i_11] [i_11] [i_11])) ? (((/* implicit */int) arr_26 [i_5] [i_5] [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) (unsigned short)53092))));
        }
    }
    /* LoopNest 3 */
    for (unsigned short i_18 = 1; i_18 < 21; i_18 += 2) 
    {
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_21 = 2; i_21 < 20; i_21 += 1) 
                    {
                        for (int i_22 = 0; i_22 < 22; i_22 += 4) 
                        {
                            {
                                arr_75 [i_18] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned int) (signed char)-2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (short)1)))))) : (var_2))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)18903))))), (arr_26 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]))))));
                                arr_76 [i_18] [i_18] [i_20 + 1] [i_18] [i_18] [i_18] = ((((/* implicit */int) (unsigned short)10459)) & (((/* implicit */int) (signed char)59)));
                                var_21 = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))))), (max((((/* implicit */unsigned short) (unsigned char)7)), (arr_26 [i_18] [i_18 + 1] [i_18 + 1] [i_20 + 1] [i_20 + 1] [i_20])))));
                            }
                        } 
                    } 
                    arr_77 [i_18] [2LL] [i_20] &= ((/* implicit */unsigned long long int) arr_26 [i_19 - 1] [i_19 - 1] [i_20 + 1] [i_18] [i_19 - 1] [i_18 + 1]);
                    arr_78 [i_18] [i_18] [i_18] = (short)(-32767 - 1);
                    arr_79 [i_18] [i_18] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_68 [i_18] [i_19] [i_20 + 1])), (max((((unsigned long long int) arr_48 [i_18] [i_19] [i_19] [i_18])), (((/* implicit */unsigned long long int) arr_73 [i_19 - 1] [i_19 - 1]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) var_5)), (max((var_2), (((/* implicit */unsigned long long int) var_9)))))), (((((/* implicit */unsigned long long int) var_10)) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (5ULL)))))));
}
