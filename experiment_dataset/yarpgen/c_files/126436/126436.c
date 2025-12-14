/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_14 *= (max(((var_4 ? ((7516192768 * (arr_4 [i_0 - 2] [i_1] [i_1 - 2]))) : 29815)), (((~(arr_0 [i_1 - 3] [i_1 + 1]))))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_7 [9] [9] [5] &= (!var_6);
                    var_15 = (arr_1 [i_0 - 1]);
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_16 = var_11;
                    var_17 -= ((!(((max(26, -1412558774))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                {
                    var_18 *= ((min(((var_6 ? 2054694570005067812 : 2054694570005067825), -var_5))));
                    arr_19 [i_4] [i_5] |= (max((min(-719356627, -1943461378)), 65529));
                    var_19 -= (max((arr_15 [i_4]), (((((arr_13 [i_4] [i_6]) <= (arr_13 [i_4 - 1] [i_4 - 1]))) ? (max(7516192774, (arr_13 [i_5] [i_5]))) : -2054694570005067810))));
                    var_20 = (max(var_20, (arr_13 [i_5] [i_4 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
