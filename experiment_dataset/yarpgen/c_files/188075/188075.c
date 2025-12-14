/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = 1810435949;

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_13 |= max((((((var_6 ? var_11 : var_3))) ? (arr_6 [i_0] [20] [i_2]) : -4294967288)), (((764211981 >= (4294967295 & var_1)))));
                    var_14 *= (((((((arr_0 [i_0]) / 1478034397)) * ((var_0 ? var_6 : 6)))) == ((((var_9 > (max(4294967284, var_10))))))));
                }
                arr_9 [i_0] [i_1] = max(((((min(var_5, 2484531343))) ? ((1830241011 ? var_2 : (arr_0 [5]))) : (arr_2 [i_0 - 1]))), 3617159161);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 18;i_7 += 1)
                            {
                                var_15 = -236240585;
                                var_16 = (min(var_16, (arr_8 [i_3] [14] [14] [i_3])));
                                var_17 = (max(var_17, (((681461816 >= (((arr_5 [12] [i_6] [12]) ? var_5 : var_5)))))));
                                arr_24 [2] [2] |= arr_17 [i_3] [i_5] [i_6] [i_3];
                            }
                            var_18 = (max(var_18, ((min(1830241001, (arr_5 [i_3] [i_3] [2]))))));
                            var_19 -= (-((-var_0 ? (max(var_4, (arr_8 [i_3] [i_3] [i_3] [i_3]))) : (min(var_10, (arr_1 [i_5]))))));
                            arr_25 [i_3] [i_3] [i_3] [i_3] = (((!((max(2919517211, (arr_10 [i_3] [i_4])))))) ? ((var_10 ? 4294967285 : ((4190235 << (var_4 - 1311956529))))) : (arr_6 [i_3] [i_3] [i_5]));
                        }
                    }
                }
                arr_26 [i_3] = min(4294967295, 1319253577);
            }
        }
    }
    var_20 = (var_9 ? (((4294967295 ? 1810435949 : var_10))) : var_9);
    var_21 = (max(var_21, var_7));
    #pragma endscop
}
