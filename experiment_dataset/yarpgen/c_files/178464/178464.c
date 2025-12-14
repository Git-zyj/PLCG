/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_0] = (~12);
                var_16 = ((((!(arr_2 [i_1]))) ? var_5 : (arr_4 [i_0] [i_0])));
            }
        }
    }
    var_17 = (((-(var_3 / var_2))) + ((((var_14 * var_5) ? 1463099508 : (((32762 ? var_13 : -114)))))));
    var_18 = 8442592654391622554;
    #pragma endscop
}
