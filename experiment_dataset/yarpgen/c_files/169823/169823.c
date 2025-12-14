/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min(var_12, (((max(46, 2236839939)) & 15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (min((((arr_0 [i_1 - 1]) >> (((arr_0 [i_1 + 1]) - 1131914825)))), ((-(arr_6 [i_0] [i_0] [i_1])))));
                var_19 = min((!12), ((-(arr_1 [i_0] [i_0]))));
                arr_7 [i_0] [i_0] [i_1] = ((((((arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 2]) ? ((253 ? 2058127357 : var_15)) : (((arr_4 [i_0] [i_1] [i_1]) ? (arr_1 [i_0] [i_0]) : var_16))))) < (arr_4 [i_0] [i_0] [i_0])));
                var_20 += ((((((((!(arr_6 [i_0] [i_0] [i_0]))) || (arr_4 [i_0] [i_1] [i_0]))))) >= (arr_6 [i_1] [i_1] [i_0])));
            }
        }
    }
    #pragma endscop
}
