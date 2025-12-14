/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (-411727046 <= 0);
                    arr_8 [i_1] [i_1] = ((((!(((arr_1 [i_0]) > 9223372036854775807)))) ? ((((((-60 + 2147483647) << (((arr_5 [i_0] [i_0] [i_0 + 2] [i_0]) - 2411658089077461256))))) ? 1776838029 : (arr_5 [i_2] [8] [i_0] [i_0]))) : (((((arr_7 [i_2] [1] [i_0]) > (arr_7 [i_0] [i_0] [i_2]))) ? ((2 ? -9223372036854775799 : 14808117264791342628)) : (((((arr_6 [i_0] [i_0] [i_0] [i_0]) == 85))))))));
                }
            }
        }
    }
    var_19 = -1055320826738344023;
    #pragma endscop
}
