/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = (max((arr_3 [i_0]), (arr_1 [i_1])));
                arr_4 [i_0] [i_1 - 2] = (478227113 ? 0 : 11665182085626969121);
            }
        }
    }
    var_13 = (max((var_4 > var_8), (((((-1081854313 ? 11665182085626969121 : 11665182085626969121))) ? 6781561988082582490 : (!var_4)))));
    var_14 = (((((var_3 ? 1796618278 : ((2111825189 ? var_4 : -1796618278))))) ? ((((~6781561988082582494) || -1759226604))) : (((!(var_11 * 0))))));
    var_15 = (~(max((((var_3 ? var_5 : var_4))), ((var_8 ? 11665182085626969121 : var_10)))));
    var_16 = (max(((((max(-380444161, 124548049))) ? 14308816292190787145 : 2708938962)), (((~(max(var_3, var_6)))))));
    #pragma endscop
}
