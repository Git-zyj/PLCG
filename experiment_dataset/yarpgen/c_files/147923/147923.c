/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [8] [6] [6] [i_0 + 1] &= (((((12863397119040645615 ? 3026020695898820350 : 536870911))) ? var_2 : (max((arr_8 [i_0 - 2] [i_0 + 2] [i_0] [i_0]), ((~(arr_0 [i_0] [8])))))));
                        var_18 = ((!(arr_0 [i_0 + 3] [1])));
                    }
                    var_19 ^= (((((-(arr_2 [6] [i_0 - 3])))) ? 8646911284551352320 : (!var_15)));
                }
            }
        }
    }
    var_20 = (min((((var_14 ? var_17 : 536870928))), (~1658298105)));

    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        var_21 &= ((~(arr_11 [i_4 + 1])));
        var_22 += var_9;
        var_23 = (max(var_23, 0));
        arr_13 [i_4] = (min(var_10, -786431939));
        arr_14 [1] = ((~(arr_12 [i_4] [i_4])));
    }
    #pragma endscop
}
