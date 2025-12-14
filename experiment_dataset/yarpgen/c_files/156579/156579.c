/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((max((max(-85, 6622882601379414475)), (var_1 && 3173259057))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = (arr_5 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [i_0] [i_0] [i_1] [i_0] = ((-(arr_12 [i_4] [i_3] [i_2] [i_1] [5])));
                                var_20 = -14;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_9;
    #pragma endscop
}
