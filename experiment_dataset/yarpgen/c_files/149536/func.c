/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149536
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_3);
                    arr_8 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) var_10);
                }
                arr_9 [i_0] = ((/* implicit */unsigned long long int) var_7);
                arr_10 [i_0] [i_1] = ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_3);
    var_13 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 4 */
    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_13 [(unsigned char)9] [i_3] = ((/* implicit */long long int) var_8);
        arr_14 [i_3] = ((/* implicit */unsigned int) var_10);
        arr_15 [i_3] = ((/* implicit */short) var_11);
    }
    for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    {
                        arr_29 [i_5] [i_6] [i_6] [i_7] [i_7] [i_6] = ((/* implicit */unsigned short) var_11);
                        arr_30 [2LL] [2LL] [2LL] [i_5] = ((/* implicit */unsigned int) var_4);
                        arr_31 [i_4] [(unsigned char)5] [i_5] [i_4] = ((/* implicit */_Bool) var_9);
                        arr_32 [i_7] [i_7] [i_7] [i_5] = ((/* implicit */unsigned char) var_2);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 3) 
            {
                {
                    arr_38 [i_4] [i_4] [i_4] [(unsigned char)8] = ((/* implicit */unsigned int) var_2);
                    arr_39 [i_4] [(unsigned short)9] [i_4] = ((/* implicit */unsigned short) var_0);
                    arr_40 [i_8] [i_8] [i_4] = ((/* implicit */int) var_5);
                    arr_41 [i_9] [i_9] [i_9] [i_9] |= ((/* implicit */_Bool) var_6);
                }
            } 
        } 
        arr_42 [i_4] = ((/* implicit */unsigned long long int) var_11);
        arr_43 [i_4] [i_4] = ((/* implicit */long long int) var_10);
    }
    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
    {
        arr_47 [i_10] = ((/* implicit */short) var_2);
        arr_48 [i_10] = ((/* implicit */unsigned short) var_6);
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 19; i_11 += 3) 
    {
        arr_52 [i_11] = ((/* implicit */int) var_10);
        /* LoopNest 2 */
        for (short i_12 = 4; i_12 < 18; i_12 += 2) 
        {
            for (unsigned char i_13 = 1; i_13 < 18; i_13 += 3) 
            {
                {
                    arr_58 [i_11] [i_12] [i_11] = ((/* implicit */short) var_3);
                    arr_59 [i_12] |= ((/* implicit */signed char) var_11);
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 3; i_14 < 18; i_14 += 4) 
                    {
                        arr_64 [i_11] [i_11] [i_13] = ((/* implicit */signed char) var_9);
                        arr_65 [i_11] [i_12] [i_11] = var_4;
                        arr_66 [i_12] [i_11] = ((/* implicit */int) var_3);
                    }
                }
            } 
        } 
    }
    var_14 = ((/* implicit */signed char) var_0);
}
