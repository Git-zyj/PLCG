/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = ((-((-(arr_6 [i_0] [i_0] [i_1] [i_2])))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_17 = (max(0, (0 / 572863511)));
                        var_18 -= (min(((-26090 / ((min(-9, 18))))), (((max(6198214076273911701, 2147483636))))));
                    }
                    for (int i_4 = 1; i_4 < 6;i_4 += 1)
                    {
                        var_19 += (15291 ? ((~(max(-6198214076273911680, 0)))) : ((((~var_12) ? -32762 : (-9 | var_10)))));
                        arr_14 [i_0] [i_1] [i_2] [i_2] [8] = ((~(((arr_2 [i_1]) / (arr_4 [i_4 + 4] [i_1] [i_0])))));
                        var_20 = (((((min(32736, 20684)) >> (((!(arr_7 [i_4] [i_4] [i_4]))))))));
                        var_21 &= (((-14069 + 2147483647) >> (2969793621 - 2969793612)));
                    }
                    arr_15 [i_1] = (((arr_8 [1] [9] [9] [i_2]) ? (((((-32767 - 1) ? 15 : (arr_7 [i_0] [i_1] [i_2]))) >> (4044 - 3997))) : (min(-3226747721209262231, (!3781055332)))));
                }
            }
        }
    }
    var_22 = 513911945;
    #pragma endscop
}
