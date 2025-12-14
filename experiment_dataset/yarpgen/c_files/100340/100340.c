/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(1, 2562106053));
    var_20 = (((var_18 / 95) ? ((((var_11 ? var_12 : var_4)) / (((max(1, var_8)))))) : ((((max(var_17, var_12))) ? -var_1 : var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (min(((max((max(1716742802, 3183293402)), ((206060731 ? 4026531840 : 2562106049))))), ((min((arr_1 [i_0] [i_0]), (arr_0 [i_0]))))));
                var_22 = ((+((((arr_1 [i_0] [i_1]) <= 1)))));
                arr_4 [i_0] = ((+((253 / ((var_14 ? (arr_0 [i_0]) : 2562106028))))));
                arr_5 [i_0] = (((~var_7) ? (((~(arr_3 [i_0])))) : var_0));
            }
        }
    }
    #pragma endscop
}
