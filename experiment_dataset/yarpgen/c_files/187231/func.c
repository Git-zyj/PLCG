/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187231
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
    var_11 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_1)), (var_5)));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) var_9);
        var_13 = ((/* implicit */int) var_6);
    }
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) var_7)), (var_0))), (((/* implicit */unsigned int) var_7))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */long long int) var_8);
            var_15 = var_10;
            var_16 |= ((/* implicit */unsigned int) var_8);
            arr_10 [i_1 - 2] [i_1] [i_1] = ((/* implicit */int) var_10);
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
        {
            var_17 ^= ((/* implicit */int) var_4);
            arr_14 [i_1] [i_1] = ((/* implicit */_Bool) var_8);
            arr_15 [i_1] = ((/* implicit */int) var_3);
            var_18 ^= var_10;
        }
    }
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                arr_27 [i_4 + 1] [i_5] [i_4] [i_4] = ((/* implicit */signed char) var_7);
                arr_28 [i_4] = ((/* implicit */unsigned long long int) var_2);
            }
            for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                var_19 *= ((/* implicit */unsigned long long int) var_9);
                /* LoopNest 2 */
                for (unsigned short i_8 = 1; i_8 < 9; i_8 += 4) 
                {
                    for (int i_9 = 2; i_9 < 9; i_9 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) var_0);
                            var_21 = ((/* implicit */unsigned short) var_4);
                        }
                    } 
                } 
            }
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_3))));
            var_23 = ((/* implicit */unsigned long long int) var_1);
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_2))));
            var_25 ^= ((/* implicit */signed char) var_1);
        }
        for (unsigned short i_10 = 3; i_10 < 8; i_10 += 4) 
        {
            var_26 = ((/* implicit */unsigned long long int) var_6);
            var_27 = ((/* implicit */unsigned long long int) var_0);
        }
        var_28 |= var_6;
    }
    /* vectorizable */
    for (unsigned char i_11 = 3; i_11 < 8; i_11 += 3) 
    {
        var_29 = ((/* implicit */short) var_8);
        var_30 ^= ((/* implicit */signed char) var_2);
        arr_42 [i_11] [i_11] = ((/* implicit */unsigned int) var_9);
        var_31 = ((/* implicit */int) var_1);
    }
}
