/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((!((!((min(7657243681026338791, var_3)))))));
    var_18 = (min(var_18, ((((((var_13 ? ((var_12 ? 1935427663 : var_2)) : ((var_15 ? var_12 : 2359539629))))) ? (!640151600825989485) : 8512678439093776554)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 ^= (((-(arr_3 [i_0] [i_0]))));
                    arr_6 [i_0] [i_0] [i_0] = ((((~(((5990068408362742701 <= (arr_3 [i_1] [i_0])))))) != -var_6));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_20 = min((((((var_10 ? var_13 : 2359539633)) + (-15510 * 105)))), (arr_5 [i_3]));
        var_21 = (((var_10 / (119 != var_9))) / var_2);
        var_22 = 14;
    }
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        var_23 = (min(var_5, ((((var_5 ? 167 : (arr_8 [i_4 - 1]))) / ((var_9 ? (arr_8 [1]) : 105))))));
        arr_12 [6] = var_6;
    }
    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        arr_15 [i_5] = -983876026;
        var_24 = ((~(((-5677311224787801154 & 70238259) & (var_5 & var_16)))));
        var_25 = ((!((((arr_4 [i_5 - 1]) ? (7639965741002795656 != var_5) : ((0 ? var_7 : 8035182333120678980)))))));
        arr_16 [i_5] = ((1935427675 / (((((!183) || 2147483647))))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_23 [i_5] [i_5] [i_5] = ((((((136 != var_13) >> (-7868 + 7884)))) || (((var_4 != var_6) != 1818735269))));
                        var_26 = var_4;
                    }
                }
            }
        }
    }
    #pragma endscop
}
