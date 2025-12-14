/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((((((17651461675217295867 ? (-32767 - 1) : var_14))) && 36028522141057024))), (((((-1 ? var_16 : var_14))) ? (-936025309450229740 && 117) : ((min(55937, var_9)))))));
    var_20 = (max(((var_10 ? 4294967291 : ((min(var_2, var_14))))), ((max(((var_17 << (var_2 - 24455))), (min(var_10, var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_21 += (17388 ? ((-64 ? -36028522141057010 : (((max(57344, 1)))))) : -64);
                var_22 = ((((!(!var_6))) ? (max(var_8, ((var_13 ? var_18 : 1)))) : ((((!(((-(arr_6 [i_0] [i_0 + 1] [i_0]))))))))));
            }
        }
    }
    var_23 -= (((1 <= 8191) != ((((min(21675, var_7))) ? (max(55912, 1063732088)) : var_17))));
    #pragma endscop
}
