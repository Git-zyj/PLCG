/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_0 [i_0]);
                var_19 = (max(var_19, -1024));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_20 = arr_9 [i_0] [i_0] [i_2] [i_3];
                            var_21 -= ((((7618134841761223927 ? 0 : 5875578049270125842))));
                            arr_10 [i_0] [i_1] = (10828609231948327688 - 40472);
                        }
                    }
                }
                var_22 = (max(var_22, (((((((arr_1 [i_0]) ? var_16 : (arr_0 [i_1])))) ^ 10828609231948327693)))));
            }
        }
    }
    var_23 = var_18;
    #pragma endscop
}
