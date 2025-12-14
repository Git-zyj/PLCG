/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = ((!((((arr_3 [i_1] [i_1 + 2]) - (var_15 - var_2))))));
                    arr_6 [i_0] [i_1 + 2] [i_1] = (((1948887745 >> (143 - 119))));
                    arr_7 [i_1] = (arr_0 [i_0]);
                    arr_8 [i_1] [i_2 - 2] = (min(-32584324, 18446744073709551604));
                }
            }
        }
    }
    var_20 = (!-7888807961959724206);
    #pragma endscop
}
