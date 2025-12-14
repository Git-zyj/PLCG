/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_18 ? ((max((~var_19), var_14))) : ((var_13 ? var_1 : var_16))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = 1;
        arr_4 [1] [2] = (((((((63 ? 1 : (arr_1 [5] [i_0])))))) >= (max(4160749568, (158 <= 1290396400)))));
        var_22 = ((((52 ? ((((426075185 == (arr_2 [i_0] [i_0]))))) : (min(0, 3868892111))))) || (((arr_0 [i_0] [i_0]) >= 1)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [6] [i_1] = 71;
                                arr_17 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1] = ((((~(arr_10 [i_1] [i_2 - 3] [i_1] [i_1])))) + (arr_6 [i_2 - 3] [i_1] [i_2 + 1]));
                            }
                        }
                    }
                    arr_18 [i_1] [i_1] [i_2 - 3] = (arr_12 [23] [i_1] [i_2] [0] [i_2]);
                    arr_19 [i_0] [i_0] [i_1] = (min(52, -285716689));
                    var_23 = (((((1290396398 + var_18) * 426075165)) * (((((arr_12 [i_0] [i_0] [i_1 - 1] [i_0] [i_2]) != (arr_3 [i_0])))))));
                    var_24 = -var_13;
                }
            }
        }
        arr_20 [i_0] [i_0] = ((((max((arr_9 [6] [i_0] [i_0] [i_0] [i_0]), var_0)))) ? ((0 ? (arr_0 [1] [i_0]) : ((max(0, var_0))))) : ((~(arr_2 [i_0] [i_0]))));
    }
    var_25 = (~-1823441258);
    #pragma endscop
}
