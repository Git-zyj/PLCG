/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179442
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((max((min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0])))), (min((arr_0 [15LL]), (arr_3 [i_0] [i_1] [i_0]))))) - (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)0)), ((-(((/* implicit */int) (_Bool)1))))))))))));
            var_13 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [18]))))) | (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_0]))))))));
            /* LoopSeq 4 */
            for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                var_14 = ((/* implicit */unsigned short) ((unsigned long long int) arr_1 [i_0] [i_2]));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    arr_10 [i_3] [i_1] [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((arr_0 [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) min(((-(arr_6 [i_0]))), (arr_6 [i_3]))))));
                    var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2])))))) <= (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_8 [i_0] [i_1] [i_2] [i_3]))))))));
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    arr_13 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-((-(arr_3 [i_1] [i_1] [i_1])))));
                    arr_14 [i_0] [i_0] [i_2] [i_4] [7] [i_4] = ((/* implicit */unsigned char) (((~(arr_8 [i_1] [i_1] [i_1] [i_4]))) >> (((/* implicit */int) ((unsigned char) arr_8 [i_4] [i_1] [i_1] [(unsigned char)14])))));
                    arr_15 [i_4 - 2] [i_4 - 1] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_0 [i_2 - 1]))))));
                }
                var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_11 [i_0] [i_1] [i_0] [i_0]), (((unsigned char) arr_0 [i_0])))))));
                var_18 = ((/* implicit */long long int) (-((~(min((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_9 [i_0] [(unsigned char)2] [i_0] [i_0] [i_0] [i_0]))))))));
            }
            /* vectorizable */
            for (unsigned char i_5 = 3; i_5 < 18; i_5 += 2) 
            {
                arr_18 [i_5] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_12 [i_1] [i_1] [i_0] [i_1]))))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_17 [i_1] [i_5])))))))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0]))));
            }
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                    {
                        var_21 -= ((/* implicit */unsigned short) min(((~((-(arr_7 [i_0] [i_6] [i_7] [i_8]))))), (((/* implicit */unsigned long long int) min((-1910713637), (-951035977))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_9 [i_0] [i_1] [i_6] [i_6] [7] [8U]))) / (arr_9 [i_0] [i_1] [i_0] [i_0] [i_8] [(short)7])));
                        arr_27 [i_1] [i_1] [i_1] = ((long long int) min((min((arr_8 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_23 [(unsigned char)1])))), (((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_1])))));
                        var_23 = ((/* implicit */signed char) (+(min(((+(arr_22 [i_8] [i_7] [(unsigned char)4] [i_1] [i_0]))), (((/* implicit */unsigned long long int) ((_Bool) arr_12 [i_0] [i_0] [i_7] [i_8])))))));
                        var_24 *= ((/* implicit */unsigned long long int) min(((+(-1910713641))), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(_Bool)1]))))), ((-(((/* implicit */int) arr_19 [i_0] [i_6] [i_0] [i_0]))))))));
                    }
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) (~(arr_20 [i_6])));
                        arr_31 [i_0] [i_1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)-81)))));
                        var_26 = ((/* implicit */long long int) ((unsigned short) ((unsigned long long int) max((((/* implicit */long long int) -2147483643)), (9223372036854775807LL)))));
                        var_27 = ((/* implicit */short) min(((-((+(arr_29 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))), ((+((+(arr_2 [i_0])))))));
                    }
                    var_28 &= ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6]))))) % (min((arr_22 [i_7] [i_0] [i_0] [(unsigned short)7] [i_1]), (arr_22 [i_1] [i_6] [i_1] [i_1] [i_0])))))));
                    arr_32 [(signed char)0] [i_6] &= ((/* implicit */unsigned short) (-((-(((/* implicit */int) (!(arr_5 [(signed char)6] [i_7] [i_7]))))))));
                }
                for (unsigned int i_10 = 4; i_10 < 16; i_10 += 4) 
                {
                    arr_36 [(unsigned short)14] [i_1] [(signed char)18] [i_10] = ((/* implicit */signed char) arr_17 [i_0] [i_6]);
                    arr_37 [(_Bool)1] [i_6] [i_6] [(unsigned char)15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((~(arr_34 [i_10] [i_6] [i_1] [i_0]))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_0] [i_6] [i_1] [i_0]))))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 4; i_11 < 18; i_11 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_39 [i_6] [i_6] [i_6] [i_6] [i_6]))));
                        arr_41 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((max((min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_6] [i_10] [i_11] [i_0])), (arr_8 [i_0] [i_1] [i_1] [i_11]))), ((-(arr_34 [i_0] [i_6] [15U] [i_11 - 2]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_6 [i_0])))))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_44 [i_0] [i_1] [i_12] [i_1] [i_10] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (-(arr_21 [i_0] [i_1] [i_10] [(unsigned char)4])))), ((-(arr_8 [i_12] [i_0] [i_1] [i_0]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_11 [i_6] [i_6] [i_6] [i_6])))))))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (-((-(min((arr_38 [17] [(unsigned short)10] [1] [i_10] [i_12]), (((/* implicit */unsigned long long int) arr_2 [i_1])))))))))));
                        arr_45 [i_0] [i_1] [i_6] [i_10] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) arr_24 [i_0] [i_10] [1U] [i_10 - 1])) * ((-(arr_38 [19LL] [i_10 + 4] [i_6] [i_1] [i_0])))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_48 [i_0] [i_1] [(_Bool)1] [i_10 - 1] [i_13] = ((/* implicit */int) (((!(((_Bool) 1157408156U)))) && (((/* implicit */_Bool) arr_38 [i_0] [i_1] [i_6] [i_10] [i_13]))));
                        arr_49 [i_10] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) != (((/* implicit */int) (_Bool)1))))), (((unsigned long long int) arr_23 [(signed char)14]))))));
                    }
                    arr_50 [i_10 + 3] [i_1] [i_6] [i_0] [i_6] = ((/* implicit */int) ((signed char) ((unsigned long long int) arr_38 [i_10] [i_10] [i_6] [17ULL] [i_0])));
                    var_31 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))));
                }
                arr_51 [i_0] [i_1] [i_6] = ((/* implicit */int) (-(min(((+(arr_6 [i_6]))), (((/* implicit */unsigned long long int) (+(arr_26 [i_0] [i_6] [i_6] [i_1] [i_6] [i_6]))))))));
                arr_52 [(signed char)14] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) 1910713638)) | (9223372036854775807LL)));
            }
            for (int i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(arr_42 [i_14] [i_14] [i_14] [i_1] [i_0] [i_14] [(short)12])))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_28 [i_1] [i_1] [2] [15ULL]))))), ((~(arr_8 [i_0] [i_1] [i_14] [i_14]))))))))));
                var_33 = ((/* implicit */unsigned short) (-((+(-5132643378319779741LL)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (~((~(arr_54 [i_0] [i_1]))))))));
                    var_35 |= ((/* implicit */long long int) (-(((int) arr_42 [i_0] [i_0] [i_14] [i_14] [i_0] [i_0] [i_1]))));
                    /* LoopSeq 4 */
                    for (long long int i_16 = 2; i_16 < 18; i_16 += 1) 
                    {
                        var_36 = ((/* implicit */int) (-((~(arr_4 [i_15])))));
                        arr_61 [i_15] [i_14] [i_16] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_15] [i_15] [i_15] [i_15] [i_15] [(unsigned short)10]))))) | (((int) arr_34 [i_16] [i_14] [i_14] [i_0])));
                    }
                    for (short i_17 = 1; i_17 < 19; i_17 += 3) 
                    {
                        arr_65 [i_0] [i_15] [i_14] [i_15] [i_17] = ((/* implicit */signed char) ((long long int) (-(arr_59 [i_1] [i_1]))));
                        arr_66 [i_0] [i_1] [i_14] [i_14] [i_15] [i_17] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned short)21742))))));
                    }
                    for (unsigned char i_18 = 1; i_18 < 17; i_18 += 1) 
                    {
                        arr_69 [i_15] [13ULL] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65474))));
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) arr_23 [i_14]))))))));
                        arr_70 [i_15] = arr_47 [i_0] [i_1] [i_14] [i_14] [i_14];
                    }
                    for (unsigned long long int i_19 = 3; i_19 < 19; i_19 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) (((~(arr_24 [i_0] [i_0] [i_14] [i_15]))) ^ (((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15266)))))));
                        arr_74 [i_15] [i_15] [i_1] [i_1] [i_15] = ((/* implicit */_Bool) (-((-(arr_68 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        arr_75 [i_15] [i_0] [i_0] [i_14] [i_15] [i_15] [i_19] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) (signed char)124)) << (((((/* implicit */int) (short)-32747)) + (32761))))));
                        var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0]))))))))));
                        var_40 &= ((/* implicit */unsigned char) ((short) ((signed char) (unsigned short)76)));
                    }
                    var_41 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_7 [i_0] [i_1] [i_14] [i_15]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_14] [i_15]))))))));
                    arr_76 [i_0] [i_0] [i_0] [i_0] [i_15] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [(_Bool)1] [i_14] [i_14])))))));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                {
                    arr_81 [i_0] = ((/* implicit */long long int) (~((+(min((arr_26 [i_0] [i_1] [i_20] [i_20] [i_0] [i_1]), (((/* implicit */int) arr_72 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    arr_82 [i_14] [i_14] [i_20] [i_0] = ((/* implicit */_Bool) (~(min((min((((/* implicit */unsigned long long int) arr_1 [(signed char)17] [i_0])), (arr_68 [(_Bool)1] [(short)12] [(_Bool)1] [i_14] [i_20]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_33 [i_0] [i_1] [(unsigned char)10] [i_20])))))))));
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_22 = 0; i_22 < 20; i_22 += 3) 
                    {
                        arr_89 [i_0] [i_1] [i_21] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((arr_21 [i_0] [(short)3] [i_1] [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_21])) - (1))))))));
                        var_42 *= ((/* implicit */unsigned short) (~(arr_78 [i_0] [i_0])));
                    }
                    var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_40 [i_21] [i_1] [i_1] [i_0])), (arr_59 [i_0] [i_0])))), (min((arr_7 [i_0] [i_0] [i_14] [i_21]), (arr_8 [i_0] [i_0] [i_0] [i_0]))))) != ((~(((unsigned long long int) 2001912045U)))))))));
                    arr_90 [i_0] [i_14] [i_0] [i_0] [(unsigned char)18] [0ULL] &= ((/* implicit */unsigned long long int) arr_54 [i_0] [i_0]);
                    var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1910713633)) && (arr_56 [i_21] [i_1] [i_0])));
                }
            }
            var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_16 [i_1])), (arr_21 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) arr_47 [i_0] [i_0] [i_0] [i_1] [i_1]))))))))));
        }
        var_46 = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) ((unsigned int) arr_19 [i_0] [i_0] [i_0] [i_0]))));
    }
    var_47 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) var_9))))))));
}
