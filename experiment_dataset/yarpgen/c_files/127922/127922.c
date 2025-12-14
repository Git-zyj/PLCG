/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (min(var_20, var_11));
                var_21 = (max(-var_3, ((max(var_7, (arr_0 [i_0 - 1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    var_22 = ((~((((arr_7 [i_2 + 3] [i_2 + 2]) != 950338029)))));
                    var_23 &= (min((arr_1 [i_3]), ((2147483647 ? 2147483647 : 2147483620))));
                    arr_11 [i_4] = (max((max(2147483620, ((min((arr_8 [i_2] [i_3] [i_4]), -2147483620))))), (-2147483647 - 1)));
                }
            }
        }
    }
    var_24 = (!-2147483647);
    #pragma endscop
}
