/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134674
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
    var_15 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */int) var_14))));
    var_16 = ((/* implicit */unsigned short) min((min((((/* implicit */int) (signed char)127)), (var_10))), (((/* implicit */int) var_12))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) arr_2 [i_2]);
                        var_18 = ((/* implicit */unsigned char) arr_4 [i_2]);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_7 [i_0] [i_0])), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 11; i_4 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_4 [i_4]);
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_0 [13U]))));
    }
    for (unsigned int i_5 = 1; i_5 < 22; i_5 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_6 = 2; i_6 < 22; i_6 += 1) 
        {
            arr_19 [i_5] [i_5] = min((((/* implicit */unsigned short) arr_17 [i_5] [i_5] [i_6 + 1])), (min((((/* implicit */unsigned short) arr_17 [i_5] [i_5] [i_6 - 2])), ((unsigned short)34681))));
            arr_20 [i_5] [(unsigned short)15] = min((arr_14 [i_5 - 1] [i_5 - 1]), (arr_14 [i_5 + 1] [i_5 - 1]));
        }
        for (unsigned char i_7 = 2; i_7 < 22; i_7 += 2) 
        {
            var_22 = ((/* implicit */short) max((((/* implicit */long long int) min((-2147483641), (((/* implicit */int) (unsigned short)63751))))), (min((max((arr_16 [i_5] [i_7]), (((/* implicit */long long int) 1590770169)))), (min((arr_23 [i_5] [i_7 - 2] [i_7 - 2]), (((/* implicit */long long int) arr_14 [i_5] [i_7]))))))));
            var_23 = ((/* implicit */signed char) min((max((arr_14 [i_7 - 1] [i_5 + 1]), (arr_14 [i_7 - 1] [i_5 + 1]))), (min((arr_14 [i_7 + 1] [i_5 - 1]), (arr_14 [i_7 - 2] [i_5 - 1])))));
        }
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned short) max((min((arr_16 [i_5] [i_5 - 1]), (((/* implicit */long long int) arr_21 [i_5 + 1])))), (((/* implicit */long long int) arr_21 [i_5 - 1]))));
        var_24 = ((/* implicit */int) max((min((arr_16 [i_5] [i_5 + 1]), (((/* implicit */long long int) arr_14 [i_5 - 1] [i_5 - 1])))), (min((arr_16 [i_5] [i_5 + 1]), (((/* implicit */long long int) (short)-32213))))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        arr_29 [i_8] [i_8] = ((/* implicit */long long int) (unsigned short)63741);
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            for (unsigned int i_10 = 1; i_10 < 9; i_10 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
                    {
                        arr_39 [i_11] [i_10 + 3] [i_9] [(_Bool)1] [i_8] [i_8] = ((/* implicit */long long int) arr_10 [(short)1] [i_10] [i_10] [i_10 + 3]);
                        arr_40 [i_8] [i_9] = ((/* implicit */unsigned char) arr_14 [i_8] [i_8]);
                        var_25 = ((/* implicit */_Bool) -450929768);
                        var_26 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) (unsigned short)65535);
                        arr_44 [i_8] [i_9] [i_10] [i_9] = ((/* implicit */short) arr_36 [i_10 + 2] [6] [i_10]);
                        arr_45 [i_12] = arr_36 [i_9] [i_9] [i_10];
                    }
                    arr_46 [i_9] [i_10] = ((/* implicit */int) arr_36 [i_10 + 4] [i_9] [1ULL]);
                    arr_47 [i_8] [i_8] [i_8] [i_9] = ((/* implicit */short) arr_0 [i_10 + 3]);
                }
            } 
        } 
    }
    var_28 = ((/* implicit */_Bool) (unsigned char)237);
}
