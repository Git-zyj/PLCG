/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_9, var_7));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = -256071569;
        var_12 = (min(var_12, (((((min(var_8, 256))) ? var_0 : (((((~(arr_1 [19] [i_0])))) ? 1 : 222)))))));
    }
    var_13 = 77;

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = ((-(max(89, var_10))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    {
                        var_15 = ((((max((arr_0 [i_4]), (arr_0 [i_4 - 1])))) ? (arr_7 [i_4 + 1]) : (arr_7 [i_4 + 1])));
                        var_16 = (max(var_16, ((max((((arr_2 [i_2 - 1] [i_2 + 3]) ? var_6 : (arr_2 [i_2 + 1] [i_2 + 4]))), ((((arr_2 [i_2 - 1] [i_2 - 3]) >= (arr_2 [i_2 + 1] [i_2 - 1])))))))));
                        arr_15 [i_4] [i_3] [i_2] [1] = (max(16865, (arr_10 [i_1] [1] [1])));
                    }
                }
            }
        }
        arr_16 [i_1] = (max((arr_11 [i_1] [i_1] [2]), ((((((arr_5 [i_1] [i_1]) && 49769))) != (arr_1 [16] [i_1])))));
    }
    #pragma endscop
}
