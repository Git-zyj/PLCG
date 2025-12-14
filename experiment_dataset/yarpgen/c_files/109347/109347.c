/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 16777216;
    var_21 -= ((!(((16777219 ? (((-122 ? 16777209 : 16777219))) : ((16777216 ? 15928660562883787459 : -89)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] [7] [i_0] = (arr_5 [i_0]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_22 = 43;
                            var_23 |= ((((((arr_3 [i_1]) ? 123 : 3722572734))) ? (((min((arr_3 [i_4]), 116)))) : 4278190076));
                            arr_14 [7] [7] [i_2] [i_2] [10] [i_2] [10] = max(-11078, (((!(arr_10 [i_0] [i_2] [i_3] [i_0])))));
                            arr_15 [1] [1] = 1152921504606846975;
                        }
                    }
                }
            }
            var_24 = (max(var_24, (((17859 == ((min(((min(-11078, var_10))), 4278190079))))))));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_25 = (max(((((((arr_7 [4] [i_0] [12]) % (arr_4 [i_0] [i_5])))) ? (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_5] [8] [9]) : 4773129527010047624)) : ((((arr_5 [i_5]) ? 16777221 : (arr_8 [12] [12] [12])))))), ((max((arr_7 [i_5] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_5]))))));
            var_26 = (((arr_16 [i_5] [i_5] [i_5]) & ((((arr_16 [i_0] [i_0] [i_5]) >= (arr_16 [i_0] [i_0] [i_0]))))));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_27 -= (max(11077, 6477662381393439234));
                    var_28 = (max(((-(arr_18 [i_6] [i_6]))), -26022));
                }
            }
        }
        arr_24 [i_0] = ((((max(var_13, (((var_8 || (arr_1 [i_0])))))))) & ((-(min(-11082, 285905711637693114)))));
    }
    var_29 = 11059;
    var_30 = var_9;
    #pragma endscop
}
