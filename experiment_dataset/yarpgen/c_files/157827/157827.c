/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (max((((1 < var_3) ? var_3 : var_6)), (-787957439 >= 1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 -= (min(1, (max((~1), (((arr_4 [i_1] [i_0]) ? -32765 : var_7))))));
                var_12 *= var_0;
                var_13 |= (arr_1 [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_14 &= (((min((~1), (min((arr_5 [i_2]), (arr_7 [i_3])))))) ? ((((!((max((arr_6 [i_2] [i_3]), (arr_5 [i_3])))))))) : (((~var_4) ? (arr_9 [i_3] [i_2] [15]) : ((((var_9 && (arr_8 [i_2] [i_2]))))))));
                var_15 ^= ((15281418422974752167 ? 1 : 0));
                arr_10 [i_2] [i_2] = arr_8 [i_2] [i_2];
                var_16 = (max(var_16, (((-2147483640 ? 255 : 1)))));
            }
        }
    }
    #pragma endscop
}
