/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -1;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_15 = (max(var_15, ((max(((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])))), (max((((57857 && (arr_0 [4])))), var_7)))))));
        var_16 *= min((254 != 2), ((1994882534 ? -11630 : 6198828037320351569)));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            {
                var_17 = (min(var_17, (arr_5 [i_1])));
                arr_6 [10] [i_1] [i_1] = (((max((min((arr_1 [i_2]), (arr_2 [i_2 - 3]))), (((var_6 ? (arr_0 [i_1]) : (arr_1 [20])))))) * (((((min((arr_5 [i_1]), (arr_3 [i_1] [i_1])))) ? (arr_3 [i_1] [i_2]) : (var_13 || var_0))))));
                var_18 = ((((max((arr_3 [i_2 + 1] [i_2 + 1]), (((arr_1 [i_1]) ? -1835783131 : 1446776401))))) ? (arr_5 [i_1]) : (((!((max((arr_0 [i_2 + 1]), -2062733840))))))));
                var_19 = 21583;
                var_20 = (max(254, 2));
            }
        }
    }
    #pragma endscop
}
