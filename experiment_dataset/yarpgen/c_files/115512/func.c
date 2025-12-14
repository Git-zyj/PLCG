/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115512
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) max((arr_1 [i_0]), (arr_1 [i_0])))), (max((arr_2 [i_0]), (arr_2 [i_0])))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        {
                            arr_17 [(_Bool)1] [i_4] [i_3] [i_2] [i_4] [i_0] = arr_15 [i_1] [i_3] [i_1] [i_1] [(_Bool)1];
                            var_14 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) min((arr_13 [i_0] [i_0] [i_1] [(short)5] [i_3] [i_4] [i_4]), (arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_3])))), (arr_14 [i_4] [9] [i_2] [(signed char)3] [i_0] [i_0])));
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */short) min((((/* implicit */int) min((arr_5 [i_0] [i_1] [i_0]), (((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_0] [i_0]))))), (min((((/* implicit */int) (_Bool)0)), (518481395)))));
            var_16 *= ((/* implicit */unsigned char) min((arr_16 [i_0] [i_0] [i_0] [i_1] [2]), (((/* implicit */unsigned long long int) arr_1 [i_1]))));
            /* LoopNest 2 */
            for (signed char i_5 = 4; i_5 < 12; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    {
                        var_17 = ((/* implicit */signed char) max((max((max((18446744073709551605ULL), (arr_16 [i_5] [(signed char)0] [i_5] [i_5] [i_5]))), (((/* implicit */unsigned long long int) arr_13 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 3] [i_5 + 1] [i_5 - 1])))), (((/* implicit */unsigned long long int) arr_14 [i_6] [(short)8] [i_5] [i_1] [i_1] [i_0]))));
                        arr_23 [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_0] [i_0]);
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_1] [i_1]))))));
        }
        for (int i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
        {
            arr_26 [i_7] = ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_19 = ((/* implicit */short) arr_12 [i_0]);
            var_20 *= ((/* implicit */short) arr_8 [i_0] [i_7] [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_9 = 1; i_9 < 12; i_9 += 3) 
            {
                for (short i_10 = 3; i_10 < 11; i_10 += 1) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_18 [i_9 - 1] [i_9 - 1] [i_9 - 1]))));
                        var_22 = ((/* implicit */int) min((var_22), (arr_12 [i_0])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                for (unsigned int i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) arr_40 [i_0] [i_0]);
                        var_24 = ((/* implicit */_Bool) min((var_24), (arr_0 [i_0])));
                        var_25 = ((/* implicit */unsigned char) arr_12 [i_11]);
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            arr_45 [i_0] [i_0] [i_8] [i_11] [i_0] [i_12] [i_13] = ((/* implicit */signed char) arr_16 [i_13] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13]);
                            var_26 &= ((/* implicit */unsigned int) arr_2 [i_0]);
                        }
                    }
                } 
            } 
            var_27 *= ((/* implicit */signed char) arr_39 [i_0] [i_8]);
            arr_46 [i_0] [i_8] [i_0] = ((/* implicit */signed char) arr_30 [i_0]);
        }
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_28 = ((/* implicit */int) arr_28 [i_14] [i_14]);
        var_29 += ((/* implicit */signed char) min((min(((unsigned char)3), ((unsigned char)18))), (((/* implicit */unsigned char) arr_11 [i_14] [i_14] [i_14] [i_14]))));
        arr_49 [i_14] = ((/* implicit */unsigned char) max((((/* implicit */short) min((arr_25 [i_14]), (arr_25 [i_14])))), (max((min((((/* implicit */short) arr_37 [i_14] [i_14])), (arr_36 [(short)6] [i_14] [i_14] [i_14]))), (max((((/* implicit */short) arr_2 [i_14])), (arr_27 [2LL] [i_14])))))));
    }
    var_30 = ((/* implicit */signed char) var_10);
    var_31 = ((/* implicit */unsigned char) max((var_5), (((/* implicit */unsigned int) var_0))));
}
