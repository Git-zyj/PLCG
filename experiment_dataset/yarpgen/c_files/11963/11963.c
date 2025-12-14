/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 ^= ((((((arr_3 [i_0] [i_0]) ^ 1))) ? (((arr_1 [i_0] [i_1]) ^ (arr_1 [i_0] [i_0]))) : (((1 ? 179 : 1)))));
                var_21 = (min(((max(117, 1))), ((((max(1, 19))) ? 14 : (arr_2 [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_22 -= ((((((!(arr_3 [1] [12]))))) * (min(4049734033, 207))));
                    var_23 -= ((!((((arr_8 [i_2] [i_2 - 1]) ? 1 : (arr_8 [i_2] [i_2 - 1]))))));
                    var_24 = (min(var_24, ((((arr_6 [i_2]) ? (((((~55757) && -var_15)))) : var_4)))));
                    arr_13 [i_4] [i_3] [i_2] |= -2147483647;
                    arr_14 [i_2] [i_2 - 1] [i_2] = (((((min(1, 9750)))) - (((min(var_19, var_10)) - 1))));
                }
            }
        }
    }
    #pragma endscop
}
