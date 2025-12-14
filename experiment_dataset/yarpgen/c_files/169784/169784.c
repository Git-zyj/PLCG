/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_0] [i_1] = ((7623770222143250441 <= (((1422398731 / -916877355) ^ (arr_4 [i_2 - 1] [i_1] [i_0 - 2])))));
                    arr_12 [i_1] = (((((((-2147483639 ? -273893351 : 7786348164195787519)) | 7786348164195787515))) + (((max(var_12, 17868674028976709300)) & ((min(9223372036854775803, var_11)))))));
                    var_20 = min(((-4 ? 1 : 979848968515324749)), var_8);
                    var_21 = -2431437791044738265;
                }
            }
        }
    }
    var_22 = var_15;
    var_23 = (8178725529228373106 | 17466895105194226847);
    var_24 = 7786348164195787520;
    #pragma endscop
}
