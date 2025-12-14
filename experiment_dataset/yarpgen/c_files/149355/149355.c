/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((arr_1 [i_0 - 2]) ? (arr_0 [i_0 - 3] [i_0 - 3]) : (arr_1 [i_0 + 3]))) << (((((151701020 ? 2048 : -1589070788))) - 1986)));
                var_11 = (max(1470518948, -28040));
                var_12 -= (((((18304 ? 6618986638978516619 : (arr_1 [i_1])))) ? var_3 : 761580127927805547));
                var_13 += ((((11827757434731034997 ? (arr_0 [i_0] [i_0 - 3]) : (arr_4 [i_0]))) <= (((0 > (arr_5 [i_1]))))));
            }
        }
    }
    var_14 = (min(var_0, var_9));
    var_15 = ((~((17685163945781746074 ? 1470518942 : 21905))));
    var_16 = ((((var_1 ? (max(var_8, var_3)) : ((var_1 ? 32767 : var_3)))) <= ((((var_0 + var_0) + (~var_6))))));
    var_17 = (max(var_17, var_2));
    #pragma endscop
}
