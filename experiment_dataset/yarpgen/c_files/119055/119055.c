/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 *= ((((max((((-2147483647 - 1) | 7)), ((2032 ? 2147483647 : 8191))))) <= var_4));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 -= ((+(((arr_0 [i_0]) | (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] [i_0] = (max((var_6 || var_9), (((!(arr_1 [4] [i_0]))))));
        var_13 = -14;
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {
                var_14 = var_3;
                arr_8 [10] [i_2] = (((((((max(-30326, 8323072))) ? var_2 : -3069539493))) ? ((((!(((-1820996733 ? (-2147483647 - 1) : 15919916634018496743))))))) : (((arr_6 [i_1 - 2]) ? (var_9 - 8323080) : var_1))));
            }
        }
    }
    var_15 = ((var_4 ? (!36095) : var_0));
    #pragma endscop
}
