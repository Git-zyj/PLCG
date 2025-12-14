/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_12 = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? var_10 : ((((arr_1 [i_0 - 2]) <= 9293020155007825719)))));
        arr_2 [i_0] = ((-((var_1 * (arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = (((arr_0 [i_0]) ^ (arr_0 [i_0])));
        var_13 &= (arr_1 [i_0 + 1]);
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_6 [i_1] = 9293020155007825719;
        var_14 = (min(6887039496723451775, (((var_1 ? 53636 : ((((arr_4 [i_1]) >= -4))))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_15 = (max((arr_8 [i_2]), ((((arr_9 [i_3]) < (arr_8 [i_2]))))));
                arr_11 [i_2] = (((((!(arr_10 [i_2] [i_3])))) << (((min(var_10, ((1 + (arr_7 [i_2] [i_3]))))) - 13769))));
            }
        }
    }
    var_16 = var_11;
    var_17 = var_0;
    #pragma endscop
}
