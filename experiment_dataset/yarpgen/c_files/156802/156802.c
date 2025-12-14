/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= 4010;
    var_15 = (max((max(var_7, -40319485)), (((!(((45140 ? 45140 : var_4))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (min(((((((20402 > (arr_0 [i_0])))) >> (arr_1 [i_1])))), (arr_3 [13] [i_1] [i_1 + 4])));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_0] [i_1 - 2] [i_2] [i_1] = (arr_1 [i_2 + 3]);
                    var_17 = ((-(max(9223372036854775782, 45140))));
                }
            }
        }
    }
    var_18 = var_3;
    #pragma endscop
}
