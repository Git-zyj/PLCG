/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (min(((var_0 >> (((((arr_0 [i_0]) << 0)) - 2348200445)))), -1832524480));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_9 [i_3] [1] [i_2 - 2] [i_3] = var_16;
                        var_17 = (max(var_17, (((((var_11 ? ((min(11532, 57031))) : ((var_8 ? var_1 : var_14)))) + ((((min(65535, 941214969))) ? 64 : (((!(arr_4 [i_0] [10] [i_0])))))))))));
                    }
                }
            }
        }
        arr_10 [i_0] = (((((!(((65525 ^ (arr_0 [i_0]))))))) > ((min(0, (!35794))))));
    }
    var_18 = ((!(((47375 | (!var_12))))));
    var_19 = var_4;
    #pragma endscop
}
