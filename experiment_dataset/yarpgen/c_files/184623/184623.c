/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        var_20 ^= var_7;
                        arr_13 [i_3] [i_2] [i_1] [9] = ((~((max(1, 63)))));
                    }
                }
            }
        }
        var_21 = (min(var_21, 255));
        var_22 &= (((((144 ? var_11 : var_19))) & -3279281228058805797));
    }
    for (int i_4 = 4; i_4 < 15;i_4 += 1)
    {
        var_23 = max(1682872966820812633, -48);

        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            var_24 -= (max(-1, (min((var_6 / var_12), (max(1682872966820812643, var_7))))));
            arr_18 [i_4] [i_4] = (max(7812717116075741915, (max(9223372036854775807, 4294967295))));
            var_25 ^= ((254 ? 1 : 4294967295));
        }
        var_26 = ((((max(3178713383, -49))) && ((max(698544261, (~8142318032418052278))))));
    }
    var_27 = var_10;
    #pragma endscop
}
