/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 11;
    var_18 = (max(var_18, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 &= ((!((((((var_1 ? (arr_3 [i_0]) : 784962544))) ? (arr_5 [i_0] [i_0]) : -var_13)))));
                var_20 = 503279217;
                var_21 = (max(var_21, (arr_2 [i_0] [i_1] [i_0])));
            }
        }
    }
    var_22 = (((((var_6 ^ var_15) ? ((var_4 ? var_7 : var_0)) : ((min(var_7, -784962544)))))) ? ((((-var_1 >= (min(127, var_4)))))) : ((((((var_6 + 2147483647) << (var_15 - 65)))) ? ((var_10 ? var_16 : var_11)) : var_6)));
    #pragma endscop
}
