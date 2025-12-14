/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14216
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
    var_15 += ((/* implicit */unsigned char) var_10);
    var_16 = ((/* implicit */unsigned int) var_10);
    var_17 = var_1;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_8))));
        arr_2 [(signed char)2] [i_0] &= var_12;
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_3);
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) var_1);
            var_20 = ((/* implicit */unsigned int) var_4);
            var_21 = var_14;
        }
        /* vectorizable */
        for (unsigned int i_3 = 2; i_3 < 18; i_3 += 3) 
        {
            arr_11 [i_1] [i_1] [i_3 - 1] = ((/* implicit */unsigned char) var_11);
            var_22 = ((/* implicit */unsigned char) var_12);
            var_23 = ((/* implicit */unsigned char) var_14);
        }
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                for (unsigned int i_6 = 1; i_6 < 19; i_6 += 3) 
                {
                    {
                        var_24 = ((/* implicit */int) var_11);
                        var_25 = ((/* implicit */unsigned char) var_0);
                        /* LoopSeq 1 */
                        for (int i_7 = 1; i_7 < 19; i_7 += 3) 
                        {
                            arr_21 [i_1] [i_4] [i_5] [i_1] [i_7 - 1] = var_0;
                            var_26 = ((/* implicit */signed char) var_0);
                            var_27 = ((/* implicit */int) var_12);
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_10);
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_8 = 1; i_8 < 21; i_8 += 2) 
    {
        arr_25 [i_8] = ((/* implicit */unsigned char) var_9);
        var_28 = ((/* implicit */unsigned char) var_3);
    }
}
