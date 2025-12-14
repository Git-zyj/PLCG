/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= ((((min(4, 1988776775))) ^ 0));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((((min((41289 || 24247), ((0 ? 0 : 33)))) - 24255)))));
                    var_18 = (min(var_18, ((((min(var_10, var_0)) != (var_9 | 1))))));
                }
            }
        }
        arr_9 [i_0] [i_0] = var_5;
        var_19 = var_16;
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        var_20 |= var_7;
        var_21 = (min(var_12, (max(var_16, ((max(var_5, var_9)))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                {
                    var_22 = ((var_16 == (((var_14 ? -2147483646 : var_10)))));

                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        var_23 = (((((255 ? var_15 : 1))) ? 44 : ((var_8 ? 2147483647 : 3))));
                        arr_22 [i_3] [i_6 + 1] [i_3] [i_6] [i_5] [i_4] = 3;
                        var_24 = (max(var_24, (((45228 ? ((min((max(var_12, var_2)), (((3 ? var_0 : var_3)))))) : -0)))));
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        arr_25 [i_3] [i_4] [i_5] [21] [i_5] = (223 ? ((13450572011336742924 ? 24247 : -5565179057214430940)) : 41289);
                        var_25 |= (min((min((((24244 ? 1392735053 : 1027899096))), ((var_5 ? var_16 : 63108)))), var_10));
                        var_26 *= (max(255, 0));
                        var_27 *= (min((~var_6), var_14));
                    }
                    var_28 = ((1392735053 | (var_12 && var_3)));
                    arr_26 [i_5] [i_5] [i_4] [i_3] = (max((max(24235, 42320)), ((min(23, 0)))));
                    var_29 = ((23 ? ((max(0, (min(45228, 91))))) : 20307));
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 16;i_8 += 1)
    {
        var_30 = (min(var_30, -var_1));
        var_31 = (min(var_5, (((((var_16 << (var_12 - 2764090738694828775))) > (((var_2 ? var_13 : 23216))))))));
        arr_29 [i_8] = 1;
    }
    var_32 = 24198;
    var_33 = 408801479258342569;
    #pragma endscop
}
