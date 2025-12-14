/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (var_5 - 2512365088);
                var_19 = 1514920190;
                var_20 = (arr_0 [i_0]);
            }
        }
    }
    var_21 = (max(var_21, var_4));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_6 [i_2] [18] |= 6359787264344411131;
        var_22 += ((-(arr_5 [i_2])));

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_23 = ((!((((15286222974464123380 | (arr_4 [i_2]))) == 888585373))));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_24 = (max(var_24, ((((1 && 13835888961711114087) ? 25162 : ((min(-2048, 40374))))))));
                arr_11 [i_2] [i_4] [i_2] = ((~(max((arr_8 [i_3] [i_3 - 1] [i_3]), 2683566072))));
                var_25 = (min(((((min(var_10, var_2))) ? (min(var_1, 27)) : (arr_5 [i_3 + 1]))), ((~(max(var_6, (arr_5 [6])))))));
            }
            var_26 ^= (!1);
            var_27 = (min(var_27, ((((888585373 << (25162 - 25139)))))));
            var_28 = (~var_1);
        }
    }
    #pragma endscop
}
