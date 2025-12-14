/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_18);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (((((258619976 ? (var_18 <= 39040) : -var_16))) ? (!var_9) : (((30 / 18446744073709551615) ? var_8 : 1158430105))));
                    arr_6 [i_0] [i_0] [i_0] = (((!var_0) ? (max(1, 280)) : (1158430105 <= -31)));
                    var_21 = (1173234390 < 0);
                }
            }
        }
    }
    #pragma endscop
}
