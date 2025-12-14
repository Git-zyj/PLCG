/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_18 = (var_9 > 1303424156);
            arr_7 [i_0] [i_0] = 16577;
            arr_8 [i_0] = ((var_11 ? (max(var_11, 169)) : (arr_1 [i_0 - 1])));
        }
        var_19 += (26512 + -29378);
    }
    var_20 = ((var_11 ? -7413524165196189898 : var_0));
    var_21 -= (max(((21978 / ((min(3677, var_8))))), ((((max(var_9, 3317242141)) != 3677)))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {
                arr_15 [i_3] = (max((max((min(84, 48523)), (!56520))), (!1)));
                arr_16 [0] &= (((var_11 ? -40 : var_5)));
            }
        }
    }
    #pragma endscop
}
