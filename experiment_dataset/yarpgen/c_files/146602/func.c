/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146602
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) var_7);
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 3; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) var_1);
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            var_16 ^= ((/* implicit */long long int) var_2);
                            var_17 = var_10;
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_10))));
                            var_19 *= ((/* implicit */int) var_10);
                        }
                        for (unsigned char i_5 = 1; i_5 < 10; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_9))));
                            arr_20 [i_1] [i_1] [i_3] [i_5] = ((/* implicit */int) var_0);
                        }
                        var_21 = ((/* implicit */long long int) var_13);
                        arr_21 [i_3 - 3] [i_3] [6LL] [6LL] [i_1] [i_0] |= ((/* implicit */long long int) var_7);
                    }
                } 
            } 
        } 
        var_22 ^= ((/* implicit */unsigned short) var_0);
        /* LoopSeq 1 */
        for (signed char i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            arr_24 [i_0] [i_0] = ((/* implicit */long long int) var_13);
            var_23 = var_0;
        }
    }
    var_24 += ((/* implicit */short) var_9);
}
