/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_20 = (max(var_20, var_18));
        arr_2 [i_0] = (((arr_1 [i_0]) ? -5665952629552130668 : var_12));
        var_21 ^= (45743 * 1266960354130812685);
        var_22 = (15457 ? ((-(arr_1 [i_0]))) : var_7);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((!(-665662098140145276 <= var_8)));
        arr_7 [i_1] = (255 ? 4610306560953619348 : -121);
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    var_23 = var_19;
                    arr_15 [i_2] [i_3] [i_2] [i_2] = ((((((0 ? 255 : (-32767 - 1)))) <= (~var_14))));
                }
            }
        }
    }
    var_24 = (min(var_24, ((((var_4 < var_9) ? var_3 : (((((11387 ? var_8 : -1030339696))) ? (21 * 22214) : (max(1, 1967265058)))))))));
    var_25 = ((!(((var_15 ? var_6 : (var_19 > -7062344285013103931))))));
    var_26 = var_12;
    #pragma endscop
}
