/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((((!(var_11 - 3919584913896697077)))));
    var_14 = (min(((~(max(7304437116635739626, 30724)))), ((((var_1 || var_11) ? (((var_12 ? var_2 : 12))) : var_10)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (12355492864264030959 & -172231247);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = var_0;
                    var_17 = 3484166868;
                }
            }
        }
    }
    #pragma endscop
}
