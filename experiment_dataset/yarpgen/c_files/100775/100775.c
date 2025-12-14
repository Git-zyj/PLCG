/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((+((min((arr_0 [i_0]), (45336 >= -5472587324242682865))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_2] = ((((max(var_7, var_2))) * var_5));
                    arr_12 [6] [i_1] [i_1] [8] &= (max(((((((var_5 ? var_14 : (arr_10 [i_2])))) ? -12 : (9090 == var_11)))), (min(12866971992821711396, 11))));
                }
            }
        }
        var_16 = (((arr_7 [i_0 - 1] [i_0] [i_0]) >= ((((-32767 - 1) >= 96)))));
    }
    var_17 = var_11;
    #pragma endscop
}
