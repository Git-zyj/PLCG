/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (((((~((-1 ? 462417375 : 252220404))))) ? 52 : 462417375));
                var_14 |= (((((((max(10797, 3)))) % (((arr_4 [i_1]) ? 1846817474 : var_0)))) * ((-10 ? 0 : 10791116515920341769))));
                var_15 &= 1688258160;
                var_16 = (max(var_16, ((min(((max(((-4375 ? 933749561 : 32767)), (max(var_11, (arr_2 [i_0])))))), (max((((arr_3 [6] [6]) ? var_2 : var_9)), (arr_3 [i_0] [i_0 - 1]))))))));
                arr_5 [i_0] = var_11;
            }
        }
    }
    #pragma endscop
}
