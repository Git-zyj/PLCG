/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (max((!var_8), (var_7 >> 6)));
                arr_7 [i_0] &= 3311033324560949529;
                var_12 = (min(var_12, ((((((!((max(var_10, var_8)))))) > ((((15135710749148602092 << 1) <= 3311033324560949539))))))));
                var_13 = ((!(!2147483647)));
            }
        }
    }
    var_14 = ((var_11 - ((((!var_8) <= (!var_8))))));
    #pragma endscop
}
