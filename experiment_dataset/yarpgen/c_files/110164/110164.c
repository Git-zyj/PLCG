/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_1] [i_1] [i_1] [i_1] = var_7;
                    arr_11 [i_2] [i_2] [10] &= ((11 << (((min(((-48 ? var_4 : (arr_5 [i_0] [i_2]))), var_10)) - 32041))));
                    var_13 = 1;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    var_14 = var_8;
                    arr_14 [16] [i_1] [i_1] = 20;
                    arr_15 [i_1] = var_8;
                }
                var_15 *= ((max((arr_13 [12] [12]), var_11)));
                var_16 = ((-50 ? ((-8612 ? (((var_7 ? 11 : var_11))) : ((var_6 ? 47 : var_5)))) : ((((arr_5 [i_0] [i_1]) * (arr_5 [i_0] [i_1]))))));
            }
        }
    }
    var_17 -= (max(var_7, (max((((-73 ? 69015077 : 172))), (max(var_3, -106))))));
    #pragma endscop
}
