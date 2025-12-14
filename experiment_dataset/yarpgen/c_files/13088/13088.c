/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-var_12 / ((max(79, 102))));

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_2 [1] = (((min(0, (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))) % ((max(162, ((1778668217 ? 1532042509 : 14846)))))));
        var_17 = ((((((((arr_1 [i_0] [i_0]) || 1)) ? (arr_0 [i_0 + 1]) : (min((arr_0 [i_0]), var_0))))) ? (!var_9) : ((((arr_0 [i_0]) || ((var_2 || (arr_0 [i_0]))))))));
        var_18 = ((-(((!((max((arr_1 [0] [i_0]), (arr_1 [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        var_19 = 93;
        var_20 = ((~((var_12 ? (arr_5 [i_1]) : 28123))));
        arr_7 [i_1] = 7535468987067251695;
    }
    #pragma endscop
}
