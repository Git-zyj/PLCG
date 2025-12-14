/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (77 ^ 32748);
    var_16 = (var_0 == var_12);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((((!var_0) ? -114 : 255))) ? ((var_0 - (!13))) : ((((43 & var_4) ? (((-4784615133333165043 + 9223372036854775807) << (65535 - 65535))) : (((32764 ? var_9 : (arr_4 [i_0 - 2] [i_1])))))))));
                arr_6 [i_0] [i_0] = (((((((1153229266685316240 ? -65540 : var_5))) ? (arr_4 [i_0] [i_1]) : ((var_11 ? var_11 : var_6))))) ? ((max(((183 ? var_10 : (arr_0 [i_0]))), ((min(-111, (arr_4 [i_1] [i_0]))))))) : (min(0, 255)));
                arr_7 [i_0] = (((!(var_5 ^ var_6))));
            }
        }
    }
    var_17 = (65531 - 83);
    var_18 = (max((min(141, 58)), ((((!var_9) == var_14)))));
    #pragma endscop
}
