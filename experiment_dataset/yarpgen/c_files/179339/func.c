/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179339
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
    var_14 ^= ((/* implicit */long long int) (((-((-(2147483647))))) << (((((2147483631) >> (((-1393926762647422487LL) + (1393926762647422517LL))))) - (1)))));
    var_15 = ((((/* implicit */_Bool) -2147483637)) && (((/* implicit */_Bool) (unsigned short)29745)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                        {
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */long long int) max((arr_4 [i_1 - 3] [i_3 - 2] [(unsigned short)13]), (arr_1 [i_1 + 1] [i_3 - 2])))) + (((((((/* implicit */long long int) ((/* implicit */int) var_12))) - (-1864164536535875645LL))) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_0] [i_2])), (arr_6 [i_2] [14U] [i_2]))))))))))));
                            arr_12 [6LL] [8ULL] [i_2] [i_2] [(signed char)15] [i_3 - 1] [(unsigned char)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_2 [5]) & (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [1])) ? (arr_3 [i_2]) : (1356729518256295827LL))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)8] [(_Bool)1])) ? (arr_3 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_3 [(signed char)6])))) : (((unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_7 [(_Bool)1])), (arr_4 [i_0] [2U] [12LL])))) : (((((/* implicit */_Bool) var_13)) ? (var_7) : (arr_9 [13]))))))));
                            var_17 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) (unsigned short)29448)))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */int) min((arr_13 [i_3 + 1] [3] [(_Bool)1] [(signed char)13] [i_5] [(unsigned char)6]), (arr_13 [i_3 + 1] [4ULL] [i_2] [3] [6ULL] [i_2])))) > (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_8 [i_0] [(_Bool)1] [(_Bool)1] [12ULL] [10ULL] [9ULL])) / (((/* implicit */int) arr_8 [i_5] [7] [(unsigned short)7] [5ULL] [(unsigned short)3] [i_0])))))))))));
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) arr_14 [i_0] [i_1 + 2] [i_2] [i_1 - 2] [i_5])) ? (962072674304LL) : (((/* implicit */long long int) arr_0 [(signed char)12])))) >> (((arr_9 [i_0]) + (6621554291237563523LL))))), (max(((+(-962072674306LL))), (((/* implicit */long long int) (_Bool)1)))))))));
                        }
                        arr_15 [11] [i_1 - 3] [i_1 - 1] &= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (9203980578150891938LL)));
                        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [8] [2ULL])) ? (var_3) : (arr_3 [(signed char)4]))), (-1489036197319868826LL)))) >= ((+(((var_9) << (((((/* implicit */int) arr_13 [(signed char)12] [(_Bool)1] [(unsigned char)9] [(_Bool)1] [i_2] [i_0])) + (137)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            arr_18 [i_6] [i_3 - 1] [(signed char)3] [i_1 + 2] [3ULL] = ((/* implicit */signed char) var_4);
                            var_21 = ((/* implicit */unsigned char) ((signed char) var_12));
                            arr_19 [8ULL] [i_1 + 1] [i_1 - 3] [i_2] [15U] [i_6] = ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 2])) : (arr_4 [i_1 + 1] [i_1 + 2] [i_3 - 2]));
                        }
                    }
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_22 = (-(arr_22 [11U] [15U] [10ULL] [i_8]));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_5))));
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_27 [(unsigned short)14] [(unsigned short)8] [i_7] [i_9] [i_1 + 2] [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) -962072674309LL)) - (arr_16 [i_9] [i_7] [(_Bool)1] [i_1 + 1] [i_0])))));
                            var_24 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) arr_13 [i_7] [5LL] [(signed char)0] [i_7] [(_Bool)1] [i_7])))));
                            var_26 = ((/* implicit */long long int) ((signed char) (~(var_7))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_32 [(unsigned char)12] [10LL] [i_10] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((((/* implicit */int) (unsigned short)0)) | (1957733464))))));
                            var_27 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_5 [(signed char)8] [i_1 + 1])) : (((/* implicit */int) arr_5 [11ULL] [i_1 - 2])))));
                        }
                        var_28 ^= ((/* implicit */unsigned char) arr_2 [i_1 + 2]);
                        var_29 = ((/* implicit */unsigned char) max((var_29), (var_12)));
                        var_30 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_21 [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_1 + 1])), (var_12)))) ? (max((((/* implicit */long long int) arr_21 [i_1 - 1] [i_1 + 1] [i_1 - 3] [i_1 - 1])), (-1489036197319868832LL))) : (((/* implicit */long long int) max((2147483629), (((/* implicit */int) arr_21 [i_1 + 2] [i_1 - 2] [5LL] [i_1 - 3])))))));
                    }
                    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)3)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(arr_10 [0LL] [i_1 + 1] [(unsigned short)0] [i_1 - 1] [i_1 - 1])))), (min((((/* implicit */unsigned long long int) (~(var_13)))), (((unsigned long long int) arr_30 [(_Bool)1] [(signed char)2] [i_11]))))));
                        var_33 = ((/* implicit */long long int) min((var_33), (max((((((arr_10 [i_0] [i_1 - 2] [i_11] [13LL] [(unsigned char)0]) << (((((var_8) + (251712190))) - (6))))) | (((-9203980578150891938LL) / (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((/* implicit */long long int) (signed char)26))))));
                        arr_36 [1] [(signed char)14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_4 [i_1 - 3] [(unsigned char)0] [i_1 - 1]), (arr_4 [(signed char)4] [i_1 + 1] [i_1 + 1]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 1; i_12 < 15; i_12 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_13)) / (var_9))))))), ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [13LL] [4]))) == (var_13)))))))))));
                            var_35 = ((/* implicit */signed char) min((((/* implicit */int) (signed char)31)), (352114736)));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
    {
        for (long long int i_14 = 4; i_14 < 13; i_14 += 2) 
        {
            {
                var_36 = ((((_Bool) (unsigned short)64123)) ? (((int) ((((/* implicit */_Bool) arr_6 [i_14 + 2] [i_14 - 1] [i_14 - 1])) ? (((/* implicit */int) arr_5 [(_Bool)1] [(signed char)11])) : (((/* implicit */int) var_1))))) : ((-(-433320260))));
                var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_4 [i_14 - 4] [7] [(unsigned short)3]))))))));
            }
        } 
    } 
}
