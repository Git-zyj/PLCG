/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (!(max((2660731055 != 125795417484673241), (max(1, 1)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 = (1 * 1);
            var_22 = (min(var_22, 1));
            arr_4 [i_1] = (((~16677) - (18446744073709551587 * 23)));
            arr_5 [i_1] = (~186);
            var_23 = ((255 ? 1 : ((288230376151711744 ? 1 : 16677))));
        }
        var_24 = 15360;
    }
    var_25 ^= (((((~(~4032)))) * ((-(1634236241 / -1813399186)))));
    var_26 = (~226291606);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_27 = (((!-1) >= ((~(~1)))));
                var_28 = ((~(((!(1 != 48381))))));
            }
        }
    }
    #pragma endscop
}
