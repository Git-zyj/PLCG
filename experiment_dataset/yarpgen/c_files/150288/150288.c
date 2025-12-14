/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = -var_5;
        arr_3 [2] |= (max(var_5, var_4));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_11 [i_1] = (arr_7 [i_1]);
            var_10 = (-((15727170227704455312 << (-806580633048958328 + 806580633048958357))));
            arr_12 [i_1] = (var_0 ? (((((var_6 - var_4) >= (((((arr_1 [i_1] [i_1]) != -806580633048958326)))))))) : -806580633048958328);
        }
        arr_13 [i_1] = (arr_8 [i_1] [i_1]);
        var_11 = ((~(var_2 | -123)));
    }
    var_12 |= (((((((45 ? var_7 : var_1)) & (~65535)))) < (max(((var_4 ? var_0 : var_9)), (0 * 65520)))));
    #pragma endscop
}
