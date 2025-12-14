/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = var_7;
        arr_3 [i_0] = (((((arr_1 [i_0]) / 341367845)) >> ((((1611968643 ? (arr_0 [i_0]) : (arr_0 [i_0]))) - 8736438994039943549))));
        var_13 = ((((1974661492 ? -7616108461407365997 : -341367846)) > (arr_1 [i_0])));
        var_14 = (!-341367855);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (((arr_1 [i_1]) | ((~(~1)))));
        var_15 = (((min((max(743498830, (arr_1 [i_1]))), var_5)) / -341367845));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_16 -= ((!(-1342662223 | 96)));
                    var_17 = min(((var_6 ? 2147483648 : (!4294967295))), ((((min((arr_4 [1]), var_3))) ? (min(2, var_11)) : (((arr_1 [12]) ? var_0 : var_1)))));
                }
            }
        }
        var_18 = (((((min(-1068280497946985591, 4837855614436405165)))) | (min(((var_7 ? 713206758894092208 : (arr_8 [14]))), (arr_0 [i_1])))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_19 ^= (((arr_12 [i_4]) <= (((206 ? 2122524341 : (arr_1 [i_4]))))));
        var_20 = (min((((((~(arr_8 [i_4])))) ? (((arr_12 [i_4]) ? (arr_7 [i_4]) : var_1)) : var_2)), (((~-492575715131279407) ? 1973566396 : (arr_5 [i_4])))));
        var_21 = (max(var_21, ((((((-(arr_7 [0])))) ? ((-(((arr_8 [i_4]) ? (arr_0 [i_4]) : var_0)))) : var_10)))));
    }
    var_22 = (((min((max(var_1, 0)), ((min(var_2, -2131896069))))) <= -1));
    var_23 = (var_7 / var_2);
    #pragma endscop
}
