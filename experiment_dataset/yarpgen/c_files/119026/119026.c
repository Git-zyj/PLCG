/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = ((-(((arr_6 [i_0] [i_0]) ? var_0 : (arr_6 [i_0] [i_1 - 1])))));
                    var_17 = (max(var_17, (((~(((arr_9 [i_1 - 1] [5] [i_2 - 2]) ^ (arr_9 [i_1 - 1] [i_0] [i_2 - 2]))))))));
                    arr_10 [i_2 + 1] [i_2 - 1] [i_1] = (~1340668241);
                }
            }
        }
    }
    var_18 = ((var_8 ? var_2 : -1340668256));
    var_19 = var_13;
    #pragma endscop
}
