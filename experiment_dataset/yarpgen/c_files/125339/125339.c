/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 += (max(var_5, ((min((arr_1 [i_0]), 22342)))));
        var_20 = (min((arr_1 [i_0]), -8094845930404506225));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_12 [i_1] [3] [5] [i_3] = (max(-8094845930404506225, var_3));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_21 = (min(112, var_9));
                                var_22 = (((((((100 ? -8094845930404506232 : var_16))) && var_16)) ? (arr_3 [i_4 + 1] [i_2 - 1]) : (min((arr_4 [i_1]), -1533473778))));
                                arr_19 [2] [i_1] [i_4] [1] [2] = (((arr_16 [i_5] [i_5] [i_5 - 1] [i_5] [i_5]) | ((min((~var_10), var_2)))));
                                var_23 = (min(var_5, (~45)));
                            }
                        }
                    }
                    var_24 = (min(var_24, ((((min(58253, 8094845930404506231)) ^ 47222)))));
                    var_25 = (arr_14 [i_1] [i_2] [1]);
                }
            }
        }
    }
    #pragma endscop
}
