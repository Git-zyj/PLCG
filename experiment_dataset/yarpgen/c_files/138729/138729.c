/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_12 || ((min(var_6, var_1)))));
    var_16 = ((var_8 ? (((-810752956 || (((var_12 ? var_1 : var_2)))))) : (24602 == 810752971)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [6] = (max(((((((arr_11 [i_0] [6] [i_0] [i_3]) ? (arr_1 [i_0] [13]) : (arr_11 [i_0] [i_1] [i_2] [i_3]))) ^ (((arr_2 [i_0]) + (arr_7 [i_0] [i_1] [i_0])))))), ((24583 ? 3890001991497734829 : -4516340871396989867))));
                            var_17 = (min(810752945, -3890001991497734816));
                            arr_14 [i_0] [i_0] = (arr_4 [i_0] [i_0]);
                        }
                    }
                }
                arr_15 [i_0] [i_0] = arr_2 [i_0];
                arr_16 [i_0] [i_0] [i_1] = ((1 && (((4390088773921327189 - (-3890001991497734816 > 62))))));
                var_18 = min(((((min(-24602, 3890001991497734829))) ? (arr_11 [i_0] [i_0] [i_1] [10]) : (!-3890001991497734827))), (((arr_7 [i_0] [i_1] [i_0]) ? (arr_7 [i_0] [1] [i_0]) : 1)));
            }
        }
    }
    #pragma endscop
}
