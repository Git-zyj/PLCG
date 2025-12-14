/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 += (min(var_1, (((var_10 ? 82 : var_5)))));
        var_16 = (min(((min(0, var_3))), var_9));
    }
    var_17 = (min(((min((var_1 > var_12), 25821))), (max(4294967289, (var_14 + 2379973207592705189)))));

    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    {
                        var_18 = (((max(var_2, var_5)) - ((~((var_2 ? var_4 : var_10))))));
                        var_19 = ((var_14 | ((min(var_2, ((var_13 >> (6059846568149375885 - 6059846568149375866))))))));
                        var_20 -= (((var_7 * 4202089019) <= (50176839 <= -12)));

                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            var_21 = var_5;
                            var_22 = (max(var_12, var_8));
                        }
                        var_23 |= (((var_4 || var_5) && ((max(var_7, -5848091065234550012)))));
                    }
                }
            }
        }
        var_24 = ((((((1743587319 ? var_2 : 1743587319))) ? -71 : (var_0 | var_1))));
    }
    var_25 = var_5;
    #pragma endscop
}
