/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += 1935288244519972629;
    var_21 *= var_14;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] = (-((var_12 ? 8651188877405897458 : var_15)));
                var_22 = ((!(((-var_7 ? ((-(arr_1 [i_0] [i_0 - 1]))) : (((~(arr_4 [i_0])))))))));
                var_23 = (min(var_23, 0));
                arr_7 [i_1] [i_1] = ((-24703 ? ((var_3 ? (((3136577340 ? var_7 : 24703))) : 1597040245844098804)) : (var_9 >= var_11)));
                var_24 -= (((arr_2 [21]) ? 29900 : (arr_2 [11])));
            }
        }
    }
    var_25 = (max(var_9, (!4294967295)));
    #pragma endscop
}
