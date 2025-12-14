/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_0] [i_0] &= (-((-((var_13 - (-2147483647 - 1))))));
                    arr_9 [i_1] [i_1] = ((8 | ((0 * (arr_5 [i_1] [i_2 - 2])))));
                }
            }
        }
    }
    var_18 &= var_2;
    var_19 = (var_7 ? ((((var_2 << (((var_17 + 759892135) - 17)))) | ((var_3 ? 65522 : 18121)))) : -var_2);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            {
                var_20 = (-((255 ? var_10 : (arr_17 [i_4 - 1] [16] [i_3]))));
                var_21 = (min((((-48 ? (arr_7 [i_3] [i_4]) : -var_11))), ((200 * ((var_8 - (arr_6 [i_3] [i_3] [i_3])))))));
            }
        }
    }
    #pragma endscop
}
