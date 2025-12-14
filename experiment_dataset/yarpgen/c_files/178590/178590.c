/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((var_11 - -1) / var_7)), var_3));
    var_15 = max((584659673 && 3710307618), ((3710307622 + (min(var_6, var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = 255;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((((3066570724 ? 1 : 29367) * 56282))))));
                            var_18 = arr_3 [i_1] [i_2] [i_3];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
