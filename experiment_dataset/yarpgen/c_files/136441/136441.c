/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_9 ? var_6 : var_14)) * var_10)));
    var_18 += var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (arr_13 [i_0] [i_0] [i_2] [i_0] [i_3] [12])));
                                var_20 = (max(var_20, (arr_9 [i_0 - 1] [i_0 - 1])));
                            }
                        }
                    }
                }
                var_21 = (453884971071034936 / 1073741823);
                var_22 = ((max(((2271417036415055390 ? (arr_0 [i_0]) : 1073741823)), (((~(arr_8 [i_0] [i_0] [8] [i_1 - 3])))))));
            }
        }
    }
    #pragma endscop
}
