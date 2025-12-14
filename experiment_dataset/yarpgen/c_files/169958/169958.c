/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, 8529489509379223008));
                    var_19 = (((var_3 || 8529489509379223016) ^ (arr_0 [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
