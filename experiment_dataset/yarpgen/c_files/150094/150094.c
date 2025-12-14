/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 *= 3;
                    var_17 *= 870181105461634040;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                var_18 ^= -111;
                arr_13 [11] [5] = 17;
                arr_14 [i_3] [i_4] &= (-4 % 1);
            }
        }
    }
    var_19 = var_3;
    var_20 = var_3;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    arr_21 [i_7] [i_6] [i_5] = 0;
                    var_21 = (((var_4 | 28) + (1171677605037936796 + 4555752875823856114)));
                    var_22 = (((var_7 < var_0) | -var_5));
                }
            }
        }
    }
    #pragma endscop
}
