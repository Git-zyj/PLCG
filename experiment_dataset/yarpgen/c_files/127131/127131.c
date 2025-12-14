/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min(var_8, (max(10555422822310772142, var_5)))) > ((((!(((3461386855 ? 18446744073709551615 : 18446744073709551615)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_17 *= (min((arr_4 [i_1] [i_1]), ((var_3 & (((arr_1 [i_0] [i_0]) ? var_13 : 61037))))));
                arr_7 [i_0] = ((+(((arr_2 [i_0]) ? (min(var_5, 0)) : (arr_1 [i_0] [i_0])))));
                var_18 = (min(var_18, ((((arr_5 [i_0]) > ((min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))))))));
            }
        }
    }
    var_19 += var_15;
    #pragma endscop
}
