/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (1 % var_15);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 56;
        arr_4 [i_0] = ((((arr_2 [i_0]) ? 2382978338 : 2382978343)));
        var_20 ^= ((576460752169205760 > ((-8393243634576516604 ? 44 : 1911988958))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 = 192;
        var_22 = (min(var_22, ((min((min((min(var_5, (arr_0 [i_1]))), (min(-576460752169205768, (arr_1 [i_1] [i_1]))))), ((min(-576460752169205755, 112))))))));
        var_23 = (((arr_2 [18]) >> (112 - 87)));
        var_24 = (((0 ? var_2 : (max(12396819571379313788, (arr_5 [i_1]))))));
        var_25 = (((((arr_5 [i_1]) & (arr_5 [i_1]))) <= (arr_6 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            var_26 = ((!(arr_10 [i_3 + 3] [i_3 + 3] [i_3])));
            var_27 = 0;
            arr_13 [i_2] [i_2] = ((255 != (arr_9 [i_2] [i_2])));
        }
        var_28 = (arr_2 [i_2]);
        var_29 = (arr_0 [i_2]);
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_23 [i_6] = ((var_5 > (max((max(2849826664, 167)), 68))));
                    arr_24 [i_4] [i_6] [i_6] = ((!((6549486973401263026 > (!var_15)))));
                    arr_25 [i_4] [i_6] [i_5] [i_6] = ((18 ? -576460752169205732 : ((((12198731778363349619 <= 6248012295346201991) ? 67 : ((min(230, 209))))))));
                }
                var_30 = min((((~(arr_8 [i_5] [i_4])))), (min((arr_15 [i_4]), (arr_17 [i_5] [i_4]))));
            }
        }
    }
    #pragma endscop
}
