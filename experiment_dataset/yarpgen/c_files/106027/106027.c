/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (-512 || -20);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, (((-(arr_3 [0] [0]))))));
                            arr_11 [i_1] = (arr_3 [i_1] [i_1 + 1]);
                        }
                    }
                }
                var_14 ^= ((((max(var_1, var_6))) - (((-25 >= var_5) ? (((arr_1 [i_0]) >> var_5)) : (((((arr_2 [i_0]) && var_1))))))));
            }
        }
    }
    #pragma endscop
}
