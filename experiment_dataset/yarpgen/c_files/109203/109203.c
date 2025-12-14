/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (min(20463, (11003 / var_5)));
        arr_3 [i_0] [17] &= 54506;
        var_12 = (10998 * -1);
        arr_4 [i_0] = ((!(192 <= 398569753679987614)));
        arr_5 [i_0] = ((-(((max(15038901898640607727, 0)) ^ 1))));
    }
    var_13 = (((((-29096 & (~398569753679987608)))) && ((((26180 * 16) ^ 11563727340128894481)))));
    var_14 += (min(250, 17950));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            {
                var_15 = (min(var_15, (min(6309, 0))));
                arr_12 [0] [i_1] = ((((min(10, -8)))) * -11);
                arr_13 [i_2] = -5655154238958384826;
                var_16 = var_6;
            }
        }
    }
    var_17 |= (((((max(var_1, -12028)))) & (((min(1215946790523791302, 31025)) | var_10))));
    #pragma endscop
}
