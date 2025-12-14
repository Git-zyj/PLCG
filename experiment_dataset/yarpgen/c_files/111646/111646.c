/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-1 ? var_6 : var_15));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 &= (min((~var_13), (arr_6 [i_0 - 1])));
                            var_19 = (((((arr_5 [i_3] [i_3 + 2] [i_3] [i_3]) / (arr_5 [i_0] [i_3 + 2] [i_3 + 2] [i_3 - 1]))) != -var_16));
                            var_20 = ((1040185343422147689 && (!var_7)));
                            var_21 = ((-(((119 * (arr_9 [i_2] [10]))))));
                        }
                    }
                }
                var_22 |= min((((((1 / (arr_5 [i_0 - 1] [i_0 + 1] [14] [3]))) | ((max((arr_3 [13]), (arr_9 [i_0] [i_1]))))))), (max(((8599348698777944932 ? var_2 : var_10)), (arr_4 [i_0 - 1] [i_0 + 1]))));
                var_23 = (max(var_23, (arr_3 [i_0 - 1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                {
                    var_24 = ((!(arr_18 [1])));
                    var_25 -= ((((min(var_1, (arr_14 [i_6] [i_6 - 1] [i_6 - 1])))) | (((!((min(var_10, 0))))))));
                }
            }
        }
    }
    #pragma endscop
}
