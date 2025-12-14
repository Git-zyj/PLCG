/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 += ((((((!(arr_0 [1]))))) ^ (max(-1292342181516439305, (arr_4 [i_0 - 1] [2])))));
                var_21 += ((!((min(-1292342181516439305, (arr_0 [0]))))));
            }
        }
    }
    var_22 = var_1;
    var_23 = 4294967295;
    var_24 *= (((((min(var_1, var_7)) & (max(var_1, var_4)))) << ((((((min(-121, (-127 - 1)))) ? var_17 : 1932568993182680534)) - 194))));
    #pragma endscop
}
