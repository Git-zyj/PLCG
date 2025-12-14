/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_6));
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, (((!(((16384 ? 255 : 240))))))));
                            var_13 = (min(var_13, (arr_5 [i_3])));
                        }
                    }
                }
                var_14 = ((!((((min(var_8, 244)))))));
                var_15 &= -240;
            }
        }
    }
    #pragma endscop
}
