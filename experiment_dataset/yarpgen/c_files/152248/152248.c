/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (((max(((min(var_4, var_3))), (min(1021828463, var_9)))) > (var_5 >= var_6)));
    var_11 = var_5;
    var_12 = ((var_1 > (max(1021828463, 1021828463))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min(((1021828463 ^ (~-256827753))), (~var_3)));
        var_13 += (max(((((~1021828452) > var_0))), ((max(26355, var_0)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_14 += ((255 <= (3273138832 && 8832)));
            arr_5 [i_0] [i_0] = ((var_3 / (arr_0 [i_0])));
        }
    }
    var_15 = (min(var_15, (((((max(-3273138851, (1021828435 ^ 1021828435)))) || (((min(var_4, 1021828450)))))))));
    #pragma endscop
}
