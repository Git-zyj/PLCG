/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = arr_1 [i_0];
                var_12 = max(((491520 ? (arr_3 [10] [i_1]) : -731162768)), ((min(-217, -19893))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [12] [i_2] [i_2] [i_2] = ((1 ? (((max((min(-86, 19893)), (2048 != 14911225323658512024))))) : 6790874316903790393));
                            var_13 = (max(102, 14911225323658512048));
                            var_14 += (arr_0 [16]);
                        }
                    }
                }
            }
        }
    }
    var_15 ^= (((((((-3640676996107725162 ? 1 : 1)) | 1))) + ((min(45628, 2610081853)))));
    var_16 = (((min(63488, 19908))));
    var_17 += ((45642 ? 19901 : -97));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                var_18 ^= ((min(60, -13461)));
                arr_13 [i_5] &= -88;
                arr_14 [i_4] [i_5] [i_4] = (((arr_2 [i_4] [i_4] [9]) ? var_1 : ((min(2953449404478940757, -var_9)))));
            }
        }
    }
    #pragma endscop
}
