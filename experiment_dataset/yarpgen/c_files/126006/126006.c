/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (min((arr_5 [i_0] [i_0]), ((((arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 2]) || (arr_8 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1]))))))));

                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_3 - 2] [i_0] [i_3] [i_3 - 2] [i_2] = -1456277065795813177;
                            var_16 *= (((arr_2 [i_1 - 2]) | (((arr_4 [i_4 + 1] [i_4 + 1] [i_2 - 2]) & (arr_2 [i_1 + 2])))));
                            var_17 ^= (min(-13175398462220386606, 161));
                            arr_15 [i_1] [i_1] [i_1] = (min(0, 1));
                        }
                        var_18 = 1456277065795813176;
                        var_19 = (((-1888803363 >= (arr_11 [i_0] [i_1 - 1] [i_3 + 1] [i_3] [i_3]))));
                        var_20 ^= 49122;
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, var_0));
    var_22 = var_1;
    var_23 = (min((((!(~164)))), 26229));
    #pragma endscop
}
