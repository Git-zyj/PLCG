/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_2);

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_20 ^= var_18;
        arr_3 [i_0] = ((-(max(var_15, (584301823 / 2012756274010268643)))));
        var_21 &= (min(50293, (max((~244492819), (((arr_2 [i_0] [i_0]) + var_17))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_22 *= ((((~(arr_5 [i_1]))) << ((((var_12 ? var_1 : var_12)) + 2334209662376786934))));
            var_23 = (max(var_23, (arr_2 [10] [i_2])));
        }
        arr_9 [i_1] [i_1] = ((-5220483662581519720 ? (arr_2 [i_1] [11]) : var_14));
    }
    var_24 = ((!(((max(var_1, -244492845))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 12;i_4 += 1)
        {
            {
                var_25 = ((var_3 << ((((((((((arr_5 [11]) && 5624811251720846374))) ^ var_10)) + 92)) - 19))));
                arr_15 [i_4] [i_4 - 2] = (((!((max(1, (arr_0 [i_3])))))) ? (max(26154, (max(var_6, var_18)))) : ((((max((arr_4 [i_3]), var_3))))));
            }
        }
    }
    #pragma endscop
}
