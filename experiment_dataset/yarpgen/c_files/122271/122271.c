/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_11 = ((((min((~3), ((min(12, var_3)))))) ? var_0 : ((1023 ? (arr_8 [i_3] [13] [13] [i_3] [i_3] [i_3 - 2]) : 16487476910951197795))));
                            var_12 = (max(var_12, -19));
                        }
                    }
                }
                var_13 &= (244 - 62839);
            }
        }
    }
    #pragma endscop
}
