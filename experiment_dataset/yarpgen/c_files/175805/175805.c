/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max((((-8309903125121335045 ? 18446744073709551615 : -20164))), 20163);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = min(((-20164 ? var_4 : var_1)), ((638515983 >> (20163 - 20142))));
                    var_18 = (max(var_18, (((((-var_12 ? (~var_2) : ((4294967295 ? 2129454386404596750 : var_13)))) & ((min((((8309903125121335037 ? 2147483647 : var_9))), ((var_13 ? 3310125102 : 1))))))))));
                    arr_8 [i_1] [i_1] [i_2] = ((~(60 >= 4294967295)));
                }
            }
        }
    }
    #pragma endscop
}
