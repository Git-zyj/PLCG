/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1301;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_21 = var_15;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 -= (min((!var_15), (min((arr_7 [8] [i_1] [i_2] [i_0]), (arr_7 [i_0] [i_0] [i_1] [i_0])))));
                    var_23 = ((-(((!var_19) | (arr_3 [5] [i_1])))));
                    var_24 = (max(var_24, 63648));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = 2057285729;
        arr_12 [i_3] [i_3] = (((arr_6 [i_3] [i_3] [i_3] [i_3]) ? (6314 | -6315) : 1175149948568393633));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_25 = (min(var_25, ((((-46 != 0) >> (((min((arr_9 [i_4 - 1] [i_4 - 1]), (arr_9 [i_4 - 1] [i_4 - 1]))) - 608304246285000160)))))));
        arr_17 [i_4] = (--6315);
        arr_18 [i_4] = (arr_3 [i_4 - 1] [i_4]);
        arr_19 [i_4] = (max(((-756053002 ? (min(var_13, var_6)) : (((105993129 ? var_17 : var_2))))), ((((((-7976436671266183535 + 53) + 9223372036854775807)) << (((((-32 * var_17) + 2328)) - 23)))))));
    }
    #pragma endscop
}
