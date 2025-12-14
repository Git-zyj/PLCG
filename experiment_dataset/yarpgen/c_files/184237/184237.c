/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184237
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
                arr_7 [i_1] = ((var_3 <= (arr_6 [10])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_2, 1));
                            var_16 = (min(var_16, ((((((((((~(arr_9 [i_1] [10] [1])))) ? ((~(arr_13 [i_2]))) : (((var_0 >= (arr_0 [3] [i_3])))))) + 2147483647)) << (4294967295 - 4294967295))))));
                            var_17 = max(((min(-5626135864778912339, 17597))), 0);
                        }
                    }
                }
            }
        }
    }
    var_18 ^= ((var_8 ? var_12 : -1));
    var_19 += ((-var_11 % (max((min(var_14, -5626135864778912339)), (((98 ? var_9 : 1)))))));
    #pragma endscop
}
