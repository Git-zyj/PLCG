/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (~-2278);
        var_15 = ((var_4 > ((3801072163597192078 ? 7 : 7))));
        var_16 = (min(var_16, (57837 % 4024978028)));
        var_17 = (max(var_17, 41813));
    }
    var_18 = ((var_11 ? (min(((max(56726, 631706294))), var_5)) : (1257539285099751305 - 7698)));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            {
                arr_10 [i_1] [i_1] = var_10;
                var_19 += (((((min(3895468447683799585, 12424)))) ? (((((1 | var_2) >= (max(var_0, -4718036870970381073)))))) : 4024978028));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_20 = (((((((((var_12 >> (53705 - 53704)))) ? -1512 : ((4294967295 ? 1024 : 480)))) + 2147483647)) << (19067 - 19067)));
                            arr_15 [2] [i_1] [i_1] [i_1 + 1] = (((((-(~var_2)))) ? var_11 : (3895468447683799585 % -2046)));
                            var_21 = (max(var_21, ((((!18446744073709551615) ? (((!(arr_0 [i_1 + 1])))) : (arr_0 [i_1 + 1]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
