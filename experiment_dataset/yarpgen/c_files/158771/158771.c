/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_13 = (min(var_13, (((arr_1 [i_0]) ? (((((455736997611047121 ? (arr_1 [2]) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (arr_0 [7]))) : ((((~var_11) << (((arr_0 [i_0]) - 4053)))))))));
        var_14 = (((min(var_7, (arr_0 [i_0 - 2]))) != ((var_4 ? (!1) : var_8))));
        var_15 = (max(((0 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]))), ((((max(-1, (arr_0 [i_0 - 3]))) - var_11)))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            var_16 = ((((((arr_10 [i_1 + 1] [i_2 - 1]) / (arr_10 [i_1 - 1] [i_2 - 3])))) ? (max((arr_10 [i_1 + 1] [i_2 - 3]), (arr_10 [i_1 + 1] [i_2 - 2]))) : (((arr_10 [i_1 + 1] [i_2 - 1]) ? -4 : (arr_10 [i_1 + 1] [i_2 - 2])))));
                            var_17 = ((!(((~(((arr_5 [2] [i_2] [i_4 + 1]) ? -10 : (arr_0 [i_4 + 1]))))))));
                            var_18 ^= (((max(((min((arr_6 [8]), (arr_0 [4])))), (min((-127 - 1), (arr_9 [10] [4]))))) + (((-(!var_6))))));
                            var_19 = (arr_0 [i_0 - 1]);
                        }
                        arr_13 [i_1] [i_1] [i_1] [i_1] = (!((min((var_11 <= 1), (arr_10 [i_2 - 3] [i_1 + 1])))));
                        var_20 = (~-0);
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, ((max((!var_2), ((-21 ? var_12 : var_6)))))));
    var_22 = 0;
    var_23 = (max((~6765556467130027864), (max((((68 ? 0 : var_2))), var_4))));
    #pragma endscop
}
