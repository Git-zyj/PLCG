/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_11 = 65535;
        var_12 *= (arr_1 [i_0 + 3]);
        arr_2 [0] = ((~(((arr_0 [1]) ^ (var_7 < 14)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((((arr_8 [i_2 - 2] [i_2 + 2] [i_2 - 1]) ? (((arr_8 [i_2 - 1] [i_2 + 3] [i_2]) ? (arr_8 [i_2 - 1] [i_2 + 2] [i_2 + 3]) : (arr_8 [i_2 + 1] [i_2 + 3] [i_2 - 1]))) : (((arr_8 [i_2 - 2] [i_2] [i_2 + 3]) | (arr_8 [i_2 - 2] [i_2] [i_2 - 1]))))))));
                    var_14 = (((min(1, (min((arr_1 [i_1]), 17))))) != (min((arr_3 [i_0 + 3] [i_2 - 1]), (-488748754 & -11819))));
                }
            }
        }
    }
    var_15 = (var_0 * var_5);
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_16 = (min(((((var_8 ? (arr_1 [i_5]) : var_3)))), (min((var_5 - var_4), (arr_9 [i_3] [8])))));
                    var_17 = (((((9973473596283665679 && (arr_7 [i_3] [i_4] [i_5])))) ^ ((-(arr_7 [i_5] [i_4] [i_3])))));
                    arr_16 [i_3] [i_4] [i_4] [i_3] = 31;
                }
            }
        }
    }
    var_18 = (max(((((-32267 ? var_5 : 6)) | ((-11 ? var_9 : 1)))), (min(var_5, (~17964)))));
    var_19 &= 24;
    #pragma endscop
}
