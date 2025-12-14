/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (min(((994308835875341847 ? 9039135042144986081 : -108)), ((((-21 | -86) != (arr_1 [i_0]))))));
        arr_2 [i_0] = (max((((37 ? 25 : -86))), (arr_1 [3])));
        var_15 *= var_6;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = ((arr_5 [i_2 - 3] [8]) ? (((arr_7 [i_0] [i_1] [i_1] [i_2 - 2]) + (~21))) : ((((((arr_1 [i_2 + 1]) * -68))) ? -26 : (6876218966468533158 % -36))));
                    arr_8 [i_1] [i_1] [i_2] [i_2] = (((~(-94 ^ 11087999270284852915))) & ((+(((arr_5 [i_0] [i_0]) ? var_5 : var_4)))));
                    var_17 = (max(var_17, ((((arr_3 [i_2 - 3]) ? ((+(((arr_0 [i_0]) ? 4835096987386003780 : var_0)))) : (min((((arr_5 [i_1] [i_2]) ? 15965891755214434836 : var_12)), 20)))))));
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (min(((-var_10 ? (arr_10 [6]) : (((var_5 ? var_13 : (arr_1 [i_3])))))), (((arr_5 [i_3] [i_3]) ? var_3 : var_5))))));
        var_19 = -4;
        var_20 = (max(var_20, var_2));
    }
    for (int i_4 = 4; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_21 = ((11087999270284852900 ? 1660694950065570078 : 108));
        var_22 = (min((((arr_7 [i_4 - 4] [i_4 + 2] [i_4 - 3] [i_4 - 1]) ? (arr_1 [i_4 + 2]) : (arr_1 [i_4 + 2]))), ((((arr_1 [i_4 - 2]) == (arr_9 [i_4 + 1]))))));
    }
    var_23 = (min((min(0, (9532410409509265035 % 12495866740090352521))), var_7));
    var_24 = var_0;
    #pragma endscop
}
