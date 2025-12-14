/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_1] = (min(-19, -177));
                var_19 = ((~(min((var_10 && 5587943100887827461), ((var_5 >> (((arr_6 [i_0]) - 12632))))))));
                arr_8 [i_0] [i_1] = ((-(arr_5 [i_1])));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_11 [i_2] &= ((-(!1)));
                    var_20 = (((((((max(65516, (arr_3 [i_1] [7])))) ? -177 : ((var_1 ? var_1 : -24592))))) || (((var_12 ? (arr_5 [i_1]) : (arr_5 [i_1]))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_21 = ((((max((arr_0 [i_1 - 1] [i_1 - 1]), (arr_0 [i_1 - 1] [10])))) - ((((((var_7 - (arr_1 [i_1]))) + 2147483647)) << (((min(var_3, -1)) - 9165243788532983272))))));
                            var_22 = 972360893198620911;
                            arr_18 [i_0] [10] [10] [i_1] [i_4] = ((16 + ((((-14 ? 12935829474037480129 : (arr_6 [i_0]))) * (0 > var_8)))));
                            var_23 = var_12;
                            arr_19 [i_1] = -1598157817;
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            var_24 = ((-(arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                            var_25 = (min(var_25, (arr_5 [i_2])));
                        }
                        var_26 &= (~9023);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_1] [i_2] [i_1] = ((~(arr_16 [i_1])));
                        arr_26 [i_1] [2] = ((var_8 ? (6 >= var_15) : (arr_12 [i_0] [i_1 - 1] [i_1 - 1])));
                    }
                }
            }
        }
    }
    var_27 = 9223372036854775807;
    #pragma endscop
}
