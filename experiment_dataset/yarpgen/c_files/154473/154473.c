/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((+((var_5 ? (-47 || -1887204824) : (!var_8)))));
    var_17 = (max(var_13, (((99 >= ((max(var_10, -1070311218))))))));
    var_18 = 1073737728;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (arr_5 [i_0]);
                var_20 |= ((255 ? 1 : 9));
                arr_7 [i_0] [i_1] |= ((!(((((min(-1, 1073737708))) ? (((var_15 ? 3471248618 : var_4))) : (4203991866 - var_12))))));
                var_21 = (min(var_21, var_14));
            }
        }
    }
    var_22 |= var_13;
    #pragma endscop
}
