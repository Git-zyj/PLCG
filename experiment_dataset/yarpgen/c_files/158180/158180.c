/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [12] [i_2] [i_2] [i_2] = ((((((var_2 + var_8) ? (0 / 4294967295) : (min(var_1, var_4))))) ? ((1636255527 >> (255 - 230))) : (((!((min(var_0, var_3))))))));
                    var_11 ^= (((!var_0) >= ((((min(4294967270, 6441773972328624960)) <= (min(var_10, var_6)))))));
                }
            }
        }
    }
    var_12 = (max(var_12, (((var_10 ? ((min(var_7, ((min(var_2, var_9)))))) : (min(((min(var_8, var_0))), ((var_10 ? var_6 : var_8)))))))));
    var_13 = min(((min((min(var_7, var_4)), (var_5 | var_9)))), -var_6);
    var_14 = ((2585261584 ? 51144 : 118));
    #pragma endscop
}
