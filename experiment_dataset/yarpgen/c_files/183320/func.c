/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183320
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
    var_14 = ((/* implicit */int) var_1);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = max((max((arr_1 [i_0]), (arr_1 [i_0]))), (arr_0 [i_0] [i_0]));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) var_9);
            var_15 = ((/* implicit */short) var_7);
        }
        var_16 = ((/* implicit */signed char) var_7);
        arr_8 [i_0] = ((/* implicit */long long int) var_12);
    }
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_12))));
            var_18 -= ((/* implicit */unsigned char) max((var_13), (arr_1 [i_2])));
            var_19 = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_2] [13]);
            arr_15 [i_2] [i_2] [(_Bool)1] = ((/* implicit */short) min((arr_11 [i_2] [i_3]), (((/* implicit */int) arr_5 [i_2] [(unsigned char)13] [(unsigned char)11]))));
        }
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            var_20 ^= arr_13 [(short)4] [4LL];
            arr_18 [(unsigned char)2] |= ((/* implicit */unsigned long long int) var_2);
        }
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            for (signed char i_6 = 2; i_6 < 13; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    {
                        arr_27 [i_2] [i_5] [i_6 - 2] [i_2] = ((/* implicit */short) min((arr_26 [i_2] [2ULL] [8LL]), (arr_22 [(signed char)12] [i_5] [i_6] [i_7])));
                        arr_28 [i_2] [i_5] [i_2] = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_7] [i_2]);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */long long int) arr_3 [i_2] [i_2] [i_2]);
    }
    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_6 [i_8] [i_8] [i_8]))));
        /* LoopSeq 1 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                for (unsigned char i_11 = 1; i_11 < 11; i_11 += 3) 
                {
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        {
                            arr_42 [i_8] [i_8] [i_10] = ((/* implicit */int) var_11);
                            var_23 = ((/* implicit */unsigned char) min((212693823230703361LL), (212693823230703361LL)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_13 = 2; i_13 < 13; i_13 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 0; i_15 < 14; i_15 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((((/* implicit */short) arr_49 [i_9 - 1] [i_13 - 2] [i_13 - 2] [9ULL] [i_13 - 1])), (arr_29 [i_9 - 1]))))));
                        arr_51 [i_8] [i_8] [i_15] [(_Bool)1] [(_Bool)1] = max((((/* implicit */long long int) arr_24 [(signed char)7] [i_13 - 2] [i_13 - 1] [i_9 - 1])), (var_4));
                        arr_52 [i_8] [i_9] [i_13] [i_14] [i_15] [(signed char)1] [i_14] = ((/* implicit */signed char) arr_31 [i_8]);
                        arr_53 [i_8] [i_9] [i_8] = ((/* implicit */unsigned char) var_7);
                    }
                    arr_54 [i_8] [i_9 - 1] [i_8] [(short)8] = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) arr_16 [i_9 - 1] [i_13 - 2])), (-212693823230703361LL))), (((/* implicit */long long int) (_Bool)1))));
                    arr_55 [i_8] = ((/* implicit */signed char) arr_31 [i_13 + 1]);
                    var_25 = ((/* implicit */unsigned char) arr_41 [i_9 - 1] [i_9] [i_8] [i_9 - 1] [(_Bool)1]);
                }
                arr_56 [i_8] [i_9] [(short)7] [(unsigned char)10] = ((/* implicit */unsigned char) arr_32 [i_8] [i_9]);
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_48 [i_8] [i_9] [(unsigned char)1] [i_8]))));
            }
        }
    }
    for (unsigned char i_16 = 2; i_16 < 24; i_16 += 4) 
    {
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_7))));
        var_28 = ((/* implicit */_Bool) arr_58 [i_16]);
    }
    var_29 |= ((/* implicit */short) var_0);
}
