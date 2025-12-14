/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((~(130816 ^ 5945))))));
    var_13 = ((((((130820 ? var_5 : -1934482173)) + (max(4433, 130816))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 &= 28546;
                arr_5 [i_1] [i_1] [i_0] = (arr_4 [i_0] [i_1]);
                arr_6 [i_0] [i_0] [i_0] = 130825;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                var_15 = ((((arr_10 [i_3 - 1] [i_3] [i_3 + 1]) + (arr_9 [i_3] [i_3] [i_3 + 1]))));
                arr_11 [i_3] [i_3] = 18446744073709420791;
                arr_12 [i_3] [i_3] = (var_1 && 59863);
            }
        }
    }
    var_16 = var_2;
    #pragma endscop
}
