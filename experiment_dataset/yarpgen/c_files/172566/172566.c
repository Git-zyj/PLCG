/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-(52400 * 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [11] [i_0] = (arr_0 [3]);
                var_13 = (max(var_13, (((-(((arr_2 [i_1 + 2]) ? (arr_2 [i_0]) : (arr_2 [i_0]))))))));
            }
        }
    }
    var_14 -= var_3;
    var_15 = var_5;
    var_16 = (var_6 == -var_9);
    #pragma endscop
}
