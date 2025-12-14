/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_16, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_21 |= ((~(((((27914 ? -10874 : 30081))) ? 65535 : (max(56695, 1144119070))))));
                            arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] = (~-30087);
                            arr_9 [i_0] [i_1] [i_1] [i_2] [i_3 + 1] = (((arr_5 [i_0] [i_1] [i_2 + 3] [i_1]) ? (((~1136523553) ? 30086 : (arr_2 [i_0]))) : ((65535 ? -32766 : 20826))));
                        }
                    }
                }
                arr_10 [i_1 + 1] = (min(26, 56695));
            }
        }
    }
    var_22 = ((-32766 ? 0 : 65535));
    #pragma endscop
}
