/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (arr_4 [i_0] [i_1 - 1]);
                arr_6 [i_0] [12] = (max((0 % var_10), ((((max(var_15, (arr_1 [i_1]))) * ((max(var_13, var_6))))))));
                var_18 = ((!(((((!(arr_5 [i_0])))) >= 192))));
                var_19 |= (max(((var_11 + ((max(var_4, -36))))), ((-(arr_4 [i_1 + 2] [i_1 + 2])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_20 -= var_0;
                arr_11 [i_2] = ((((max((arr_0 [i_2]), var_15))) ? 65529 : var_3));
            }
        }
    }
    #pragma endscop
}
