/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_19 ^= (5824684117602666526 <= var_8);
                            var_20 = (max(var_20, (min(((((arr_3 [i_2]) & (max(var_6, 102))))), (max(var_12, (1 >= 2147483630)))))));
                            arr_12 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0] = var_1;
                        }
                    }
                }
                var_21 = (((arr_0 [i_1]) ? ((118 ? 0 : 0)) : (min(var_12, var_4))));
            }
        }
    }
    var_22 = (max(28672, ((((max(var_15, var_12))) ? (var_1 + var_6) : ((max(var_7, var_9)))))));
    var_23 = (var_16 != ((((min(var_9, var_12)) > (!var_13)))));
    #pragma endscop
}
