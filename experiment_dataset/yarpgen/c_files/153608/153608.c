/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_2 == ((((min(var_2, var_11))) ? ((var_3 ? var_6 : 23280779)) : (!var_7)))));
    var_15 = (!65535);
    var_16 = -3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((((!2305280059260272640) ? 70 : 4776610080660037201))) ? (((+((var_2 ? (arr_4 [i_0]) : -100))))) : ((((var_8 ? 1508835372474289557 : var_9)) & var_5))));
                var_17 = (!(((((max(4776610080660037220, 0))) ? ((var_10 ? (arr_4 [i_0]) : 17)) : (((3 ? 16 : 65302)))))));
            }
        }
    }
    var_18 = (min(var_18, ((((var_7 ? 1 : var_12))))));
    #pragma endscop
}
