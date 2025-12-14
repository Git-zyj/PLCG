/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((1057322097 - ((max(1, -109)))))), ((var_8 + (max(var_10, var_1))))));
    var_15 = ((var_11 ? ((max(var_13, 1))) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = var_0;
                var_16 = (arr_1 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 ^= (1 != 18446744073709551601);
                            var_18 ^= var_1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
