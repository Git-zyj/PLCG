/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154567
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    var_17 *= ((/* implicit */signed char) min((((unsigned long long int) arr_1 [i_0] [i_2 + 2])), (((/* implicit */unsigned long long int) min((((_Bool) (unsigned short)47243)), ((!(((/* implicit */_Bool) (unsigned short)42457)))))))));
                    var_18 = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) ((signed char) arr_2 [i_1] [i_0]))))));
                    arr_11 [i_2 + 1] [(unsigned short)10] [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                    arr_12 [i_0] = ((/* implicit */signed char) (-(arr_9 [i_2 + 2] [i_2 + 4] [i_2 + 2] [i_2 + 4])));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) ((unsigned int) (unsigned char)137))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_20 &= ((/* implicit */_Bool) (+(max((max((((/* implicit */long long int) (unsigned char)132)), (arr_9 [i_0] [i_0] [i_4] [i_5]))), (((/* implicit */long long int) max((arr_7 [i_3] [i_3] [(short)1]), (((/* implicit */signed char) arr_15 [i_0] [i_4])))))))));
                        arr_21 [i_0] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_5 [i_0] [i_0]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) arr_23 [17ULL]);
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (unsigned char)103)), (arr_23 [i_6])))));
                    arr_31 [i_6] = ((/* implicit */unsigned long long int) ((signed char) (-(min((11910488108020102692ULL), (((/* implicit */unsigned long long int) arr_23 [i_6])))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((unsigned short) arr_25 [i_6] [i_6])))));
    }
    for (signed char i_9 = 2; i_9 < 8; i_9 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */int) arr_3 [i_9] [i_9]);
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (+((-(((/* implicit */int) arr_27 [i_9] [i_9 + 3] [i_9] [i_9 + 1])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    {
                        var_26 = ((/* implicit */short) (+(arr_2 [i_9 + 2] [i_9 - 2])));
                        var_27 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_39 [i_9 + 2] [i_9 - 2] [i_9 - 1] [i_9 + 2]))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) arr_18 [i_9] [i_10] [i_11] [i_12]))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (arr_26 [i_9 + 1] [i_10])));
        }
        var_30 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) ((unsigned short) (unsigned short)23072))))));
        arr_42 [i_9] = ((/* implicit */unsigned int) arr_37 [i_9] [i_9]);
    }
    for (signed char i_13 = 2; i_13 < 8; i_13 += 2) /* same iter space */
    {
        arr_46 [i_13] &= ((/* implicit */unsigned int) max((((/* implicit */int) arr_20 [i_13] [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13])), ((+(((/* implicit */int) min((arr_45 [i_13]), (arr_16 [i_13] [(unsigned short)11] [i_13]))))))));
        var_31 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_17 [i_13] [i_13 + 1] [i_13 - 1] [i_13]))))))));
    }
    var_32 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))));
    var_33 &= ((/* implicit */unsigned short) var_1);
    var_34 = ((/* implicit */signed char) ((unsigned char) (short)-22));
}
