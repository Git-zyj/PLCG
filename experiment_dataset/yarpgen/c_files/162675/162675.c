/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = 1641608540;
                arr_8 [i_0] [i_1] [i_1] = ((((var_6 >> (var_0 - 176))) + ((min(var_3, (arr_3 [i_0]))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_16 = (min(var_16, (((-((255 ? 65295 : 65281)))))));
                    arr_11 [i_0] = ((arr_2 [i_0] [1]) >> (((arr_1 [i_0]) - 8614590704189986052)));
                    var_17 = (~259);
                    var_18 = 4560;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_19 ^= var_9;
                    arr_14 [i_0] [i_1] [i_1] [i_3] = (arr_4 [i_0] [i_0] [7]);
                    arr_15 [i_0] [i_0] [i_3] [i_3] = ((var_8 >= ((((65275 % 31) || 4563)))));
                    arr_16 [i_3] = (arr_5 [i_0] [i_1] [i_3]);
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_1] [i_4] [i_0] = ((-((-(arr_19 [i_4])))));
                    var_20 ^= ((((-((8 ? var_1 : (arr_10 [i_0] [i_1] [i_1] [i_1]))))) << (((min(((-100 ? (arr_9 [i_0] [i_0] [i_0]) : var_10)), ((255 ? var_1 : var_13)))) - 7887573371653591129))));
                    var_21 *= (((((1 ? 1 : 2305841909702066176)) <= 9223372036854775807)));
                    arr_22 [i_0] [i_4] [i_4] = var_9;
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_22 = ((((var_14 ? (min(-4567, (arr_10 [i_5] [i_1] [i_1] [i_0]))) : (min(var_1, var_9)))) * ((((arr_0 [i_0]) * (arr_0 [i_0]))))));
                    var_23 ^= (max(489224897763454156, 1));
                }
                var_24 = var_11;
            }
        }
    }
    var_25 = var_7;
    var_26 = var_3;
    #pragma endscop
}
