/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = ((6841851928361075534 ? var_3 : -6841851928361075534));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] = (min(var_1, ((var_9 * (arr_1 [i_1 - 1] [i_1 - 1])))));
                arr_5 [i_1] = (arr_2 [i_1] [i_1] [i_1 - 2]);
                var_12 = (max(var_12, (arr_1 [i_1 + 1] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 -= (!3851852935282377063);
                            var_14 *= (((((((10442922805359328349 ? 63699 : 6841851928361075534))) ? (max((arr_10 [9] [9] [i_2] [17]), var_5)) : var_4)) / (arr_1 [i_2] [i_1 - 2])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
