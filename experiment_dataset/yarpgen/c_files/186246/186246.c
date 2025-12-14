/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = 6160710215270827357;
                arr_6 [i_0] = (((arr_5 [i_0 + 1]) * (arr_5 [i_0])));
                arr_7 [i_0] = (((arr_0 [i_0] [4]) ? (((((arr_2 [7]) ? (arr_5 [i_0]) : (arr_4 [i_0] [i_1] [i_1]))) << ((((~(arr_4 [i_1] [i_1] [i_0]))) + 57)))) : ((((arr_1 [i_0] [i_0]) * (arr_1 [i_0] [i_0 - 1]))))));
                var_14 ^= ((-(((19112 ? 6828619602813184719 : (arr_5 [i_0 - 2]))))));
            }
        }
    }
    var_15 = (((((170 ? -11 : 46438))) ? var_4 : (((1 ? 120620722 : 19097)))));
    var_16 = 63;
    var_17 = ((!((!(46438 + var_9)))));
    #pragma endscop
}
