/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 ^= (min(((22382 ? ((-22382 * (arr_2 [i_1] [i_0]))) : (!240))), (((arr_2 [i_0 - 2] [i_0 - 2]) / (((arr_2 [i_0] [i_0]) >> (15017695998997709952 - 15017695998997709936)))))));
                var_12 = (((var_1 >= 5) || (arr_1 [i_0 + 3])));
                var_13 = var_10;
            }
        }
    }
    var_14 += var_7;
    var_15 &= 5719639973146491338;
    var_16 = ((3608491473863611972 << (-1177766970 + 1177766984)));
    #pragma endscop
}
