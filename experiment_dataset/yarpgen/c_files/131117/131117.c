/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_1] = (((((var_11 ? var_1 : (var_1 + 1)))) ? (((!(!1)))) : (!1)));
                var_18 = (max(var_4, 1048512));
            }
        }
    }
    var_19 = var_11;
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_20 -= ((~(var_14 ^ 1)));
                    var_21 *= (min(((max(var_4, (arr_13 [i_2] [i_4] [i_4] [i_4])))), ((~(arr_13 [i_2 - 3] [i_4] [i_4] [i_2 - 3])))));
                }
            }
        }
    }
    var_22 = (((3221722582714396509 == 1) == ((max(var_15, 1)))));
    var_23 = ((((1 ? var_15 : 1)) >= ((min(-1048520, (1 <= 56894))))));
    #pragma endscop
}
