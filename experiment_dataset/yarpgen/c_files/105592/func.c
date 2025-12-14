/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105592
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
    var_11 = ((/* implicit */int) var_10);
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_5), (((/* implicit */int) ((var_4) > (((/* implicit */int) var_7)))))))) ? (min((((/* implicit */int) var_0)), ((-(696648968))))) : (min((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_7))))), (-1289432379))))))));
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (((~(((/* implicit */int) arr_5 [16] [i_0] [(unsigned short)6])))) < (((((arr_7 [i_2 - 2] [i_0] [(unsigned char)13] [i_0 - 4]) + (2147483647))) << (((((arr_7 [i_2 + 2] [13] [i_0 + 1] [i_0]) + (154538754))) - (1))))))))));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 20; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        {
                            arr_15 [(short)13] [i_1] [i_3 + 1] [21] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_1] [i_2] [i_4]))));
                            arr_16 [i_0] [i_0] [i_2 - 2] [i_1] [11] = (+(((((/* implicit */_Bool) ((-1545320576) | (1833582115)))) ? (arr_10 [i_0] [i_1] [1]) : (((/* implicit */int) ((((/* implicit */int) var_3)) < (var_6)))))));
                            var_14 = ((/* implicit */short) (~(((/* implicit */int) var_3))));
                            var_15 = ((((/* implicit */_Bool) arr_9 [i_2] [i_2 - 3] [i_2 + 3] [i_2 + 2])) ? ((-(((/* implicit */int) arr_6 [i_1])))) : (((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2 - 3] [i_2 + 3])) ? (var_9) : (((/* implicit */int) arr_6 [i_1])))));
                            var_16 = ((/* implicit */unsigned short) (unsigned char)96);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 2; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned char i_6 = 3; i_6 < 21; i_6 += 4) 
                    {
                        {
                            arr_23 [i_0] [i_1] [i_5] = ((/* implicit */unsigned short) min((min((arr_18 [i_1]), (((/* implicit */int) arr_19 [2] [i_1] [8] [5])))), (min((var_6), (((/* implicit */int) (unsigned char)124))))));
                            var_17 = ((/* implicit */int) min((var_17), (arr_18 [i_0])));
                            arr_24 [i_1] [i_1] = ((/* implicit */int) (unsigned short)65535);
                        }
                    } 
                } 
            }
            arr_25 [i_1] [i_1] [i_0 - 2] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)176))))) < (((/* implicit */int) ((-1545320576) <= (arr_2 [i_0] [i_0]))))));
            var_18 = ((((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_1] [i_1])), ((-(((/* implicit */int) arr_22 [i_0] [22] [4] [i_0] [i_0 - 4]))))))) ? (((((/* implicit */_Bool) (unsigned char)96)) ? ((+(arr_3 [i_0 - 1]))) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 3])))) : ((((-(arr_3 [i_1]))) - (((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 2] [i_0 - 3])))));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-(min((((arr_20 [i_0] [(unsigned char)0] [i_0 - 3]) + (-791858257))), (((((/* implicit */int) arr_8 [i_0] [i_1])) / (((/* implicit */int) (unsigned short)65532)))))))))));
            var_20 += ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0 - 3])) ? (arr_0 [i_1] [i_0]) : (arr_0 [i_0 + 1] [i_1]))));
        }
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            var_21 = ((/* implicit */short) min((arr_27 [i_0]), (((((/* implicit */_Bool) ((unsigned char) arr_18 [i_0]))) ? (((((((/* implicit */int) (short)-1136)) + (2147483647))) << (((((/* implicit */int) arr_19 [i_7] [i_7] [i_0] [i_7])) - (9243))))) : (((/* implicit */int) min(((short)-16730), (((/* implicit */short) (unsigned char)105)))))))));
            arr_28 [i_0] [i_7] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0 - 1])) && (((/* implicit */_Bool) (unsigned char)244)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14692)) ? (((/* implicit */int) (unsigned short)2048)) : (arr_3 [i_0 - 3]))))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                for (unsigned char i_9 = 3; i_9 < 22; i_9 += 3) 
                {
                    {
                        var_22 = ((/* implicit */int) max((var_22), (min((((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_0] [(unsigned short)20] [i_0] [i_8] [i_8] [i_0 - 1] [i_8])), (arr_22 [i_0] [i_7] [i_0 + 1] [i_9 - 2] [i_7])))), ((-(((/* implicit */int) arr_14 [i_9] [i_0] [(short)5] [i_9] [(unsigned short)4] [i_0 - 4] [i_9]))))))));
                        var_23 = ((/* implicit */short) (((~(((/* implicit */int) (unsigned short)6716)))) > (((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_9] [i_8] [i_0])) && (((/* implicit */_Bool) var_5))))) * (((/* implicit */int) var_2))))));
                    }
                } 
            } 
        }
        for (int i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_13 = 0; i_13 < 23; i_13 += 3) 
                        {
                            arr_44 [i_13] [i_13] [(unsigned char)13] [i_12] [i_11] [i_10] [i_13] = ((((/* implicit */_Bool) (short)-7373)) ? (((int) arr_26 [i_0 - 3])) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)14692))))) ? (((/* implicit */int) arr_39 [i_0] [i_10] [i_10] [i_0 - 4])) : (8388352))));
                            arr_45 [i_0] [i_10] [i_12] [10] [(unsigned char)0] &= ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_31 [i_0] [i_12])))), (((/* implicit */int) min((arr_34 [i_12]), (min((arr_19 [i_11] [i_10] [i_13] [i_12]), (((/* implicit */short) arr_6 [i_12])))))))));
                            arr_46 [i_13] = ((/* implicit */unsigned short) ((int) min((1605653322), ((-(((/* implicit */int) (short)-16716)))))));
                            var_24 = ((/* implicit */int) (short)0);
                        }
                        var_25 = ((/* implicit */unsigned short) -492417142);
                        /* LoopSeq 1 */
                        for (int i_14 = 0; i_14 < 23; i_14 += 4) 
                        {
                            arr_49 [i_0] [i_10] [i_11] [i_12] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((arr_10 [i_14] [i_11] [i_10]) == (1833884326))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (short)21848))))) : (-1855559679)));
                            arr_50 [i_0] [(unsigned short)0] [i_0] [3] [i_14] = ((/* implicit */short) arr_38 [i_0 - 3] [i_0 - 3] [i_0 + 1]);
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 23; i_15 += 2) 
            {
                for (unsigned char i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_17 = 0; i_17 < 23; i_17 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) (unsigned char)169);
                            var_27 += ((/* implicit */unsigned short) var_9);
                            var_28 = ((/* implicit */int) min((var_28), (min((((((((/* implicit */_Bool) arr_47 [16] [i_10])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) arr_22 [i_0] [19] [i_0] [19] [i_0])))) / (arr_3 [i_17]))), ((+(((/* implicit */int) arr_22 [i_0 - 4] [i_10] [17] [i_16] [i_17]))))))));
                        }
                        for (int i_18 = 0; i_18 < 23; i_18 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? ((+(((/* implicit */int) arr_47 [i_0 - 4] [i_0])))) : ((+(2090658280))))))));
                            var_30 += ((/* implicit */unsigned char) min((var_0), (arr_57 [i_18] [i_15])));
                            var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) arr_43 [0] [i_10] [i_15] [i_15] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)169)) || (((/* implicit */_Bool) (short)-14454))))))))));
                        }
                        var_32 = ((/* implicit */unsigned short) max((var_32), (var_3)));
                        arr_62 [i_0] [i_10] [i_15] [(short)17] = ((/* implicit */int) (unsigned char)0);
                    }
                } 
            } 
        }
        for (short i_19 = 2; i_19 < 21; i_19 += 4) 
        {
            /* LoopNest 2 */
            for (int i_20 = 2; i_20 < 22; i_20 += 4) 
            {
                for (int i_21 = 0; i_21 < 23; i_21 += 4) 
                {
                    {
                        var_33 = ((/* implicit */short) var_7);
                        arr_72 [i_0] [i_20] [i_20] [(short)7] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_19 - 1] [i_19] [i_20 - 2])) ? ((-(((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_19 [i_0 - 3] [i_20 - 2] [i_20 - 1] [i_20 - 2])), ((unsigned short)58819))))));
                        arr_73 [i_0] [i_19] [i_20] [i_21] [i_21] = ((/* implicit */short) ((unsigned short) (+(arr_64 [i_20 - 1] [i_0 + 1]))));
                    }
                } 
            } 
            arr_74 [i_19] [(unsigned short)5] [i_0] = ((/* implicit */unsigned char) (~((~(arr_53 [i_0] [i_0 - 3] [i_19 + 2] [22])))));
            arr_75 [i_0] = ((/* implicit */unsigned short) ((unsigned char) (short)8534));
        }
        var_34 = ((/* implicit */unsigned char) arr_37 [i_0] [i_0 + 1] [i_0 - 2]);
        arr_76 [(unsigned char)5] [i_0 - 3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2090658281))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_71 [(unsigned short)1] [4] [(unsigned short)1] [1] [i_0 - 1] [14]))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)58825))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (var_1)))));
        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) arr_66 [i_0 + 1] [i_0 - 4] [i_0]))));
    }
    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((-1508959889) < ((+(((/* implicit */int) (short)-17))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_7))))));
}
