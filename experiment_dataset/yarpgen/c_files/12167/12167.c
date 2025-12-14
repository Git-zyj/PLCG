/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((144115188075855872 ? -5586 : 16));
    var_14 = (((var_1 == var_5) * ((-(-156767106 ^ 160)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = ((((((max(156767105, 144115188075855872))) ? (~144115188075855872) : (~var_9))) ^ 87));
                    arr_6 [i_1] [18] [i_2 - 2] = arr_4 [i_1] [i_1] [i_2];
                    arr_7 [i_1] [i_1] [i_2] [i_1] = ((-(((((((arr_3 [i_1]) ? 156767114 : (arr_2 [i_0] [i_1])))) < (arr_4 [i_1] [i_2 - 3] [i_2 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
