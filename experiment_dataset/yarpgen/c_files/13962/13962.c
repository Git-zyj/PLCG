/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((min(var_5, var_8))))));
                var_17 = (((var_14 + (var_11 > 0))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] = 4310115175490502557;
                            arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] = ((var_10 ? ((-1 ? (-2147483647 - 1) : var_0)) : (((var_7 ? var_13 : (arr_7 [1] [i_1] [i_2] [i_3 - 2]))))));
                        }
                    }
                }
                var_18 -= (~(-32767 - 1));
            }
        }
    }
    var_19 -= (((((var_9 + 9223372036854775807) << (3143982226 - 3143982226))) / (((-((1150985070 ? 3143982250 : var_8)))))));
    #pragma endscop
}
