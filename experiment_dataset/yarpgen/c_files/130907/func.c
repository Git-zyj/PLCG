/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130907
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
    for (short i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0 - 2] = (-(((1871133567U) / (2423833710U))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_0))));
                    var_21 = ((/* implicit */long long int) arr_8 [i_0] [i_0 + 3] [i_0]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_3 = 3; i_3 < 9; i_3 += 4) /* same iter space */
        {
            arr_12 [i_0] = ((/* implicit */unsigned short) (+(arr_9 [4U] [i_3] [i_3])));
            arr_13 [i_0] [i_3] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0 + 2] [(unsigned char)6]);
            /* LoopSeq 2 */
            for (unsigned int i_4 = 3; i_4 < 11; i_4 += 1) /* same iter space */
            {
                arr_18 [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) max((2449469787U), (1446150607U))))));
                var_22 = ((/* implicit */unsigned long long int) arr_1 [i_0 + 3]);
            }
            for (unsigned int i_5 = 3; i_5 < 11; i_5 += 1) /* same iter space */
            {
                arr_21 [i_5] [i_3 + 2] [i_5] = ((/* implicit */long long int) min((min((((2423833728U) * (((/* implicit */unsigned int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned int) arr_5 [i_0] [i_5])))), (((/* implicit */unsigned int) arr_14 [i_0] [i_5]))));
                arr_22 [i_5] = ((/* implicit */short) arr_3 [i_0 - 4]);
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)28))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_5 + 2])) ? (arr_16 [i_0 - 1] [i_5] [i_5 - 3]) : (arr_16 [(short)6] [i_5] [i_5 + 2])))) : (arr_3 [i_0 - 1])))));
            }
            arr_23 [i_0] = ((/* implicit */unsigned long long int) max(((~(((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_3 - 3])) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0 - 1] [i_0])))))));
        }
        for (unsigned char i_6 = 3; i_6 < 9; i_6 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned short) arr_9 [i_0] [i_6 - 2] [i_6 + 3]);
            arr_27 [(short)7] [i_0 + 2] [i_6] = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) arr_15 [i_0] [i_6] [i_6])) ? (((/* implicit */int) (unsigned short)254)) : (((/* implicit */int) var_10)))), (((/* implicit */int) arr_5 [i_0 - 3] [i_6 + 4])))), (((/* implicit */int) arr_24 [i_0 + 1] [i_6]))));
        }
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        arr_31 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_19))))) ? ((+(((/* implicit */int) arr_11 [i_7] [i_7] [i_7])))) : (((/* implicit */int) var_3))));
        arr_32 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_7] [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_29 [i_7] [i_7])));
    }
    var_25 += ((/* implicit */short) (-(var_12)));
    /* LoopSeq 4 */
    for (short i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        arr_36 [i_8] [i_8] = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) arr_34 [i_8])), ((-(((/* implicit */int) var_1))))))), (((((1260406315U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_8] [i_8]))))) / ((-(1871133562U)))))));
        arr_37 [i_8] [i_8] = ((/* implicit */long long int) arr_33 [i_8]);
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_9]))) : (arr_33 [i_9])))) ? (((/* implicit */int) arr_35 [i_9] [i_9])) : (((((/* implicit */int) (short)1789)) / (-586949689))))))));
        var_27 -= ((/* implicit */unsigned long long int) arr_38 [i_9]);
        arr_40 [i_9] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_34 [i_9])) ? (17179852800LL) : (((/* implicit */long long int) ((/* implicit */int) (short)109)))))));
    }
    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
    {
        arr_43 [i_10] = ((/* implicit */unsigned int) arr_24 [i_10] [i_10]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_11 = 2; i_11 < 12; i_11 += 4) 
        {
            arr_46 [i_10] = ((/* implicit */short) arr_33 [i_11 + 1]);
            arr_47 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_11 - 1])) ? (arr_16 [i_10] [i_11] [i_11 - 2]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_10] [i_10] [i_11])))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) 
    {
        arr_50 [i_12] [(short)10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((arr_33 [i_12]) > (((/* implicit */unsigned long long int) arr_26 [i_12])))))));
        /* LoopSeq 1 */
        for (unsigned short i_13 = 3; i_13 < 10; i_13 += 2) 
        {
            var_28 = ((/* implicit */short) arr_52 [i_13] [i_13 - 1] [i_13 - 1]);
            /* LoopSeq 2 */
            for (unsigned short i_14 = 1; i_14 < 10; i_14 += 2) 
            {
                arr_55 [i_12] [i_12] [i_12] [i_13] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_9 [i_14 + 1] [i_13 - 1] [(short)7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_14]))) : (arr_9 [i_12] [i_12] [i_14 - 1])))));
                arr_56 [i_13] [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_13 - 3] [i_13 - 2] [i_13 - 1])) && (((/* implicit */_Bool) arr_25 [i_13 - 2] [i_13 - 3] [i_13 - 2]))));
            }
            for (unsigned long long int i_15 = 2; i_15 < 10; i_15 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_16 = 4; i_16 < 9; i_16 += 2) 
                {
                    for (unsigned char i_17 = 2; i_17 < 10; i_17 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) arr_64 [i_12] [i_13 - 3] [i_17])) / (((/* implicit */int) (unsigned short)37743))))))));
                            arr_66 [i_12] [i_12] [i_13] [i_17 + 1] = ((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_15 - 1] [i_15] [i_15 - 2])) / (((/* implicit */int) arr_25 [(unsigned char)12] [(unsigned char)12] [i_15 - 2]))));
                            var_30 = ((/* implicit */unsigned int) (((-(var_12))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_17 + 1] [i_17 - 2] [i_17 - 1])))));
                        }
                    } 
                } 
                arr_67 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_15 + 1] [i_13 - 3])) : (((/* implicit */int) arr_5 [i_15 + 1] [i_13 - 3]))));
            }
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_70 [i_18] [i_13] [i_13] [i_12] = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_30 [i_12]))))));
                arr_71 [i_13] [i_13] [i_18] = ((/* implicit */unsigned int) (-(-586949689)));
            }
        }
    }
}
