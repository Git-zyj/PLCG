/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 8263374893172307520;
    var_17 = var_15;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (((~(975643397 < var_7))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_20 &= (arr_3 [i_2]);
                                var_21 -= (((arr_1 [i_0] [i_1]) * (((+(((arr_0 [i_0]) ? -125 : var_12)))))));
                                var_22 = (+(((((((arr_0 [i_0]) ? 105 : var_11))) || var_6))));
                            }
                        }
                    }
                }
            }
        }
        var_23 = (-(((max((-9223372036854775807 - 1), (arr_4 [i_0]))) / (((min(var_14, var_15)))))));
        var_24 *= ((+(((max((arr_12 [i_0] [6]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) >> (((arr_9 [i_0] [0] [0]) ? 1 : (-9223372036854775807 - 1)))))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_25 = (max(var_25, ((((((-(arr_17 [i_5])))) ? ((min(0, -114))) : (arr_18 [i_5] [i_5]))))));
        var_26 = (max(var_26, (((-((min((arr_18 [i_5] [i_5]), (arr_18 [i_5] [i_5])))))))));
        var_27 = (max(var_27, ((min((+-46597), 12921)))));
        arr_19 [i_5] = (min((((-(arr_18 [i_5] [i_5])))), (min((min(16161276408816671798, 240)), (arr_17 [i_5])))));
    }
    #pragma endscop
}
