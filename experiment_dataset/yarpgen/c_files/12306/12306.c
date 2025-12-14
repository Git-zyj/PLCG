/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((max(14872645143609742969, (min((((1 ? var_9 : 0))), var_0)))))));
    var_11 *= (var_8 != var_3);

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((arr_2 [14]) + (((arr_2 [i_0]) % (arr_2 [12])))))) ? (max(((max((arr_1 [i_0 - 2]), var_4))), (max(2975005383611192909, (arr_0 [i_0]))))) : (arr_2 [i_0])));
        arr_4 [i_0] = (max((min((((arr_1 [0]) ? (arr_2 [i_0 + 1]) : var_0)), 256647518)), (max((max((arr_0 [i_0]), var_3)), (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (arr_10 [i_0] [i_0] [i_0])));
                    var_13 = ((((max((arr_9 [i_0] [i_0 + 1] [i_0 - 2]), 2047))) || ((max(-1, 0)))));
                    arr_11 [16] [4] [i_2] |= arr_1 [2];
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_14 = ((var_3 ? ((max(var_4, var_9))) : (arr_10 [2] [i_3] [4])));
        var_15 = (((arr_9 [1] [1] [i_3]) | (max(14148497504347426800, -8769303162266006439))));
        arr_14 [i_3] = (arr_13 [i_3]);
        var_16 = (min((((0 >> (5611068618255393389 - 5611068618255393369)))), ((127 ? (-9223372036854775807 - 1) : 2251799813685248))));
        arr_15 [i_3] = (arr_2 [i_3]);
    }
    #pragma endscop
}
