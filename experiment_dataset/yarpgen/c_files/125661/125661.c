/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = (((!(arr_5 [i_1 + 1] [i_1] [i_2]))) ? (max((~var_13), (((16967546052988172288 ? (arr_2 [i_0]) : (arr_1 [i_2])))))) : ((((!var_6) << (((arr_7 [i_1 + 2] [i_1 + 1]) - 67))))));
                    var_16 = ((var_5 ? 1 : (max(1959082101, (arr_1 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
