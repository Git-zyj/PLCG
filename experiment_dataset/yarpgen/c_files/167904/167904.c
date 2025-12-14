/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_16 ^= (((var_1 ^ var_9) ? (-32767 - 1) : (max((arr_0 [i_0]), (arr_0 [i_1])))));
            var_17 = min((-32767 - 1), 1);
            var_18 = (min(var_18, (((max(var_6, (arr_4 [i_0]))) ^ -var_4))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_9 [i_0] [i_2] = (arr_6 [i_0]);
            arr_10 [i_0] [1] = (!-2679217095458373079);
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_14 [i_0] [i_3] [i_3] = (((((-(arr_7 [i_0])))) ? (-32767 - 1) : 1));
            var_19 = (min(var_19, (((-51 ? 1 : (((!(~-1)))))))));
            var_20 = (arr_5 [i_3]);
        }
        var_21 -= (((arr_8 [5] [i_0]) ? -1 : 1));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_17 [i_4] = (((((137438953471 << (-13711 + 13712)))) ? (arr_15 [i_4]) : (arr_15 [i_4])));
        arr_18 [2] [i_4] = ((!(((~(arr_16 [i_4]))))));
        arr_19 [i_4] = (arr_16 [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_22 = 32114;
                    arr_25 [i_5] = (((!var_13) ? var_12 : ((~(arr_20 [i_5] [i_5 + 1] [4])))));
                }
            }
        }
        arr_26 [i_4] [20] = (arr_20 [i_4] [i_4] [i_4]);
    }
    var_23 |= (((min(var_13, ((7997978274925697802 << (var_9 - 1078991876)))))) ? var_12 : var_4);
    var_24 &= ((~(((!((min(var_2, var_12))))))));
    #pragma endscop
}
