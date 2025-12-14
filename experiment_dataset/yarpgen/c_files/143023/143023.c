/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = (((14 ? 1 : 87)));
                    var_16 = ((((((max((arr_0 [i_2]), (arr_0 [i_0]))) ^ (33 / var_1)))) ? ((var_9 ? var_4 : var_9)) : ((min(15, ((var_3 ? (arr_5 [i_0] [i_0] [i_0] [12]) : var_2)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = ((2147483647 - (max(((min(4, 1))), ((-235473922 ? 0 : 1))))));
                                arr_14 [i_0] [1] [1] [1] [i_3] [i_4] = (((((arr_1 [i_4 - 1] [i_4]) || (arr_1 [i_4 + 1] [i_4]))) && (((((((arr_13 [i_4] [i_3] [8] [i_2] [i_1] [i_0]) ? var_0 : 816323622054572757))) ? (!var_13) : var_6)))));
                                var_18 = ((((-3378857671722999056 ? -3378857671722999068 : 9)) / var_8));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_2] = (min(1, (((((min(1, 11859)))) - (2147483647 | var_3)))));
                }
            }
        }
    }
    var_19 = ((var_6 ? var_0 : (((((max(0, var_5))) ? var_8 : var_1)))));
    #pragma endscop
}
