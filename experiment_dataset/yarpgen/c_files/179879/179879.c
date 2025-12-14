/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (min(var_12, (((((-6900613615594233708 ? -6900613615594233717 : 60))) ? (max(var_12, var_2)) : ((19842 ? var_12 : (-32767 - 1)))))));
                    var_16 = (min(var_16, -1));
                }
            }
        }
        var_17 = ((((max(((max((arr_5 [i_0] [i_0]), (arr_2 [i_0])))), (max(var_1, var_2))))) ? 197 : (((arr_5 [3] [i_0]) ? (min(19842, -6900613615594233717)) : 1071738758))));
    }
    var_18 = var_5;
    #pragma endscop
}
