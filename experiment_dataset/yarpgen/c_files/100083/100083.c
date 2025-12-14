/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_13 |= (((-32767 - 1) ? ((min((arr_4 [8]), (arr_4 [8])))) : (arr_4 [0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_1 - 1] [i_1] [i_2] [i_3] [i_1] [i_1] = (min((min((arr_1 [i_0] [i_3]), (((arr_4 [i_1]) ? var_12 : (arr_0 [i_1] [i_2]))))), (((((var_10 - (arr_6 [i_2])))) ? 223 : (max(var_2, var_5))))));
                            var_14 = (max(((var_3 / (arr_6 [i_1 + 2]))), ((min((arr_6 [i_1 - 1]), (arr_0 [i_1 + 1] [i_1 - 1]))))));
                            var_15 = (var_3 + var_1);
                        }
                    }
                }
                arr_11 [i_1] [i_1] [i_0] = (((var_8 <= var_5) >= (32767 > var_11)));
            }
        }
    }
    var_16 = (max(var_16, -var_6));
    #pragma endscop
}
