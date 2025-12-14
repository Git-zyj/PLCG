/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? ((min(((~(arr_0 [i_0]))), (((!(arr_1 [i_0] [i_0]))))))) : ((var_11 ? (max(2811149417583553955, 2147483647)) : ((((arr_0 [i_0]) * (arr_0 [i_0]))))))));
        var_17 = (max((((!(arr_0 [i_0])))), var_9));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_0] [i_0] [i_2] [i_3] = var_5;
                        var_18 = ((~((min(126, (arr_7 [i_1] [i_1] [i_0]))))));
                        var_19 += (min(var_10, (max((arr_5 [i_0] [i_0]), (min(var_4, 12248912992047549244))))));
                    }
                }
            }
            var_20 *= arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1];
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {
            var_21 += (((!(arr_13 [i_0] [i_4]))));
            var_22 += (((((~(max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))))) ? (((!(arr_4 [i_0] [i_4])))) : (var_7 == 1)));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            arr_18 [i_0] = ((!((!(arr_5 [i_0] [i_5])))));
            arr_19 [i_0] = ((((((2147483647 ? 32744 : 32924)))) << ((6 ? (2147483647 % 1) : (arr_5 [i_0] [i_0])))));
            var_23 = (min(var_23, ((((arr_15 [i_0] [i_5]) ? ((((-32767 - 1) ? -1 : -1196982700))) : (arr_5 [i_5] [i_0]))))));
        }
    }
    var_24 = 0;
    #pragma endscop
}
