/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = 3523550475;
                arr_6 [i_0] [i_0] = ((-((((arr_4 [i_0]) >= (var_8 + 0))))));
            }
        }
    }
    var_10 = (max(var_10, (57630 < 4194303)));

    /* vectorizable */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_11 *= (((((1 ? 1 : -421509677390454144))) || (((5858 ? 409950480 : (arr_4 [i_2 - 1]))))));
        var_12 = (arr_0 [i_2]);
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_13 &= ((var_7 - (arr_9 [i_3 + 1])));
            var_14 = (max(var_14, (arr_0 [7])));
            var_15 &= (((arr_13 [1] [i_4] [12]) ? (~127) : (!var_3)));
        }
        var_16 ^= (((((((arr_3 [14]) <= (((arr_0 [i_3]) ? var_6 : var_3)))))) % var_6));
    }
    #pragma endscop
}
