/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146344
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
    var_19 = max((((/* implicit */unsigned long long int) var_18)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))) : (max((var_13), (((/* implicit */unsigned long long int) var_5)))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 13; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_20 += ((/* implicit */unsigned char) arr_9 [i_2 + 3] [i_2 - 1] [i_2 + 2] [i_2 + 4]);
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) < (2589114965U)))))))));
                            arr_14 [i_1] [i_4] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0]) : (((/* implicit */int) (short)15700))))));
                            var_22 = ((/* implicit */unsigned short) 1705852351U);
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-114)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0]))) : (arr_2 [i_0 + 1] [i_2 + 4])));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            arr_17 [i_0 - 1] [(_Bool)1] [i_1] [(_Bool)1] [6U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_1] [i_3 - 2] [i_5] [i_1] [i_5]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) ^ (arr_5 [i_3 - 1] [i_2 + 1]))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_5]))) ^ (arr_9 [i_5] [0LL] [i_5] [(unsigned char)14]))), (((/* implicit */unsigned long long int) ((var_9) ? (-1) : (arr_1 [i_0]))))))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((((/* implicit */int) ((arr_4 [i_0 + 1] [i_1] [4U]) >= (arr_4 [i_2] [i_2 + 4] [2LL])))), ((-(((/* implicit */int) (short)3606)))))))));
                        }
                        for (short i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-94))));
                            arr_20 [i_6 - 1] [i_1] [i_1] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) 2876622833U)) && (((/* implicit */_Bool) arr_9 [i_0 + 2] [i_2 + 3] [i_2 + 2] [i_3 - 1]))))));
                        }
                    }
                } 
            } 
        } 
        arr_21 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [(signed char)4] [i_0 + 2])) >= (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (short i_7 = 2; i_7 < 20; i_7 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((var_9) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7 + 1] [i_7])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (+(5137696414130475562LL)))))) : (((((arr_22 [i_7 - 1]) < (arr_22 [7]))) ? (max((((/* implicit */unsigned int) (unsigned char)33)), (arr_22 [i_7]))) : (var_11)))));
        var_27 -= ((/* implicit */_Bool) var_1);
        var_28 = ((/* implicit */long long int) (((+(arr_22 [i_7 + 1]))) >= (arr_22 [i_7])));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_10 = 1; i_10 < 23; i_10 += 1) 
            {
                arr_31 [i_10] [i_8] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)60206)) ? (((/* implicit */int) arr_29 [8LL] [i_10] [i_10 + 1] [i_9])) : (((/* implicit */int) arr_29 [i_8 + 3] [i_10] [i_9 + 1] [i_10]))));
                arr_32 [i_8] [i_9] [i_10] = ((/* implicit */signed char) var_13);
                /* LoopNest 2 */
                for (short i_11 = 1; i_11 < 22; i_11 += 1) 
                {
                    for (short i_12 = 2; i_12 < 23; i_12 += 1) 
                    {
                        {
                            var_29 += ((/* implicit */unsigned int) (~(arr_25 [i_10 - 1] [i_11 - 1])));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_8 + 2] [i_10] [i_11 + 2] [i_11 - 1])) ? (((((/* implicit */_Bool) arr_34 [i_9] [i_9] [i_9] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_8 - 3] [i_9] [i_8 - 3] [i_10]))) : (1705852352U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_11 + 2] [i_10 - 1] [i_9 + 1] [i_8 - 3])))));
                            arr_40 [i_9] [i_9] [i_10] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) ((unsigned short) (+(var_7))));
                            arr_41 [i_10] [i_10] [i_10 + 1] [i_11 + 1] [i_8 + 3] [i_11 + 1] [i_12 + 1] = ((/* implicit */signed char) ((14220816330202973082ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113)))));
                        }
                    } 
                } 
            }
            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (-(arr_35 [i_8] [i_8 + 1] [i_8 - 2] [(short)21]))))));
            arr_42 [i_8 + 2] = ((/* implicit */short) 2589114946U);
        }
        var_32 += ((arr_33 [i_8 - 1] [i_8 - 3] [i_8] [i_8 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8] [(signed char)7] [i_8]))) : (var_7));
    }
    for (int i_13 = 0; i_13 < 15; i_13 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_14 = 0; i_14 < 15; i_14 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_35 [i_13] [i_13] [i_14] [i_14]))))), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) * (8796093022207ULL)));
            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_13] [i_13] [i_14] [(unsigned short)16])) ? (((/* implicit */int) arr_29 [i_14] [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_29 [i_13] [i_13] [i_14] [19LL]))))) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) var_18)) : ((+(arr_39 [i_13] [i_13] [i_13] [i_14]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_9)) - (((/* implicit */int) (signed char)118)))))))));
        }
        for (short i_15 = 0; i_15 < 15; i_15 += 1) /* same iter space */
        {
            var_36 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (((long long int) arr_19 [(unsigned short)2] [(unsigned short)2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_13] [i_13] [i_13]))))) : ((~(var_16)))));
            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned short)8] [(unsigned short)8]))) ^ (-5137696414130475569LL)))))) ? (((/* implicit */int) arr_11 [i_13] [i_13] [i_15] [i_15] [(unsigned short)10] [i_15])) : (((/* implicit */int) var_4)))))));
            /* LoopSeq 1 */
            for (short i_16 = 0; i_16 < 15; i_16 += 1) 
            {
                arr_53 [i_13] [i_13] [i_13] = ((((/* implicit */_Bool) max((((long long int) arr_23 [i_13] [i_15])), (((/* implicit */long long int) arr_28 [i_13] [i_13] [i_13]))))) && (((/* implicit */_Bool) max((arr_38 [i_13] [i_13]), (((/* implicit */unsigned short) ((_Bool) arr_33 [i_13] [i_15] [i_13] [i_16])))))));
                var_38 += ((/* implicit */_Bool) (unsigned char)132);
            }
        }
        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) arr_11 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))));
    }
}
