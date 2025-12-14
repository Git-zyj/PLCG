/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((27736533 ? (((!(var_13 * 32)))) : (~26107)));
        var_15 -= 1;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_16 = (+-259277668);
        var_17 = ((-(min(1, -27736533))));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_18 = var_8;
            var_19 = (arr_7 [14]);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_19 [i_2] [i_3] [i_4] [i_3] [i_3] = (max((((~(arr_5 [i_3])))), ((27736530 ? (max(45307, 2690305642)) : (var_5 + 32580)))));
                            var_20 += -127;
                        }
                    }
                }
            }
            var_21 = (((var_8 >> (var_2 <= 126))));
        }
        var_22 = -36;
    }
    var_23 = (+((var_8 ? (77 ^ 1) : (100 >= 125))));
    #pragma endscop
}
