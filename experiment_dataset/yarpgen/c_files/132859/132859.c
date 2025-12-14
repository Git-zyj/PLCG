/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((min(59562, var_12))))))));
    var_16 = ((var_10 ? var_14 : ((((var_7 == ((min(var_7, var_12)))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = var_3;
                    arr_9 [i_2] [i_1] [i_1] [i_1] &= -13617;
                }
            }
        }
    }
    var_18 = 17683085841934793586;
    #pragma endscop
}
