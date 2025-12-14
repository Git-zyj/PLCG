/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(((max((max(var_2, var_4)), -var_4))), var_7)))));
    var_12 = ((-(((((max(var_5, var_7))) || ((min(var_6, var_7))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_13 = (max((0 >= 61868), (min(var_8, var_6))));
                            arr_10 [i_3] [8] [1] [i_3] &= (((var_1 && var_5) && ((!((min(var_7, var_3)))))));
                            var_14 = (min(var_14, ((min((max(var_9, var_9)), (var_6 > var_7))))));
                        }
                    }
                }
                var_15 = (max(var_15, ((max((((((var_3 << (var_0 - 4299750212873850657))) >> (var_7 - 2112501312813662287)))), (min(var_0, (max(var_1, var_2)))))))));
                var_16 = (((var_9 >= var_8) * (((var_1 + 9223372036854775807) >> (!var_6)))));
            }
        }
    }
    #pragma endscop
}
