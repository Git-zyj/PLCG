/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115743
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
    var_14 = max(((unsigned char)24), (((/* implicit */unsigned char) (signed char)96)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]);
                    arr_10 [i_1] [i_1] [(short)14] = var_5;
                    arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (signed char)96))));
                }
            } 
        } 
        arr_12 [i_0] &= ((/* implicit */unsigned char) (signed char)-109);
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_0] [(short)20] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) var_4);
        var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) arr_7 [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99))) : ((-(var_11)))));
        /* LoopSeq 4 */
        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            arr_20 [i_3] = ((/* implicit */signed char) arr_4 [i_3] [i_4] [(unsigned short)13]);
            arr_21 [(short)5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_4]))));
        }
        for (long long int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) (signed char)-96);
            var_20 = ((/* implicit */unsigned char) (signed char)95);
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 9; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    for (int i_8 = 1; i_8 < 10; i_8 += 2) 
                    {
                        {
                            arr_30 [i_3] [i_3] [(short)6] [i_7] [i_8] &= ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)116))));
                            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) arr_19 [(unsigned char)3] [i_8 - 1] [i_6 - 1]))));
                            arr_31 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (signed char)95))));
                            arr_32 [i_7] [i_6] [i_7] [i_6] [i_6] [i_3] = (!(((/* implicit */_Bool) (signed char)-96)));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
        {
            arr_36 [i_3] [i_3] [i_9] = ((/* implicit */signed char) ((((arr_23 [i_9] [i_9] [i_3]) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (signed char)-123)))) + (((/* implicit */int) arr_3 [i_3] [i_3]))));
            arr_37 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)96)) ? (arr_8 [8] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            arr_41 [i_3] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-114)))) & (((/* implicit */int) arr_5 [i_3] [i_3] [i_3]))));
            arr_42 [6] [i_10] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-96))));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3])) && (((/* implicit */_Bool) (signed char)121))))) : (((((/* implicit */_Bool) arr_34 [i_3])) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (signed char)-120))))));
            var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
            arr_43 [i_10] [(short)8] &= ((/* implicit */short) (signed char)-122);
        }
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_11] [i_11] [i_11]))));
        arr_48 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((signed char) arr_47 [i_11]));
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 17; i_12 += 3) 
        {
            for (signed char i_13 = 0; i_13 < 17; i_13 += 1) 
            {
                {
                    arr_55 [i_11] [(signed char)14] [i_11] [i_11] = arr_6 [i_12] [i_12] [i_12];
                    arr_56 [i_11] [i_11] [i_11] &= (~((-(((/* implicit */int) (signed char)-95)))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 3; i_14 < 9; i_14 += 1) 
    {
        for (unsigned char i_15 = 0; i_15 < 10; i_15 += 3) 
        {
            {
                var_25 = ((/* implicit */unsigned char) (signed char)102);
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_50 [i_14 - 1])) & ((-(((/* implicit */int) arr_50 [i_14 - 3]))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) min(((signed char)-122), ((signed char)-97)));
}
