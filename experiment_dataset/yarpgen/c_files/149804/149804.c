/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((!(((var_7 ? 5345392593100146442 : 5345392593100146465)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [1] [i_1] = (((((!-5345392593100146465) % var_16)) >= (!var_10)));
                var_19 |= -5345392593100146465;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_20 &= (((!-5345392593100146448) / (((!(!var_4))))));
                            var_21 = (-5345392593100146465 / var_4);
                            var_22 = (min(5345392593100146465, 5345392593100146465));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                {
                    var_23 = ((((((min(5345392593100146463, 5345392593100146463)) <= ((var_16 ? var_5 : -5345392593100146463))))) >> ((((5345392593100146465 ? (~var_11) : (~5345392593100146457))) - 108))));

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_24 = min((min(var_16, var_7)), ((-5345392593100146443 ? 5345392593100146465 : 5345392593100146440)));
                        var_25 += (!-5345392593100146465);
                        var_26 = (((min(-5345392593100146442, -5345392593100146465)) / -5345392593100146436));
                    }
                }
            }
        }
    }
    var_27 &= ((-var_3 << ((((-5345392593100146465 ? var_0 : 5345392593100146465)) % ((5345392593100146464 ? -5345392593100146465 : 5345392593100146457))))));
    #pragma endscop
}
