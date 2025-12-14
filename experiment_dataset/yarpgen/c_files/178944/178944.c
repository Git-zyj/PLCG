/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_0);
    var_12 = (min((((var_7 / 64) ? (((8734 ? 4253416921 : var_6))) : (max(var_8, -4071269825598609705)))), (((119 && (562949953421311 & var_10))))));
    var_13 *= (max(((((min(var_1, -4071269825598609705))) ? 17614959402355499807 : (var_7 & -9223372036854775796))), (((4087668904917343003 | 4335) | 1))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 |= ((((((~1) ? ((19096 ? -1220813236 : 5499328398697981208)) : 4071269825598609705))) ? ((((!(!197))))) : (((!8589934592) ? ((min(0, 1689036446))) : (min(var_3, 3380032540))))));
                    arr_8 [i_0 - 1] [3] = (min((+-25067), 11));
                    var_15 = 1;
                    var_16 *= (arr_1 [i_2] [i_0 + 2]);
                }
            }
        }
    }
    #pragma endscop
}
