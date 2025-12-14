/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 > (((~1) ? var_7 : -5))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [9] = ((-((var_1 * (arr_4 [i_0 + 3] [i_0 + 3])))));
                arr_6 [i_0] [4] = (((((var_9 && (max(var_3, var_7))))) != (((((-18 ? -29 : var_9))) ? -1 : (arr_3 [i_0] [i_1])))));
                var_11 = 30030;
                var_12 -= ((((((arr_1 [i_0]) ? ((30 ? var_7 : var_0)) : ((-51 % (arr_0 [17] [9])))))) ? (arr_3 [i_0] [i_1]) : (arr_0 [i_0] [i_0])));
                var_13 = (!var_0);
            }
        }
    }
    var_14 = (max(var_14, ((((((var_0 ? 1 : 30617))) ? ((var_8 ? (!-28) : ((14031896828050419714 ? var_6 : var_6)))) : var_9)))));
    #pragma endscop
}
