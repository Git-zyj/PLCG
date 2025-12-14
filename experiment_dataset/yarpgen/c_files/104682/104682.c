/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= -var_5;
    var_18 ^= ((((min(22996, 96))) ? (((22978 ? -23000 : 0))) : (min(var_5, var_7))));
    var_19 = (max((-22995 * var_11), (~2147483647)));
    var_20 = (min(32767, 1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_6 [i_0] = var_4;
                    var_21 = (min(var_21, ((((arr_3 [i_2] [i_1] [i_2]) ? (!-22996) : (var_2 > 123))))));
                }
                var_22 = (((((~((~(arr_2 [i_1])))))) ? ((((arr_0 [1]) ? (arr_0 [i_0]) : (((arr_4 [10] [i_1] [i_0]) % (arr_1 [i_1])))))) : (min(var_4, ((-111 ? (-9223372036854775807 - 1) : 2399566916))))));
                var_23 = var_10;
                var_24 = (((arr_4 [i_1 + 2] [i_1] [i_0 - 1]) ? ((((arr_2 [i_0 - 2]) != 96))) : (min((!var_15), ((var_2 ? var_7 : var_0))))));
                arr_7 [i_1] = (arr_5 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
