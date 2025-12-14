/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_1] [i_1] [i_2] [i_3] = ((~((-(arr_3 [i_0 + 2])))));
                        var_10 = ((-var_0 ? (0 & 1) : ((var_5 ? (((1871849541 ? 12385 : 1))) : (min(10595480269034286668, -535893704))))));
                    }
                    var_11 = (((arr_4 [1] [i_1] [i_2]) && (((var_8 ? (max(var_4, 53150)) : (((3732755080807702635 ? 911478693 : var_9))))))));
                    var_12 = (min(var_12, ((((-((-1871849518 ? 477403414 : 0))))))));
                    var_13 = ((((((arr_2 [4] [i_2]) + var_0))) || (arr_11 [i_0] [i_1] [i_2])));
                }
            }
        }
    }
    var_14 = (min(var_14, (((+(((var_4 ^ var_6) ? ((var_4 ? 5285026184770498712 : var_1)) : (((var_5 ? var_6 : var_2))))))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_15 = ((3732755080807702635 % ((-7855105341343210104 ? ((0 ? -911478693 : 4503599627370495)) : ((min((arr_15 [i_4] [i_4]), var_1)))))));
                    var_16 += (arr_7 [i_5]);
                    arr_19 [i_4] [i_5] [i_4] = ((!(!var_3)));
                    var_17 += ((-2628047824 / (arr_5 [i_5])));
                    var_18 = var_2;
                }
            }
        }
    }
    var_19 += var_7;
    #pragma endscop
}
