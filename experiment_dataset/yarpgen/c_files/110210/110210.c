/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_16 = (min(var_16, var_2));
                var_17 = (((((min(var_2, (arr_2 [i_1]))) || -12))));
                arr_5 [i_1] = (arr_0 [3] [i_1]);
                var_18 = var_15;
                var_19 = (max(var_19, ((-76552108 ? 1852806042 : 4294967290))));
            }
        }
    }
    var_20 = (~var_2);
    var_21 = ((((max(var_14, var_8))) ? var_1 : (!var_3)));
    #pragma endscop
}
