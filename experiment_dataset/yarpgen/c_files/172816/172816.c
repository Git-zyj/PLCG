/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (min(var_2, ((var_4 ? var_3 : ((var_8 ? 11609746708012749318 : 56139))))));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((((6836997365696802297 ? 56151 : var_6))) ? (130048 | 3654496132) : var_6))) ? (((16199633012092116163 ? 3654496135 : 1))) : (max((min(1, (arr_0 [i_0]))), (arr_1 [i_0 - 2])))));
        var_12 = -2142180449;
        var_13 -= (((((min(var_1, -62)) ? (var_8 <= var_7) : (min(var_4, (arr_1 [i_0 + 2])))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_14 += -var_3;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    {
                        arr_12 [i_1] [i_2] [i_1] [i_4] = (min((arr_10 [i_4] [i_1] [i_2] [i_1]), (max((((arr_5 [i_1] [i_1]) ? (arr_5 [6] [i_1]) : 1)), var_2))));
                        var_15 = ((min((((arr_8 [i_1] [i_2] [i_3]) & 2288170196)), (((1 ? 21 : (-32767 - 1)))))));
                        var_16 = (max(((2247111061617435452 * (~11422))), (((11928 == (arr_7 [i_3] [i_4 + 1] [i_4 + 1] [i_4 - 3]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
