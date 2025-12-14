/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_8;
    var_17 = var_7;
    var_18 *= (((((58720256 ? 16647 : (!4236247039)))) && 4236247039));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 ^= ((!((((var_5 ^ 27978) ? (arr_3 [22] [22]) : 1071644672)))));
                var_20 = (min(((7323802086672463378 ? 126 : 63)), (arr_5 [i_1] [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_14 [20] &= ((((-(arr_7 [i_2 - 1]))) & (arr_7 [i_2 - 1])));
                    var_21 = (((arr_3 [i_2] [2]) ? var_0 : -3758096384));
                    var_22 = var_14;
                }
            }
        }
    }
    #pragma endscop
}
