/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : 65533));
        arr_4 [i_0] = 2;
    }
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            {
                arr_12 [i_1 + 1] = 8;
                var_17 = ((2 >= (65533 || 65533)));
                var_18 = ((((max((var_0 - 0), 4))) ? 65533 : ((((-40 * 1) >= 163)))));
                var_19 = ((-(((((((arr_0 [i_2]) > (arr_11 [i_1] [i_2] [i_2])))) > ((65535 & (arr_2 [i_1]))))))));
            }
        }
    }
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_21 = (arr_16 [i_3]);
                var_22 = (255 | 65524);
                var_23 = (((((((-127 - 1) ? 116 : -1603506748)))) && (arr_14 [i_3] [i_3])));
            }
        }
    }
    #pragma endscop
}
