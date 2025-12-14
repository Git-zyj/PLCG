/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (((var_14 - 14) ? (18027953511561175242 / 35219) : (((-1896039676 ? 112 : 1)))));
                    var_20 = (max(var_20, ((((((min(var_7, -1896039676)) + 2147483647)) << ((65531 ? (-1896039676 < var_1) : 255)))))));
                    var_21 = 1;
                }
            }
        }
    }
    var_22 &= (!var_0);
    var_23 = ((var_9 ? var_14 : 14307667102795388302));
    var_24 |= ((-(70 & 27)));
    #pragma endscop
}
