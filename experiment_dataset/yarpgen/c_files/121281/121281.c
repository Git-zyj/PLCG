/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((-var_12 ? (((arr_0 [2]) ? 5108 : (min(var_6, var_8)))) : ((min(-658719331, 5125)))));
                arr_7 [i_0] [i_0] &= ((!((((arr_0 [i_0]) ? 2145195822 : (((!(arr_0 [i_1])))))))));
                var_14 = ((!(!var_5)));
            }
        }
    }
    #pragma endscop
}
