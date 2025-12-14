/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 *= (1152903912420802560 < 8388600);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [7] [8] [i_3] [10] [9] = (-6398811713850754033 - -14640);
                            arr_11 [i_3] = var_6;
                            arr_12 [8] [4] [4] [i_2] [8] [0] |= ((((((arr_8 [3] [10] [i_1] [7]) ? -1152903912420802561 : var_7))) || 6398811713850754045));
                            arr_13 [3] [i_3] [3] = (min((min((arr_0 [10]), 0)), ((8388606 ? -16384 : 4286578696))));
                            var_13 += arr_1 [6];
                        }
                    }
                }
            }
        }
    }
    var_14 -= 89;
    var_15 = 2757602737;
    var_16 = (min(var_16, (3960667572 >= -1529248480)));
    #pragma endscop
}
