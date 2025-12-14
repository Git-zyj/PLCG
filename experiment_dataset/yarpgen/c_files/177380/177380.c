/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (max(((894825402 | ((max(1, (arr_1 [i_0] [i_1 - 4])))))), (var_0 < var_12)));
                    var_21 |= var_8;
                }
            }
        }
    }
    var_22 = (min(var_22, var_14));

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_23 = (min(3757169243, 1));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                {
                    var_24 = (max(var_1, -30066));
                    var_25 ^= ((-30040 < ((min(58, (var_1 && 43))))));
                    var_26 -= var_7;
                }
            }
        }
        arr_14 [i_3] = (min(((1 ? 17158776713998431062 : 18446744073709551615)), (18446744073709551615 > 8)));
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            {
                arr_22 [i_6] = (-65 > 1);
                arr_23 [i_6] = var_13;
            }
        }
    }
    #pragma endscop
}
