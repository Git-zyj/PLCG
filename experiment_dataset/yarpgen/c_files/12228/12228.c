/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((!((min(-1923711641256983896, -1923711641256983896))))))));
                arr_5 [i_0] [i_0] = -32748;
                var_16 = (max(var_16, (arr_3 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_17 = ((-(53356 < 199)));
                            var_18 = ((((max(var_3, (arr_4 [i_0] [i_1] [i_2 - 1]))) < -1965433910)));
                            var_19 = -11252;
                        }
                    }
                }
            }
        }
    }
    var_20 = var_9;
    #pragma endscop
}
