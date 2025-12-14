/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((var_1 != -2000542772) | var_15)), var_0));
    var_20 = var_14;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 ^= ((!(2000542785 << 0)));
        arr_3 [i_0] = (min(2000542771, (min((min(var_6, (arr_2 [i_0]))), 2000542782))));
        var_22 = (max(var_22, ((((((var_7 ? -2000542772 : 0) * 15)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_23 += (((((min(var_14, 2000542782))) ? (((var_0 ? (arr_9 [i_1] [i_1] [i_1] [i_2]) : 1584))) : ((var_5 ? var_12 : var_14)))));
                    var_24 = ((((((-2000542782 + 2147483647) >> (var_2 + 1200385201)))) || (((~(arr_8 [i_0] [i_1] [i_0]))))));
                    var_25 = (min(var_25, var_14));
                }
            }
        }

        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            arr_14 [i_0] [i_0] [i_0] = var_3;
            arr_15 [1] [i_3] [i_3] = ((((min((arr_12 [i_0]), (arr_12 [i_0])))) ? var_9 : (min((arr_7 [i_0] [i_3]), var_16))));
        }
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            var_26 += (((((var_7 ? (((~(arr_2 [i_4])))) : var_13))) ? (arr_12 [i_0]) : (arr_10 [i_4] [i_0])));
            var_27 = (arr_5 [i_0]);
        }
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_28 = (min((~2000542746), ((((arr_21 [i_5] [i_5]) ? 42 : 22)))));
        var_29 = ((~(((-32059 + 2147483647) << (((((arr_20 [i_5] [i_5]) + 44)) - 11))))));
        var_30 = -2000542752;
        arr_22 [i_5] |= ((((!((min(var_17, 6975))))) ? 10417 : ((var_4 ? -2000542777 : 8740695149867820490))));
    }
    #pragma endscop
}
