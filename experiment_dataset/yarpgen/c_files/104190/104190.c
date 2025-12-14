/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_15 = max(-92687262971268665, -3462399155586409019);
                    var_16 = (((arr_6 [i_0 - 2] [i_0 - 2] [i_1 + 1]) || (arr_9 [i_0 + 2])));
                    var_17 = arr_1 [i_1];
                    var_18 = var_12;
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_19 = arr_8 [i_3] [i_3] [i_3] [i_3];
                    arr_12 [i_0] [i_1] [5] [i_3] = (max(((!(arr_0 [i_0 + 1]))), (18 != var_13)));
                    var_20 = (arr_0 [i_0]);
                }
                arr_13 [i_0] [i_0] = arr_4 [i_1 + 1];
            }
        }
    }
    var_21 = ((((9187343239835811840 ? var_5 : var_10))) + var_14);
    #pragma endscop
}
