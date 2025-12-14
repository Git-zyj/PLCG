/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((((1 || var_10) ? (9223372036854775807 || 2911209009) : var_4))) ? (((!(!var_4)))) : (var_11 && var_9)))));
    var_14 *= (33 <= var_0);
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_16 = ((((((((arr_4 [i_0]) ? 6217857434288877695 : 3365300780))) && 57784)) ? (~var_5) : (((!(((550573494 ? -5598313437424474236 : (arr_3 [i_1] [i_2])))))))));
                    var_17 = (!3203240865294840408);
                    var_18 -= (((max((arr_2 [i_0] [0] [0]), (arr_2 [i_0] [i_1] [i_1]))) ? (min((arr_2 [i_0] [i_0] [i_0]), (arr_1 [i_2]))) : ((-((4194303 ? (arr_2 [4] [i_1] [i_2]) : (arr_4 [i_0])))))));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_19 = (max(1, (((((0 < (arr_2 [i_0] [i_1] [i_3])))) - 1))));

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_20 -= var_6;
                        var_21 |= ((-((var_8 / ((57784 ? (arr_11 [i_4] [i_3] [i_1] [i_0]) : (arr_4 [i_0])))))));
                        var_22 = (min(1, 3083766922));
                        var_23 = max(((max(((1 ? 18164 : -1814713707)), (arr_3 [i_1] [i_3])))), ((7806591331236115529 ? (arr_10 [12] [i_1] [i_3] [i_4]) : 9223372036854775807)));
                    }
                    var_24 *= -6071;
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_25 = (max(var_25, (~var_6)));
                            var_26 = (((((((max(1421690016750295674, 0))) ? 3365300790 : 1727276313301217357))) ? (((-(arr_0 [i_5])))) : (2042710593 / 55084)));
                            var_27 -= -32;
                            var_28 = (var_1 == (var_12 * 7975467895938377852));
                            var_29 = (((arr_1 [i_1]) < ((((var_2 == (arr_16 [i_0] [8] [i_6]))) ? (arr_9 [9] [i_5] [9] [i_0]) : ((var_11 ? var_5 : 9205357638345293824))))));
                        }
                    }
                }
            }
        }
    }
    var_30 = (((((-((9223372036854775807 ? 55091 : 9205357638345293836))))) ? (~var_1) : var_7));
    #pragma endscop
}
