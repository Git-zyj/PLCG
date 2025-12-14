/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (min((((((18446744073709551610 >= (arr_3 [i_0] [i_1])))) + (0 & var_10))), (((((((arr_1 [i_0]) * 14130038360847874109))) || (arr_2 [i_0 - 1] [i_0 - 2]))))))));
                var_15 ^= (max(((((((arr_0 [i_0]) || (arr_1 [i_1])))) <= 990993720)), (((var_10 / 1780576036) <= -2147483637))));
            }
        }
    }
    var_16 += ((var_6 | (max((var_6 / var_4), (3855824412090988732 & 16)))));
    #pragma endscop
}
