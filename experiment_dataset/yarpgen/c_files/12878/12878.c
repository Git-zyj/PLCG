/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0]) && (((((max((arr_0 [i_0]), var_12)))) >= ((var_4 / (arr_1 [i_0])))))));
        var_21 = (max(((var_11 | (arr_0 [i_0]))), (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = (((23329 > (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_22 *= (((arr_7 [i_2 + 3]) ? (arr_6 [i_3]) : -5197648042654691548));
                    arr_10 [i_1] [i_1] [i_1] = arr_9 [i_1];
                    var_23 ^= (((((arr_8 [i_3]) < (arr_3 [i_3]))) ? ((((var_1 == (arr_7 [i_2 + 1]))))) : (arr_3 [i_3])));
                    var_24 = ((((var_18 < (arr_7 [i_2 + 2])))));
                    arr_11 [i_1] = (max(3, var_14));
                }
            }
        }
        arr_12 [i_1] = (min(((+(((arr_5 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))))), var_16));
        arr_13 [i_1] = ((((((var_15 * (arr_3 [i_1]))))) ? (arr_3 [i_1]) : ((((((arr_6 [i_1]) % 1296791775)))))));
    }
    var_25 = var_8;
    var_26 &= ((max(var_0, (((var_17 ? var_3 : 2147483647))))));
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                arr_18 [i_4 - 2] = -7214136254844745894;
                arr_19 [i_5] = (((max(var_1, (((-(arr_1 [i_4])))))) > (arr_1 [i_5])));
            }
        }
    }
    var_27 = (max(((max(var_16, 1))), (max(4022156343495285983, (var_16 * 3)))));
    #pragma endscop
}
