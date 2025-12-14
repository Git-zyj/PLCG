/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((var_1 > ((min(var_0, 91)))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_20 = (max(var_20, (((((!((min(-1, -616038996))))) ? (((-127 - 1) + -69)) : ((-616038996 ? ((254 ? 32764 : -69)) : 111)))))));
        var_21 = -66;
        var_22 = (min((arr_2 [i_0 - 2]), (0 % var_4)));
    }
    var_23 = var_11;
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_24 = (var_8 * ((((max(var_9, var_11))) ? (!63) : (min(var_14, (arr_4 [5]))))));
                    arr_11 [7] [i_3] [4] = (max((((-123 == 62) ? 68 : -4)), (((~110) ? ((min(163, 68))) : ((32767 << (92 - 81)))))));
                    var_25 = max((((!(-15 || -1990224541)))), ((max((arr_2 [i_3]), 209))));
                }
            }
        }
    }
    #pragma endscop
}
