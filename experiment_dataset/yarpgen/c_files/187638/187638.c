/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_3));
    var_13 &= ((((((-6047985821693495681 ? 101 : var_9))) ? (!var_10) : var_1)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 -= (arr_2 [i_2]);
                    var_15 = (-6047985821693495682 * 1);
                    arr_11 [i_2] [i_1] [i_1] [i_2] |= (((((125 < (((-6047985821693495699 + 9223372036854775807) << (7 - 7)))))) + (((1 || (((16659 << (((arr_8 [i_2] [i_2] [i_2] [i_0]) + 53))))))))));
                    var_16 = (((((-1 ? (6047985821693495680 + -6047985821693495680) : -6047985821693495699))) ? (-127 > -6047985821693495680) : (~6047985821693495682)));
                }
            }
        }
    }
    var_17 = var_2;
    var_18 = (!var_0);
    #pragma endscop
}
