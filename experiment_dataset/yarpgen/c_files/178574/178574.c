/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_2, (!var_14)));
    var_16 *= (min((((!(var_1 - -7915572885550068265)))), var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = (77 && -1);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] = (-1235386312 | 8191);
                            var_18 = ((((((~(arr_4 [i_0] [i_0]))) ^ (var_14 | 1))) | ((((max((arr_2 [8]), 104))) ? var_4 : (~var_7)))));
                            var_19 = ((!(~var_11)));
                            var_20 += (arr_3 [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
