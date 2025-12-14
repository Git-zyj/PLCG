/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_2));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = ((!((max(-1, 2147483647)))));
                var_14 *= arr_0 [i_0];
                var_15 = 11336737595613051166;
                var_16 *= (max(1, ((max((arr_5 [i_1]), (arr_4 [i_0] [i_0 - 2] [i_0]))))));
                var_17 = (249 / -1484094332);
            }
        }
    }
    var_18 = ((!(!var_1)));
    #pragma endscop
}
