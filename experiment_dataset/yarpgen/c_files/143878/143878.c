/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((var_8 ? (max(var_17, (min(var_18, 15772)))) : var_3));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 -= ((~((min((arr_2 [i_0] [i_0]), 59979)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_22 *= (59979 >= 56939);
                    var_23 = (max(0, (((arr_3 [i_1 - 2] [i_2] [i_2]) * ((min(61, 1)))))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        var_24 = (min(var_24, ((((-(arr_8 [i_3 - 1])))))));
        var_25 = 1;
    }
    var_26 = (min(var_26, ((min((min(((32761 ? (-2147483647 - 1) : 32761)), var_5)), var_15)))));
    #pragma endscop
}
