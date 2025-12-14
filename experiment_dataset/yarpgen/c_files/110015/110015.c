/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((min(((var_6 ? -1 : var_2), (var_6 == 1062676139)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_13 += (((((-7 ? 1 : 33554304))) ? ((1 ? 1 : 1)) : 1));
                    var_14 = ((((min((((arr_2 [12]) ? (arr_3 [i_0]) : -1)), (arr_3 [i_2 + 1])))) + (((!-9915) + (max(-3, (arr_5 [i_1])))))));
                }
            }
        }
    }
    #pragma endscop
}
