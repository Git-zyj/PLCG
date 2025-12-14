/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((min((var_0 - var_6), (0 - 0))), (min((var_9 | 4294967295), var_17))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = (min((((arr_3 [i_0] [i_0] [i_0]) ? ((var_11 ? 393216 : (arr_1 [i_0]))) : (((min(0, 255)))))), var_12));
                    var_21 = ((-85 < (~-1)));
                    var_22 = (min(var_22, (((arr_3 [0] [i_1 + 2] [i_2]) && (arr_4 [10] [i_1])))));
                    var_23 = 20;
                }
            }
        }
    }
    #pragma endscop
}
