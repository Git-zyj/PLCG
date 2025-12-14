/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? (max((-2147483647 - 1), ((0 ? 32767 : 1)))) : 28672));
        var_11 = (min((arr_0 [i_0]), (!var_5)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = ((255 >= (-2147483647 - 1)));
                    arr_8 [i_0] [i_1] [i_1] = (arr_5 [i_0] [i_0] [i_2]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (26843 == -2147483633);
        var_13 = (min(var_13, (arr_9 [i_3] [i_3])));
        var_14 |= max(252, 38698);
        var_15 = (max(var_15, (((!((((arr_9 [i_3] [i_3]) ? (arr_9 [i_3] [i_3]) : (arr_9 [i_3] [i_3])))))))));
    }
    var_16 -= var_6;
    var_17 -= ((2147483619 ? 0 : 2147483633));
    var_18 *= var_2;
    #pragma endscop
}
