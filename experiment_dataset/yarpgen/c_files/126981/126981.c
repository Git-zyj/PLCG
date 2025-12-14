/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = ((((var_6 ? (0 >= var_12) : ((-1233839595150518560 ? 13568 : 90))))) ? (min(((min(var_7, 52052))), (arr_1 [i_0] [i_0]))) : var_2);
                var_14 = (min((arr_2 [i_0] [i_0] [i_0]), ((max((arr_3 [i_0] [4] [i_1]), ((-76 ? 38 : 1)))))));
                var_15 = var_2;
                arr_4 [i_0] = 89;
                var_16 = -21;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    var_17 = (arr_7 [i_2] [i_3]);
                    arr_14 [i_4] [i_2] [i_2] [i_2] = var_1;
                    var_18 &= -84;
                }
                arr_15 [i_2] = ((+((-1545499935 ? (min((arr_3 [i_2] [i_2 + 2] [i_3]), var_6)) : -2094388085))));
            }
        }
    }
    #pragma endscop
}
