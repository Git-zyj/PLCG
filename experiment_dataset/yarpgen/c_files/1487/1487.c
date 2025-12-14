/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((39 ? -9227 : 39))), var_12));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((min((arr_2 [i_0] [i_0] [i_0]), ((((arr_0 [i_0] [i_0]) ? 73 : (arr_1 [i_0] [i_0]))))))) ? (((((var_3 != (arr_3 [i_1]))) ? 1 : 66))) : -8000676282610362919));
                arr_5 [i_0] [i_1] = ((-(((var_12 <= (arr_2 [i_0] [i_0] [i_0 - 1]))))));
            }
        }
    }
    var_19 = (((var_10 & -428369436) + ((var_16 >> ((10333 ? var_5 : var_7))))));
    #pragma endscop
}
