/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = ((~(((!((min(63502, (arr_4 [i_0] [i_0])))))))));
                var_13 = (((((18446744073709551615 ? (((-8320703501005952481 ? 73 : 0))) : (((arr_1 [i_0]) ? 2911148607 : 958132965802527357))))) ? ((((arr_2 [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0] [i_1])))) : ((max((((arr_1 [i_0]) ? var_7 : (arr_1 [i_0]))), 255)))));
            }
        }
    }
    var_14 = ((((!(2034 && -8320703501005952493))) ? ((250 ? 11957820282080026258 : ((550056122 ? 8866581570954112323 : 2591146813550626914)))) : ((max(((var_10 << (var_2 - 2079454203))), var_4)))));
    var_15 = 10831726796176741605;
    #pragma endscop
}
