/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (var_3 && var_7);
    var_14 = ((((!(((67076096 ? 0 : -575285951355701015)))))));
    var_15 = (((max(var_3, (-1 + var_4))) < var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_16 *= 0;
                var_17 = (!4110025756);
                var_18 = ((((((arr_0 [i_0]) * (arr_0 [i_0])))) ? (((arr_0 [i_1 - 1]) ? (arr_0 [i_1 - 1]) : (arr_3 [i_0]))) : (((arr_3 [i_0]) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}
