/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -4210224397100989980;
    var_21 ^= (503316480 != var_15);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = var_19;
        var_22 = (!var_12);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 = 17382;
        arr_7 [i_1] [i_1] = 1023;

        for (int i_2 = 3; i_2 < 7;i_2 += 1)
        {
            arr_10 [i_2] = ((!((min(var_11, var_13)))));
            var_24 *= var_1;
            arr_11 [i_2] = 37732;
        }
    }
    var_25 = 145;
    #pragma endscop
}
