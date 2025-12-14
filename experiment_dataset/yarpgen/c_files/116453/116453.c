/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (((((((0 ? 115 : 31)))) ? ((17589765814129017373 ? -7458235682358695216 : 856978259580534243)) : var_4)))));
                    var_12 = var_10;
                }
            }
        }
    }
    var_13 = (((7458235682358695215 ? ((17589765814129017372 ? var_1 : 17589765814129017373)) : 6)));
    #pragma endscop
}
