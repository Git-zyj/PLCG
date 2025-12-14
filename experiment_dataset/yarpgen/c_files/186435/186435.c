/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_3] [i_3] [i_3] [i_1] [i_0] = (4096 & -4096);
                            var_10 += (max(1, (((((arr_8 [i_0] [i_1] [i_0 + 1] [i_1]) / (arr_11 [i_0] [4] [i_0]))) <= var_7))));
                            var_11 |= ((+((((((arr_10 [i_3]) ? 4096 : (arr_4 [i_0]))) >= (!13086))))));
                        }
                    }
                }
                arr_13 [i_0 + 2] [i_0 + 2] = (!(((((52450 ? 32767 : 3884774296)) - (arr_3 [i_1] [i_0] [i_0])))));
                var_12 = (arr_3 [i_0 + 3] [8] [i_0]);
            }
        }
    }
    var_13 ^= (min(var_0, var_4));
    var_14 = (var_5 < var_1);
    #pragma endscop
}
