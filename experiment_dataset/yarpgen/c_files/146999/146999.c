/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_14 += (((((var_6 ? 643 : 53495))) ? ((min(var_4, ((60 ? 40 : -32761))))) : (13964696435481466877 >> 4)));
                var_15 = ((((((((-(arr_2 [i_0]))) + 2147483647)) >> (((max(18446744073709551588, 1)) - 18446744073709551587)))) == ((((var_1 ? 1 : -53))))));
            }
        }
    }
    var_16 &= var_10;
    var_17 &= (max(((var_0 ? (~var_7) : ((min(var_12, 1))))), (((((var_9 ? (-9223372036854775807 - 1) : var_11))) ? var_13 : var_5))));
    var_18 = ((-((-(var_8 - var_7)))));
    #pragma endscop
}
