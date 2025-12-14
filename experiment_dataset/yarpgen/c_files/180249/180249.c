/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min((max(((38068 ? var_8 : var_3)), ((1125899890065408 >> (var_5 - 3820947771972758644))))), 716582944);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] = 3191908362;
                    arr_7 [4] = 18446744073709551602;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            {
                var_13 = (((((arr_8 [i_4 - 1]) * (arr_8 [i_4 + 2])))) ? (max(35, 71)) : ((((!((max(var_2, 21))))))));
                var_14 = (min(var_14, ((max(((~(arr_10 [i_4 + 1] [i_4 - 2] [i_4 + 2]))), (max(2147483647, 0)))))));
                var_15 &= (max((((3743854463013616982 > (arr_10 [i_3] [i_4 + 1] [i_3])))), (min((18446744073709551602 + -2147483636), (arr_9 [i_3] [0])))));
            }
        }
    }
    var_16 = (((((11 ? 18446744073709551580 : 2674218472))) ? (((((((1 ? 150 : 253))) == (max(-32743, var_2)))))) : (((((2147483627 ? var_3 : var_8))) ? var_2 : ((var_3 ? -1022732118751347778 : 1))))));
    #pragma endscop
}
