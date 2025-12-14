/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_12 >= var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = (((((arr_3 [i_1] [i_1] [i_1]) >> (-4261505484630346867 + 4261505484630346886)))) ? var_9 : (arr_3 [i_0] [i_0] [i_1]));
                var_22 = (min(var_22, var_4));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_23 = var_15;
                    var_24 = (((arr_1 [i_0]) & var_12));
                }
                arr_9 [i_1] [i_1] [i_0] = var_1;
            }
        }
    }
    var_25 = var_5;
    var_26 *= 1;
    #pragma endscop
}
