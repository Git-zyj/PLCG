/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += 1476986743;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [8] = (((5324929185362068141 >= var_6) == var_3));
                    var_18 = ((((min((arr_3 [i_0 + 1]), var_7))) ? ((238 ? 13121814888347483464 : 32357)) : (min(((3985788270 ? var_9 : var_2)), var_4))));
                }
            }
        }
    }
    #pragma endscop
}
