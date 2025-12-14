/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_20 += ((!(((37 ? 255 : -92)))));
        var_21 = 34031;
        var_22 = (arr_0 [i_0 - 2]);
        arr_4 [i_0] = (!var_1);

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_23 = 153;
            var_24 |= var_6;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_25 = (max(var_25, 4052075166482254639));
                            arr_15 [i_0] [i_2] [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_0] = -97;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 9;i_5 += 1) /* same iter space */
    {
        var_26 = (max(var_26, (!var_4)));
        var_27 ^= (var_14 ^ 30251);
    }
    var_28 = var_11;
    var_29 = (min(var_29, (!55)));
    #pragma endscop
}
