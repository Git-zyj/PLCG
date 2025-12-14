/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, 2162973585812103637));
    var_17 -= var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (((((var_10 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? 2162973585812103637 : ((((var_0 && ((3758096384 == (arr_3 [i_0] [i_0])))))))));
                var_19 = (arr_2 [i_0]);
            }
        }
    }
    var_20 = ((~(12 >= 2162973585812103637)));
    #pragma endscop
}
