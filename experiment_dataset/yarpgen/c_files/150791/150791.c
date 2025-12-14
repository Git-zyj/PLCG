/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = -95;
        var_19 = (!var_17);
        var_20 = (min(1, 0));
        var_21 = var_10;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_22 = (min(var_22, (((((!(arr_1 [i_0]))) ? (arr_1 [i_0]) : (arr_3 [i_0] [i_0] [i_1]))))));
            var_23 -= (((var_8 * -2931529500) == (~129206925)));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_24 = ((-7746788675107246962 ? 8884871019897740535 : 42592));
                            var_25 *= (arr_6 [i_4 - 1] [i_4] [i_0]);
                            var_26 = ((((1 ? 685517174453876518 : 34828)) - ((((!3079133281) << (var_5 + 489375575))))));
                            var_27 = (-1690243025 != 1690243024);
                        }
                    }
                }
            }
        }
    }
    var_28 = var_4;
    #pragma endscop
}
