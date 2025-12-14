/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0 - 3] = ((65535 == ((((-(arr_0 [i_1])))))));
                var_16 &= ((((min((arr_0 [i_1 - 3]), (~0)))) * (min((((arr_1 [i_1]) % var_3)), (((var_3 ? (arr_0 [i_0]) : var_9)))))));
                var_17 &= var_3;
                arr_7 [i_0] [i_1 + 1] [23] = var_10;
            }
        }
    }
    var_18 &= var_15;
    var_19 = (max(var_19, (((var_12 || ((!((min(var_5, var_2))))))))));
    var_20 *= (0 != -1335152814);
    #pragma endscop
}
