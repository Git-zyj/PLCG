/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((var_15 ? -1 : (max(var_4, var_2))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = (!1);
                    var_20 = ((1694147959 ? ((((max(1, (arr_7 [i_1])))) ? (max(-9074023082360881435, 2600819345)) : 3)) : ((((2600819345 < (((arr_5 [i_0]) ? (arr_5 [i_0]) : 0))))))));
                }
            }
        }
    }
    #pragma endscop
}
