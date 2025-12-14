/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((max((min(var_6, var_4)), ((min(var_15, var_5))))), var_13));
    var_20 = var_15;
    var_21 = (min(var_10, var_17));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0 - 1] [i_0] = (min((min(77, 18446744073709551607)), (min(78, var_9))));
        arr_4 [i_0 - 1] [1] &= min((min((arr_1 [i_0 + 3]), var_0)), (max(-109, var_9)));
        var_22 = (max((min(var_11, (min(0, 14793053178901197200)))), ((min((arr_0 [i_0]), var_15)))));
        var_23 = max((max(6597444793255877937, -5266)), (min(1, 4294967295)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = 33554304;

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_24 = 1;
            arr_10 [i_1] = 4035225266123964416;
            arr_11 [i_1] [i_1] [i_1] = (-2147483647 - 1);
        }
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            var_25 = (max(var_25, 33554304));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_20 [i_1] [i_1] [i_1] = 18446744073709551615;
                        arr_21 [i_1] [0] [i_4] [i_1] [i_5] = 0;
                        arr_22 [i_1] [1] [i_1] = 77;
                    }
                }
            }
            var_26 = (-9223372036854775807 - 1);
        }
        arr_23 [i_1] = 1856633383344532589;
    }
    var_27 &= var_6;
    #pragma endscop
}
