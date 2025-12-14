/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159518
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
    for (signed char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] [(short)12] |= ((/* implicit */unsigned char) (~(max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) (-(2127280834))))))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))) <= (arr_1 [i_0])));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (short)-19854))));
                        var_19 -= ((/* implicit */short) arr_9 [i_2] [i_3] [i_4]);
                    }
                } 
            } 
        } 
        var_20 |= ((/* implicit */_Bool) arr_7 [(signed char)11]);
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 1; i_7 < 17; i_7 += 1) 
                    {
                        var_21 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_12 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])) ? (arr_12 [i_7 + 2] [i_7 - 1] [i_7 + 2] [i_7 + 2]) : (arr_12 [i_7 - 1] [i_7 + 2] [i_7 + 1] [i_7 - 1]))), (((((/* implicit */_Bool) 592715410U)) ? (arr_12 [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_7 + 1]) : (arr_12 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 2])))));
                        var_22 = arr_13 [i_1] [i_5] [i_6] [12U];
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)32023))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) * (var_13))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */short) (~(((arr_23 [i_8] [i_5] [i_5] [i_5]) ? (((/* implicit */int) arr_23 [i_1] [i_1] [(signed char)8] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-42)) != (((/* implicit */int) ((unsigned short) var_10)))));
                        }
                        var_26 = ((/* implicit */int) max((((/* implicit */short) var_3)), (((short) (((_Bool)0) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        var_27 = ((/* implicit */int) var_14);
                        arr_31 [i_1] [i_6] [i_1] [i_1] = ((/* implicit */long long int) arr_28 [i_1] [i_5] [i_6] [i_1] [i_10]);
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((min((var_2), (((/* implicit */short) (unsigned char)223)))), (((/* implicit */short) arr_13 [i_1] [12ULL] [(unsigned short)0] [i_10])))))) | (((((/* implicit */long long int) ((unsigned int) arr_14 [(unsigned char)15] [i_1] [i_6] [i_10]))) + ((~(4530288197847688612LL)))))));
                        var_29 ^= ((/* implicit */unsigned char) arr_29 [(signed char)18]);
                        var_30 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_17 [i_1] [i_5] [i_1])) ? (((/* implicit */int) arr_26 [i_1] [i_10] [i_10] [i_10] [i_6])) : (((/* implicit */int) arr_26 [i_1] [i_5] [i_6] [i_10] [i_6]))))));
                    }
                    for (int i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        arr_35 [i_6] = ((/* implicit */_Bool) var_3);
                        arr_36 [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (signed char)-100)) ? (0) : (((/* implicit */int) (signed char)-111)))) : (((/* implicit */int) var_16))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_11]))) * (var_13)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        arr_39 [i_6] = arr_20 [i_6] [i_12];
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            arr_42 [i_6] [i_13] = var_2;
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_1] [i_6] [i_12] [i_13])) ? (arr_30 [11ULL] [i_5] [i_6] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                            var_32 = (~(((/* implicit */int) ((((/* implicit */int) arr_24 [i_1] [(signed char)18] [i_12] [i_13])) <= (-665512957)))));
                            arr_43 [i_12] [i_6] [i_6] [i_12] [i_13] = ((/* implicit */_Bool) var_0);
                            var_33 += ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_13] [i_5] [i_6] [i_12]))) : (((((/* implicit */_Bool) 9511856404275474798ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))) : (arr_18 [i_13] [i_5])))));
                        }
                    }
                    arr_44 [i_6] [i_5] [i_6] [i_1] = arr_37 [i_1] [i_5] [i_1] [i_6];
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned char) min((((unsigned long long int) -2097356891)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_34 [i_1])))))));
        arr_45 [15] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((arr_25 [i_1] [i_1] [i_1] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */long long int) var_3))))) ? (((/* implicit */unsigned long long int) arr_33 [(unsigned short)18] [i_1])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)203)) ? (1912763307) : (((/* implicit */int) arr_27 [(signed char)12] [i_1] [16ULL] [(_Bool)1] [i_1]))))) ? (12509528894514122623ULL) : (((/* implicit */unsigned long long int) max((arr_33 [(unsigned char)12] [(unsigned char)12]), (((/* implicit */unsigned int) arr_10 [i_1])))))))));
    }
    /* vectorizable */
    for (short i_14 = 0; i_14 < 19; i_14 += 1) /* same iter space */
    {
        arr_50 [i_14] [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)130)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_6))))) : ((+(arr_9 [i_14] [(signed char)7] [i_14])))));
        arr_51 [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_14]))));
    }
    var_35 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5207)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) && (((/* implicit */_Bool) max((2756247817353174722LL), (((/* implicit */long long int) (signed char)74))))))))));
}
