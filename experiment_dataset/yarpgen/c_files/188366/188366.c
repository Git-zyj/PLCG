/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = ((((max((arr_5 [i_0] [i_1] [i_2]), (((arr_3 [i_1]) ? var_6 : var_12))))) ? (min(((((arr_4 [i_0] [i_0] [4]) ? var_12 : var_17))), ((-(arr_3 [i_0]))))) : ((((((min(192, var_13))) >= (((-9223372036854775807 - 1) | var_2))))))));
                    arr_8 [i_0] = (min(-1432655028, 750352164));
                    arr_9 [i_0] [i_1] [i_2] = var_9;
                }
            }
        }
    }
    var_20 = ((var_10 ? -2147085485256697915 : (((max(194640510, -194640496))))));
    var_21 += (15360 | var_1);
    #pragma endscop
}
