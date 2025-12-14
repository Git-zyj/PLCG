/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] = -149;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 += ((-((3202160485 ? 72 : 106))));
                            var_15 = (max(2482017968, 195));
                        }
                    }
                }
            }
        }
    }
    var_16 = ((-((var_6 << (171 - 123)))));
    #pragma endscop
}
