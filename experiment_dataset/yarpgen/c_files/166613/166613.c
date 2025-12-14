/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -20;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    arr_7 [i_0] [2] &= max(var_9, ((-var_0 ? var_6 : (arr_1 [i_1] [i_1]))));
                    var_16 = (-2147483647 - 1);
                    var_17 = (max(var_17, (((+(((-2147483647 - 1) ^ 1373702119)))))));
                }
                var_18 += (max(-2147483647, (arr_3 [i_1])));
                var_19 *= var_6;
            }
        }
    }
    var_20 = var_8;
    var_21 = (((((8 ? var_14 : -2147483647)))) ? var_11 : (((var_3 && (((594873220 ? var_5 : 3608285360)))))));
    #pragma endscop
}
