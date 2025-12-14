/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [19] [19] [i_1] |= ((5368522281472672726 >> (((max((arr_3 [i_0] [i_0 - 1]), (arr_2 [i_0 + 1] [i_0 + 1]))) - 749249625))));
                arr_5 [i_0] [i_0] [i_0] = (arr_3 [i_0] [i_0 - 1]);
            }
        }
    }
    var_18 = (((var_15 < var_16) ? (var_2 || var_7) : ((var_6 % ((var_11 ? 4895272600884330607 : var_15))))));
    var_19 += var_15;
    var_20 = ((-6123253474218148715 >= ((((-var_4 != (13078221792236878889 < var_2)))))));
    #pragma endscop
}
