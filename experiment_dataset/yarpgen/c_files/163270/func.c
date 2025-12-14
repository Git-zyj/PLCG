/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163270
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) arr_1 [i_0]);
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_0 [(unsigned short)0]))));
    }
    for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */long long int) arr_2 [i_1] [i_1])) : (arr_3 [i_1 + 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))))))));
            var_20 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) max((arr_4 [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) arr_5 [i_2] [i_1 - 1] [i_1]))))), (max((arr_2 [i_1] [i_1]), (arr_2 [i_1] [i_1]))))), (((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_1 + 1]))));
            var_21 += ((/* implicit */long long int) max((max((((unsigned int) 18446744073709551599ULL)), (((/* implicit */unsigned int) ((_Bool) (signed char)114))))), (((/* implicit */unsigned int) min((((/* implicit */short) (signed char)79)), ((short)32767))))));
            var_22 = ((/* implicit */signed char) arr_6 [i_1 + 1] [i_1 + 1]);
            arr_7 [i_1] [i_1] = ((/* implicit */signed char) min((max((0U), (((/* implicit */unsigned int) (signed char)126)))), (((/* implicit */unsigned int) arr_4 [i_1] [i_2] [i_1]))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_4 = 3; i_4 < 15; i_4 += 2) 
            {
                var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_4] [i_4 - 1] [i_4 - 3]))));
                var_24 = ((/* implicit */signed char) arr_6 [i_1] [i_1]);
                var_25 *= ((/* implicit */unsigned int) ((unsigned short) arr_5 [i_1 - 2] [i_1 - 2] [i_4 + 3]));
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    var_26 = ((/* implicit */short) arr_10 [i_1 + 2]);
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1] [i_4 - 3] [i_4])) ? (((/* implicit */int) arr_4 [i_1] [i_4 - 1] [i_4])) : (((/* implicit */int) arr_4 [i_1] [i_4 - 2] [(short)15]))));
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) arr_2 [(unsigned short)2] [i_3]))));
                    arr_17 [i_1] [i_3] [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1 - 2] [i_4 + 3] [i_1])) ? (((/* implicit */unsigned long long int) arr_16 [i_1] [i_3] [i_4])) : (arr_8 [i_1 + 1] [i_1])));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((unsigned int) arr_8 [i_1 + 2] [i_1 + 1])))));
                        var_30 = ((/* implicit */signed char) arr_2 [i_1] [i_1]);
                        var_31 = ((/* implicit */unsigned short) (+(arr_8 [i_4 - 2] [i_3])));
                        var_32 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1])))))));
                    }
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
                    {
                        var_33 ^= ((/* implicit */signed char) arr_25 [i_1] [i_3] [i_4 + 3] [i_6]);
                        var_34 = ((/* implicit */long long int) ((unsigned char) arr_14 [i_4 + 4] [i_4 + 4] [i_4 + 1] [i_4 - 1]));
                    }
                    for (long long int i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
                    {
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((signed char) arr_12 [i_1 - 1] [i_1] [4ULL])))));
                        var_36 = ((/* implicit */signed char) arr_28 [17U] [i_1] [i_1] [i_3] [i_4] [i_6] [(unsigned short)0]);
                    }
                    arr_29 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_26 [i_1] [i_4 - 1] [i_1]);
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_1] [i_4] [i_1])) ? (((/* implicit */int) arr_25 [i_1 - 1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_14 [i_1] [i_4] [15LL] [i_1]))));
                }
                for (signed char i_10 = 2; i_10 < 17; i_10 += 3) 
                {
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((unsigned short) ((long long int) arr_12 [i_1] [(short)2] [(short)16]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_34 [i_1 + 1] [i_1] [i_3] [(signed char)7] = ((/* implicit */unsigned int) arr_26 [i_3] [i_3] [i_10 + 1]);
                        var_39 ^= ((/* implicit */signed char) ((unsigned int) arr_5 [i_3] [i_4 + 4] [i_3]));
                        var_40 = ((/* implicit */_Bool) ((long long int) arr_23 [i_4 - 2] [i_10 - 2] [i_11] [(_Bool)1] [i_11]));
                        var_41 = ((/* implicit */short) arr_27 [i_1] [i_3] [i_4] [i_1] [i_10] [i_1 - 2] [i_1]);
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32756))))) ? (arr_2 [i_1] [i_4]) : (arr_27 [(short)1] [i_11] [i_4 + 3] [i_4] [i_1 + 2] [i_1] [i_1])));
                    }
                }
                var_43 = ((/* implicit */int) arr_3 [i_4 - 1]);
            }
            /* LoopSeq 3 */
            for (signed char i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                var_44 ^= ((/* implicit */unsigned long long int) (~(arr_24 [i_12] [i_1 + 1] [i_1 + 2])));
                arr_38 [i_1] [i_1] [i_12] = ((/* implicit */unsigned int) ((unsigned short) arr_11 [i_1 - 2] [i_1 - 2]));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_45 = ((/* implicit */unsigned long long int) arr_19 [i_1 - 2] [i_3] [i_3] [i_13]);
                /* LoopSeq 2 */
                for (unsigned int i_14 = 2; i_14 < 18; i_14 += 3) 
                {
                    arr_46 [i_1] [10U] &= ((/* implicit */unsigned int) arr_25 [i_1] [i_1] [(unsigned short)8] [i_1]);
                    arr_47 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) arr_42 [i_1]));
                    var_46 = ((/* implicit */unsigned int) arr_13 [i_1 + 1] [i_3] [i_14] [i_14 + 1]);
                    var_47 -= ((/* implicit */unsigned long long int) ((unsigned char) arr_31 [4U] [i_3] [i_1 - 2] [i_14 + 1]));
                    var_48 *= arr_27 [i_14] [i_13] [i_13] [i_3] [i_3] [i_3] [i_1];
                }
                for (unsigned char i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 19; i_16 += 4) 
                    {
                        var_49 = ((/* implicit */unsigned short) arr_41 [(signed char)15]);
                        var_50 = arr_30 [i_1];
                        var_51 ^= ((/* implicit */unsigned long long int) arr_49 [i_1 - 2] [i_1 - 2] [i_15] [i_16]);
                        var_52 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) 690085239U)))) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) (signed char)122))));
                    }
                    for (unsigned short i_17 = 1; i_17 < 16; i_17 += 2) 
                    {
                        var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3] [i_13] [i_13] [i_17])) ? (((/* implicit */int) arr_53 [i_1] [(unsigned short)10] [i_1] [i_1] [9U])) : (((/* implicit */int) arr_20 [i_1] [i_3] [i_13] [i_1] [3U] [i_17] [i_1]))))) ? (arr_27 [i_1] [i_1] [i_1 - 1] [i_1 - 2] [i_17] [i_17 - 1] [i_17 - 1]) : (arr_2 [i_1] [i_1])));
                        var_54 = ((/* implicit */unsigned short) ((unsigned int) ((_Bool) arr_25 [i_1] [i_3] [i_15] [i_15])));
                        var_55 = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_1 - 1] [i_17 + 2]))));
                        var_56 = ((/* implicit */unsigned int) arr_3 [i_1]);
                    }
                    var_57 = ((/* implicit */signed char) ((long long int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1]));
                    var_58 = ((/* implicit */long long int) ((unsigned char) arr_41 [i_1 + 2]));
                    var_59 *= ((((/* implicit */_Bool) arr_39 [i_1 + 1] [i_1 - 1] [i_13])) ? (arr_39 [i_1 + 1] [i_1 - 2] [i_1 + 1]) : (arr_39 [i_1 + 2] [i_1 - 2] [i_15]));
                    var_60 = ((((/* implicit */_Bool) arr_37 [i_1 + 1] [(signed char)6] [i_1 + 2] [i_1 + 1])) ? (arr_44 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_1] [(unsigned char)3] [i_13] [i_15]))));
                }
                /* LoopSeq 1 */
                for (signed char i_18 = 0; i_18 < 19; i_18 += 3) 
                {
                    var_61 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_1 + 2] [i_1 + 2] [(signed char)14]))));
                    arr_59 [i_1] = ((/* implicit */unsigned int) arr_36 [i_1] [i_1] [i_13] [i_1]);
                }
            }
            for (signed char i_19 = 0; i_19 < 19; i_19 += 4) 
            {
                var_62 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1 - 2] [i_1] [i_3] [i_3] [i_3] [i_3] [i_19])) ? (arr_11 [(signed char)16] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_3] [i_19] [i_19])))))) ? (arr_27 [i_1] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_3] [i_19] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_3] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                var_63 = ((/* implicit */signed char) arr_58 [i_1] [i_1] [i_1] [i_19]);
            }
            var_64 = ((/* implicit */unsigned short) ((signed char) arr_19 [i_1 - 1] [(signed char)13] [i_1 + 2] [i_1 - 1]));
            var_65 = ((/* implicit */unsigned int) arr_60 [i_3] [i_3] [i_3] [i_1 + 1]);
        }
        var_66 &= ((/* implicit */unsigned int) ((unsigned char) ((unsigned short) arr_51 [i_1 - 1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1])));
    }
    /* LoopNest 2 */
    for (unsigned int i_20 = 0; i_20 < 16; i_20 += 4) 
    {
        for (unsigned short i_21 = 0; i_21 < 16; i_21 += 3) 
        {
            {
                var_67 ^= ((/* implicit */signed char) max((max((arr_3 [i_20]), (arr_3 [i_21]))), (((/* implicit */long long int) ((signed char) arr_19 [i_20] [i_20] [i_20] [i_21])))));
                /* LoopSeq 1 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_68 -= ((/* implicit */signed char) arr_10 [i_20]);
                    var_69 = ((/* implicit */signed char) arr_24 [i_20] [i_21] [i_22]);
                    var_70 = arr_52 [i_20] [14U] [i_21] [i_21] [i_21] [i_20];
                    var_71 = ((/* implicit */signed char) min((arr_41 [i_20]), (arr_27 [i_20] [i_20] [i_20] [i_20] [i_21] [i_22] [i_22])));
                }
                arr_69 [i_20] [i_20] [i_21] |= min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((18446744073709551599ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))), (arr_62 [6U]));
            }
        } 
    } 
}
