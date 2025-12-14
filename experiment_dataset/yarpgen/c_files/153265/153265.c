/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (!(0 + 1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 7;i_2 += 1) /* same iter space */
                {
                    var_14 = (min(var_14, var_8));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_15 = ((!(((~((~(arr_10 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_3] [i_3]))))))));
                        var_16 -= ((((max(1, -974055156))) > (min(16384, (-9223372036854775807 - 1)))));
                        arr_11 [8] [i_1] [i_1] [i_1] = 2975426857268110703;
                    }
                }
                for (int i_4 = 3; i_4 < 7;i_4 += 1) /* same iter space */
                {
                    var_17 += ((var_6 | ((((arr_5 [i_0 - 1] [i_4 - 1]) && (arr_5 [i_0 - 1] [i_4 - 1]))))));

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_18 -= ((!(arr_2 [i_0] [i_0 + 1])));
                        var_19 = ((var_3 ? ((((!(arr_16 [i_0] [i_4] [i_0] [i_4 + 3]))))) : (-1 | 2251799813685240)));
                        var_20 &= (arr_15 [i_0] [i_1] [i_4 - 2]);
                    }
                    var_21 = max((((40208 || (arr_5 [i_0] [i_0 + 1])))), var_0);

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_22 = ((~(arr_20 [i_4] [i_6] [i_6] [i_6] [3])));
                        arr_21 [i_0] [i_4] [i_4] [i_0] [i_0] [i_0] = (arr_3 [i_6]);
                    }
                }
                var_23 += (((((max((arr_9 [i_0] [i_1] [i_0] [i_1]), 2975426857268110703))) ? (arr_5 [i_0] [i_0]) : (((min((arr_6 [i_0] [i_1]), 29090)))))));
                var_24 = -4452103455097720621;
            }
        }
    }
    #pragma endscop
}
