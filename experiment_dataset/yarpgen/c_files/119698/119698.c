/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(var_3, (min(var_7, 32767)));
    var_17 = (var_6 - var_8);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min((max(65535, (arr_3 [i_0] [i_0]))), 2046896218));
                var_18 = 65142;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            {
                var_19 = 65517;
                var_20 = (arr_8 [i_2 - 2] [2]);
                var_21 = var_13;
                var_22 = ((((-(arr_6 [11]))) <= (!var_9)));
            }
        }
    }
    #pragma endscop
}
