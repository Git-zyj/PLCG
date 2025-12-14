/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = ((((var_4 ? 172 : 1))));
                var_14 = var_0;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, (96 <= 16977)));
                            var_16 = (max(var_16, 2325519233));
                        }
                    }
                }
            }
        }
    }
    var_17 = (min((max(var_8, var_7)), (((3253773170 < var_0) & var_10))));
    var_18 *= (2325519242 & 535);
    var_19 |= 1;
    var_20 = var_12;
    #pragma endscop
}
