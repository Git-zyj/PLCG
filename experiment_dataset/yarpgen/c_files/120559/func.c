/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120559
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
    var_11 ^= ((/* implicit */long long int) var_5);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_6))));
        var_13 = var_7;
        var_14 -= ((/* implicit */signed char) var_8);
        arr_4 [i_0] = ((/* implicit */signed char) var_3);
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */long long int) var_4);
        var_15 += ((/* implicit */unsigned short) var_5);
        var_16 = ((/* implicit */int) var_8);
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        arr_15 [i_1] [12] [i_2] [i_1] &= ((/* implicit */unsigned short) var_2);
                        var_17 = ((/* implicit */unsigned short) var_3);
                    }
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        arr_19 [i_2] [i_2] [i_3] [i_2] [i_5] = ((/* implicit */short) var_7);
                        var_18 |= ((/* implicit */short) var_9);
                        var_19 += ((/* implicit */long long int) var_4);
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            arr_23 [i_2] [i_5] [i_2] [i_2 + 1] [i_1] = ((/* implicit */unsigned long long int) var_4);
                            arr_24 [i_2] [i_2] [i_2] [i_2] [i_6] = var_7;
                        }
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            var_20 = var_1;
                            var_21 = ((/* implicit */unsigned short) var_2);
                        }
                    }
                    var_22 = ((/* implicit */long long int) var_4);
                    var_23 = ((/* implicit */long long int) var_4);
                }
            } 
        } 
    }
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */short) var_0);
        var_25 = ((/* implicit */long long int) var_4);
        arr_30 [i_8] &= ((/* implicit */short) var_2);
    }
    /* LoopNest 3 */
    for (unsigned short i_9 = 3; i_9 < 19; i_9 += 3) 
    {
        for (unsigned short i_10 = 2; i_10 < 20; i_10 += 1) 
        {
            for (long long int i_11 = 1; i_11 < 20; i_11 += 1) 
            {
                {
                    var_26 = ((/* implicit */_Bool) var_2);
                    arr_40 [i_9] [i_11] = ((/* implicit */signed char) var_9);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_1);
}
