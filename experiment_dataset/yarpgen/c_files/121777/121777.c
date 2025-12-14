/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_5, (min((var_5 % 18446744073709551601), ((max(var_13, var_8)))))));
    var_16 = var_4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 += (((arr_1 [i_0] [i_0]) || (((((143552238122434560 & (arr_0 [i_0]))) << (143552238122434566 - 143552238122434537))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_2] = (((min((!1), (min((arr_2 [i_0] [i_1 - 1] [i_0]), (arr_5 [i_0] [i_1] [i_0] [i_2]))))) == ((-9223372036854775806 ^ (1 >= -143552238122434566)))));
                    arr_7 [i_2] [i_2] [i_2] = (+((-(min((arr_1 [15] [i_2]), (arr_4 [i_0] [i_0] [i_0] [i_0]))))));
                    var_18 = -143552238122434583;
                    var_19 = (min(var_19, ((((arr_3 [i_1 + 2]) <= (arr_4 [i_0] [15] [i_2] [i_2]))))));
                }
            }
        }
    }
    var_20 = 1;
    #pragma endscop
}
