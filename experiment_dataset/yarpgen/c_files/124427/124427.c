/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((min(((min(var_0, 88))), ((3584 ? 28 : var_12))))))));
                    arr_6 [19] [i_1] [19] [9] = -5050118209257661931;
                    var_15 = (-((((var_3 ? var_4 : 5050118209257661930)))));
                    var_16 = (min(var_16, (((min(var_7, (arr_4 [16] [19])))))));
                    arr_7 [i_1] = ((((min(24576, 260046848))) ? var_1 : (((((24576 ? 260046848 : -3587858817757204872))) ? ((-189 ? var_10 : 2536012480)) : 367885755))));
                }
            }
        }
    }
    #pragma endscop
}
