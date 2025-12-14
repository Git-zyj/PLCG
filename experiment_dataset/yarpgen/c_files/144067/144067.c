/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_3 < var_12) ^ ((-(max(var_11, var_13))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 ^= (((((((((arr_2 [i_0] [i_0]) / var_8))) + 2171970368))) ? (14028609538944501273 / var_14) : (((((min(-1, 18)) != (max((arr_2 [i_0] [i_0]), -829907047))))))));
        arr_3 [i_0] [i_0] = (((-1 * 1) / (((4 << (496 != 15360))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_12 [i_1] |= (min(((+((max((arr_7 [i_1] [i_2] [i_3]), (arr_4 [14])))))), ((-((((arr_11 [i_3] [i_1] [12]) >= 255)))))));
                    var_18 = (max((((-(((arr_10 [i_1] [i_2]) * -14))))), (min(4418134534765050335, (arr_5 [i_3] [i_3])))));
                }
            }
        }
        arr_13 [i_1] [i_1] = (((((max(var_3, (arr_10 [i_1] [i_1]))) ? (var_0 <= 1) : (arr_11 [i_1] [i_1] [i_1])))));
        var_19 = ((+((((min((arr_4 [16]), (arr_11 [14] [i_1] [i_1])))) ? (arr_7 [3] [i_1] [i_1]) : ((~(arr_7 [i_1] [i_1] [i_1])))))));
    }
    var_20 = var_5;
    var_21 |= (((max(var_8, var_8))));
    #pragma endscop
}
