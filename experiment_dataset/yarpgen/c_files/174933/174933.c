/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174933
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
                arr_7 [i_1] [i_1] = (max((max(40872, 40872)), 0));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_1] = 40869;
                            var_13 = (min((((arr_9 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_1]) + 1)), ((((24686 && (arr_2 [i_1] [i_1]))) ? -10739 : 1))));
                        }
                    }
                }
            }
        }
    }
    var_14 &= (max(1, ((var_8 ? ((var_2 ? 10751 : 120)) : 69))));
    #pragma endscop
}
