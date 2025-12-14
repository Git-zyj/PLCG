/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= 18446744073709551610;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (min(((max(((((arr_5 [i_0] [i_0] [i_2]) || 3637627807))), ((var_11 | (arr_4 [i_0] [i_1] [i_1])))))), ((29344 ? (arr_5 [i_0] [i_1] [i_1]) : var_14))));
                    arr_8 [i_0] [i_1] [i_0] [i_2] = (((min(((min((arr_1 [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0])))), (~18446744073709551610))) == ((((!(arr_2 [i_0 - 2])))))));
                    var_20 = (max(((((min(2, -12162)) <= 16))), (min((arr_5 [i_0] [i_1] [i_2]), 18446744073709551610))));
                }
            }
        }
    }
    var_21 = var_4;
    #pragma endscop
}
