/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    var_19 = ((((var_4 | 11) << ((((113 ? var_13 : 13156365291632961202)) - 10837182684458535303)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = ((((max((arr_2 [i_1 - 2]), (arr_6 [i_1 - 1])))) || ((((var_2 ? (arr_1 [i_0] [22]) : 1338785069)) == ((((arr_4 [i_2]) << (var_5 - 9413955423966162705))))))));
                    arr_7 [i_0] = ((133 << ((((1338785069 << (-121 / 59300))) - 1338785067))));
                }
            }
        }
    }
    var_21 = var_2;
    var_22 = ((-(var_3 | var_11)));
    #pragma endscop
}
