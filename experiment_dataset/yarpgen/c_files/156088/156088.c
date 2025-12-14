/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_10, (max(65535, (min(65522, 8186089331344934726))))));
    var_21 = (max(((max(var_8, 13))), (~var_18)));
    var_22 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_23 = min((arr_2 [i_0]), (((((((arr_1 [2] [i_0]) ? -1369842961 : 0)) + 9223372036854775807)) >> ((((max(44666, 65509))) - 65472)))));
            var_24 = 0;
            arr_4 [i_0] [i_1 + 3] [3] = var_3;
        }
        arr_5 [0] [i_0] = ((min(1369842961, 65529)));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_25 = -968474665;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_15 [i_2] [i_2] = (min((max((max(-1068853476, 3141656495801432383)), ((var_0 ? -9 : -1504513062927633871)))), (min((arr_14 [11] [i_3] [i_3]), (max(var_6, 3141656495801432383))))));
                        var_26 = (((-9 ? ((var_0 ? (arr_12 [i_2] [i_2] [i_5]) : 1125899906711552)) : (max(72057593769492480, (arr_1 [i_5] [i_4]))))));
                        var_27 = (min(var_27, ((max((((~(arr_12 [i_4] [i_5] [i_2])))), (max(8186089331344934722, (arr_11 [i_4]))))))));
                        var_28 *= ((((((9 ? var_6 : (arr_10 [i_2] [i_5])))) || (((var_6 << (2345569812 - 2345569809)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
