/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = ((-var_1 > (((var_7 > (arr_0 [i_0]))))));
        arr_2 [i_0] = 341838144;
        arr_3 [i_0] [i_0] = var_4;
        arr_4 [i_0] = ((-(((var_6 <= ((min((arr_0 [i_0]), 1))))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_17 = (((var_0 * (arr_7 [i_1]))));
        arr_9 [9] = (arr_6 [i_1]);
        var_18 += (((((127 << (-var_15 + 577153664)))) ? var_2 : ((min((arr_1 [i_1]), 137438953471)))));
    }
    var_19 = (min(var_2, (~41028)));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_20 = var_10;
                    var_21 ^= (max((2999642304868945219 + 8), (((max(var_0, 7829358834529882151)) | (8 / var_4)))));
                }
            }
        }
    }
    #pragma endscop
}
