/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((-(4127449344 || 30)))) ? (max(var_4, (min(-719926945, var_17)))) : (max((min(16, -1634804235)), ((var_2 ? 17 : 238)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = ((!((min((!-433285824), ((var_18 & (arr_0 [i_1]))))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, 4));
                                arr_19 [i_4] [i_4] [i_4] [i_2] = -47477;
                                arr_20 [i_0] [i_0 + 2] [i_2] [i_0] [i_0] [i_0] = ((~((10 ? (~var_5) : (-407545425 & 0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
