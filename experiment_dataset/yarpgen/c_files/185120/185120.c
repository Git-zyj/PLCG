/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(153, ((1720 ? 100 : 1958400571))))) ? ((((1958400571 ? 2336566726 : var_4)) | var_2)) : (((-var_5 + ((var_9 ? -120 : 65525)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 -= ((((arr_0 [0]) ? 1958400573 : (arr_7 [18] [18] [17] [18]))));
                    var_14 = ((-(arr_0 [i_0])));
                    arr_8 [i_1] |= -32739;
                }
            }
        }
        var_15 = (arr_4 [i_0]);
    }
    var_16 = (min(5514896053749648952, 65527));
    #pragma endscop
}
