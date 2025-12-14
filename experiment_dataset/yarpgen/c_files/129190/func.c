/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129190
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned int) var_4);
                            var_13 = ((/* implicit */unsigned short) ((unsigned int) ((signed char) arr_4 [i_0 - 1])));
                            arr_13 [i_2] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_0] [i_2] [6U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_2 + 2])) ^ (((/* implicit */int) var_3))))) ? ((~(arr_2 [i_0 - 1] [i_2 + 3] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                            var_14 = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */unsigned int) (short)-14064)), (var_2))));
                            var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_0] [i_1])) ? (((/* implicit */int) ((-508958682393947626LL) == (((/* implicit */long long int) 0U))))) : (min(((~(((/* implicit */int) arr_1 [i_5])))), ((-(((/* implicit */int) arr_3 [i_0 + 1] [i_0]))))))));
                        }
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_10))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_1] [i_3] [(unsigned short)6] [i_1] [12] [i_1])) ? (((/* implicit */int) arr_4 [19U])) : (((/* implicit */int) var_4))))), ((-(var_0))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_0 - 1] [1] [i_0] [i_1] [i_2 + 3] [i_2 + 4]))))))))));
                            var_18 = ((/* implicit */unsigned long long int) arr_11 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 2] [i_2 + 1]);
                            arr_22 [i_0] [i_2] [i_2] [i_3] [i_0 - 1] [i_2 + 3] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)508))))));
                        }
                        for (unsigned short i_7 = 2; i_7 < 18; i_7 += 1) 
                        {
                            arr_26 [i_0 - 1] [i_1] [i_2] [i_3] [i_7] = ((/* implicit */_Bool) var_0);
                            arr_27 [i_0 + 1] [i_2] [i_2] [i_0 + 1] [i_7 + 2] = ((/* implicit */unsigned short) var_8);
                            var_19 = ((/* implicit */unsigned int) var_4);
                            var_20 = ((/* implicit */short) ((int) var_6));
                        }
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_1] [i_2 + 2] [i_3])))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */short) ((var_8) ? (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_24 [(short)9] [i_0] [i_0] [i_0 - 1] [i_0 - 1])))), (((/* implicit */int) ((((/* implicit */unsigned int) -1827722549)) == (2228382759U)))))) : (((/* implicit */int) var_9))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_10 = 2; i_10 < 18; i_10 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) arr_3 [i_10 - 2] [i_0 - 1]);
                        arr_35 [i_0] [i_8] [i_0] [i_8] [i_8] [(unsigned short)15] = ((/* implicit */signed char) (short)629);
                    }
                    for (signed char i_11 = 2; i_11 < 18; i_11 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) min((var_24), (arr_24 [i_0 - 1] [i_8] [(unsigned short)10] [i_11 + 2] [(_Bool)1])));
                        var_25 = ((/* implicit */unsigned short) var_3);
                        var_26 = ((/* implicit */long long int) -1184399209);
                    }
                    /* vectorizable */
                    for (signed char i_12 = 2; i_12 < 18; i_12 += 1) /* same iter space */
                    {
                        var_27 = var_7;
                        arr_41 [i_8] = ((/* implicit */unsigned int) arr_21 [i_0 + 1] [i_8] [(_Bool)1] [i_8] [i_8] [19LL]);
                    }
                    /* vectorizable */
                    for (signed char i_13 = 2; i_13 < 18; i_13 += 1) /* same iter space */
                    {
                        arr_44 [i_8] = ((/* implicit */_Bool) ((arr_28 [i_0] [i_8] [i_13 - 1]) ? (((/* implicit */int) (unsigned char)128)) : (arr_31 [i_0 - 1] [i_0 - 1] [i_13 - 1])));
                        var_28 = ((/* implicit */unsigned int) arr_20 [i_0] [i_8] [i_8] [i_9] [i_9] [i_13]);
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_5 [i_13 - 2])) - (20595))))))));
                        var_30 = ((/* implicit */short) var_9);
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_10), (((/* implicit */short) arr_18 [(unsigned short)14] [i_8] [i_9] [(short)18] [i_9] [(signed char)12] [3U]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (_Bool)1)))) >> ((-(0U)))));
                        var_32 = ((/* implicit */_Bool) ((long long int) ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-10142))))));
                    }
                }
            } 
        } 
        var_33 = ((/* implicit */int) max((var_33), (min((((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0 - 1])), (var_6)))), ((~(((/* implicit */int) arr_29 [(unsigned short)12] [i_0]))))))));
    }
    var_34 = ((unsigned short) (signed char)-71);
    /* LoopSeq 1 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_35 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((285309050) - (285309042)))))) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_3))))) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((unsigned char) arr_47 [(unsigned char)2] [i_15])))));
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max(((unsigned short)65027), (((/* implicit */unsigned short) var_10)))), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))) ? (((((((/* implicit */int) (short)-14064)) + (2147483647))) >> (((3302501339U) - (3302501321U))))) : (65408)));
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 24; i_16 += 2) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned short i_18 = 0; i_18 < 24; i_18 += 1) 
                {
                    {
                        arr_61 [i_15] [i_15] [i_16] [(short)21] [i_18] [i_18] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((arr_51 [i_18]), (arr_51 [i_18])))), ((-(17U)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
                        {
                            var_37 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)0));
                            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) (!(((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_58 [i_16])))))))));
                        }
                        for (unsigned char i_20 = 0; i_20 < 24; i_20 += 2) /* same iter space */
                        {
                            arr_69 [i_18] [i_16] [i_20] = ((/* implicit */short) (_Bool)1);
                            var_39 += ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) & ((~(((/* implicit */int) arr_64 [i_15] [i_16] [i_17] [i_18] [i_20]))))));
                            arr_70 [19ULL] [i_16] [i_16] [i_18] [i_15] [i_15] = var_2;
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_21 = 3; i_21 < 23; i_21 += 3) 
        {
            for (int i_22 = 3; i_22 < 23; i_22 += 2) 
            {
                {
                    var_40 = ((/* implicit */short) min((((1827722544) >> (((((/* implicit */int) (short)25606)) - (25586))))), (((/* implicit */int) var_8))));
                    arr_75 [i_15] [(unsigned short)21] [i_22] = ((/* implicit */unsigned char) var_7);
                }
            } 
        } 
    }
    var_41 = var_1;
    var_42 ^= ((/* implicit */signed char) 15956306697686137768ULL);
}
