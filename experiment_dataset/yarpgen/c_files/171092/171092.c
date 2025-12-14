/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_12 = (max(var_12, ((((((-(arr_3 [8])))) ? ((224 ? var_9 : (arr_2 [i_0] [i_0]))) : (arr_3 [i_0]))))));
            var_13 = (arr_0 [i_1 - 2] [i_1]);
            var_14 ^= ((239 << (235 - 219)));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_15 = (max(var_15, 65304));
            arr_9 [i_0] [i_2] [i_2] = (arr_4 [i_0] [i_0] [i_0]);
            arr_10 [4] = ((((((((var_6 ? var_2 : (arr_5 [i_0] [i_2])))) ? (~var_4) : (arr_5 [i_2] [i_0])))) && (arr_7 [i_2])));
        }
        var_16 = (-((((((var_5 ? 7361056640007975408 : 255))) || (var_2 * var_4)))));
    }
    var_17 = var_2;

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            arr_17 [i_3] [i_3] [i_3] = ((!(arr_14 [i_4 - 2] [i_4 - 2])));
            arr_18 [i_3] = (arr_13 [i_3] [i_4]);
            var_18 = (max(var_18, 232));
        }
        var_19 = ((((((min((arr_14 [i_3] [i_3]), (arr_11 [i_3])))) ? 125 : (arr_16 [3] [i_3]))) != (((((min(33, (arr_13 [i_3] [1])))) && ((min(1451491079, (arr_15 [i_3])))))))));
        arr_19 [i_3] = ((((var_4 << ((((((~(arr_15 [7]))) + 33)) - 23)))) % var_4));
    }
    #pragma endscop
}
