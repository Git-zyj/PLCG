/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (~-26);
    var_15 |= 8636553818490354716;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_3] [i_1 - 1] [i_3] [i_0] = (((((~(arr_3 [i_0 + 1] [i_1 - 1] [i_2])))) > (min(var_7, (arr_7 [i_3] [i_1 + 2] [i_1 + 2])))));
                            var_16 = (arr_0 [i_2]);
                            arr_11 [0] [i_2] [i_1 + 1] [i_1] |= ((0 ? 6727781914951616190 : -6727781914951616190));
                        }
                    }
                }
                arr_12 [i_0] [i_1 + 1] [i_1 + 1] = -6727781914951616190;
            }
        }
    }
    #pragma endscop
}
