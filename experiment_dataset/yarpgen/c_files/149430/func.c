/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149430
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_16 = arr_1 [i_0] [i_0];
        arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (3755373546U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) + (((539593740U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-32764)))))))), (max((((/* implicit */unsigned long long int) (unsigned char)79)), (6776127006166679925ULL)))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (long long int i_4 = 3; i_4 < 11; i_4 += 3) 
                {
                    {
                        arr_15 [i_1] [i_2] [i_3] [i_4 - 3] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_4] [i_4 - 3] [i_4 - 1] [i_4] [i_4 - 2]))));
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) -7346137257160981553LL)))))));
                    }
                } 
            } 
        } 
        arr_16 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [8U] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1]))))) : (var_13)));
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (long long int i_7 = 1; i_7 < 11; i_7 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            arr_29 [i_1] [i_5] [i_7] [i_7 - 1] [i_5] = ((/* implicit */short) ((arr_13 [i_1] [(signed char)4] [i_6] [i_6] [i_7 + 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1] [i_8] [i_6] [i_7])))));
                            arr_30 [i_1] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned long long int) (-(arr_5 [i_7 - 1])));
                        }
                        for (int i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            arr_35 [i_7] [i_7] [i_6] [i_6] [i_5] [i_1] [i_7] = var_3;
                            arr_36 [i_1] [i_1] [i_7] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 1297593923);
                            var_18 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 3047337369U)) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) (signed char)-19)))) + (2147483647))) >> (((((((/* implicit */_Bool) 15497231809028636099ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194))) : (var_15))) - (184U)))));
                            arr_37 [i_9] [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)64)) ? (-1297593924) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            var_19 ^= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5080)) & (((/* implicit */int) (short)-6001))));
                            var_20 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_1] [i_5] [i_6] [i_7] [i_10]))))) > (-1297593924));
                            var_21 = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)22));
                            arr_40 [7U] [i_5] [i_6] [i_7 - 1] [i_7] = ((/* implicit */long long int) arr_10 [i_7 + 1]);
                        }
                        arr_41 [i_7] [i_6] [i_5] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)60473))) | (arr_28 [i_7] [i_7 - 1] [i_7] [i_7 - 1] [i_7 + 1])));
                    }
                } 
            } 
        } 
        arr_42 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)0))));
    }
    /* vectorizable */
    for (short i_11 = 3; i_11 < 9; i_11 += 2) /* same iter space */
    {
        arr_46 [i_11] [i_11] = ((/* implicit */long long int) (~((+(11628232090223703817ULL)))));
        arr_47 [i_11 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)3394)) == (((/* implicit */int) arr_12 [i_11 - 2] [i_11 - 3]))));
    }
    /* vectorizable */
    for (short i_12 = 3; i_12 < 9; i_12 += 2) /* same iter space */
    {
        arr_50 [i_12] = ((short) 1297593917);
        arr_51 [i_12] [i_12] = ((/* implicit */_Bool) var_15);
        arr_52 [i_12] = ((/* implicit */unsigned int) -1297593924);
    }
}
