/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (((arr_6 [i_1]) <= 2147483647));
                arr_7 [i_1] [i_0] [i_1] = (4199840670 <= -2147483647);
                arr_8 [i_1] = ((!((!(((-(arr_2 [i_0]))))))));
                var_20 = ((((min((-2147483647 - 1), 95126626))) ? 1 : (18446744073709551615 || 95126626)));
            }
        }
    }
    #pragma endscop
}
