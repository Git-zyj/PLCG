/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((!((min(((var_8 ? 98 : var_5)), ((((arr_3 [i_0]) <= var_19))))))));
                arr_6 [i_0] = (((arr_3 [i_0]) ? var_18 : 1993768269));
                var_20 = (max(var_20, (((!((((arr_2 [6]) | 1395165464))))))));
                arr_7 [i_0] [i_0] = ((((max(var_10, var_3))) <= var_19));
                arr_8 [i_0] = (arr_2 [i_0]);
            }
        }
    }
    var_21 = (max((~var_3), (((((min(var_19, var_15))) || (((var_4 ? -14 : 19865))))))));
    #pragma endscop
}
