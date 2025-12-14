/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((var_2 ? (min(var_1, var_10)) : ((max(1153308218, (max(-4057886012579639844, 2350386120))))))))));
    var_12 += 4057886012579639843;
    var_13 = ((70 ? var_2 : (min(((max(var_1, var_3))), var_5))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_2;
        var_14 = (max(((max(70, (min(var_1, 1))))), (min(((3300810814791262008 ? 15145933258918289608 : 70)), (((var_9 ? 115 : var_4)))))));
        var_15 += 1241081864718850369;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_16 = ((-(min(((min(70, var_1))), var_10))));
        var_17 |= (min((min(var_6, 4057886012579639843)), ((min(15515, -70)))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_3] = 458183644;
                    var_18 = (max(var_18, ((min(((max(var_3, var_5))), (((!((min(var_4, var_0)))))))))));
                }
            }
        }
        var_19 = min(var_6, (min(9223372036854775807, 3232338558)));
        var_20 = (max((((~(!var_6)))), (min((max(var_0, 4665737648236131070)), ((max(11538, var_3)))))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_21 += (min(((max(var_6, var_8))), ((15145933258918289608 ? 3964955048 : 66))));
        var_22 = (min(var_22, ((max(((max(115, 76))), var_4)))));
        arr_17 [i_5] [i_5] = var_4;

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_20 [i_5] [i_5] [i_5] = ((((min(-4665737648236131070, ((min(var_3, var_0)))))) ? ((max(-850025816, var_8))) : 330012248));
            var_23 = (min(3836783652, 18));
        }
        var_24 = ((((min(var_5, (max(64, 3964955048))))) ? var_3 : ((~(max(850025815, var_4))))));
    }
    var_25 |= var_0;
    #pragma endscop
}
