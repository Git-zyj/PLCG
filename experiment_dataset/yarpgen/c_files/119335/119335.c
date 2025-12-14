/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -1582623790;
    var_13 = (((~0) ? var_2 : -8436346811358296671));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 += (arr_4 [0] [i_1]);
                            arr_10 [i_0] [i_0] [i_2 + 1] [i_0] = ((536608768 ? -2745 : 2744));
                        }
                    }
                }
                var_15 |= (((((min(2147483647, 2744)) <= -2744)) ? -var_9 : (((((arr_9 [4] [8] [11] [i_1 + 1] [i_0 + 2]) <= (arr_1 [i_0 - 1])))))));
                var_16 = (min((arr_4 [i_0 + 1] [i_0]), ((var_5 ? 2863183874 : (arr_4 [i_0] [i_0])))));
                var_17 = (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
