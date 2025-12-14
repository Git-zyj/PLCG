/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_4 | var_3) ? (-6419131236059786584 >= -464868225) : 9601955693904615973));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_18 &= (!var_3);
        var_19 = (max(var_19, ((((((-((max(var_3, var_3)))))) ? (((!((((arr_2 [i_0]) ? (arr_0 [i_0]) : var_3)))))) : (((!(arr_0 [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((~4567742218451696714) ? var_5 : var_12));
        arr_7 [i_1] [i_1] = 464868224;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    {

                        for (int i_5 = 3; i_5 < 8;i_5 += 1)
                        {
                            arr_20 [i_1] [6] [i_2] [i_2] [i_4] [7] [i_5] = (min(-194826450, (arr_14 [i_3 - 1] [i_4] [i_4 - 3] [i_5 - 2])));
                            var_20 = ((~(max((3875 + -24793), (arr_2 [i_5 + 2])))));
                            arr_21 [i_4] [i_2 - 1] [i_4] [i_4] = (((max(2147983139495448223, 24800))));
                            arr_22 [i_4] [i_4] = ((29 && 120) - ((min((8241078175189504667 != 24792), (7865556116475425374 || var_15)))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            var_21 = (max(var_21, ((((!-24793) << ((((var_12 ? 560214144 : var_4)) - 560214138)))))));
                            var_22 = -6761521684179558706;
                            var_23 &= ((634533090 ? var_5 : var_10));
                        }

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            var_24 = (arr_16 [i_1] [i_2] [i_3 - 1]);
                            arr_28 [i_1] [i_4] [7] [1] [i_7] [i_1] = (arr_8 [i_3 - 1] [i_2 + 1] [1]);
                            var_25 = (var_15 * -29029);
                            arr_29 [i_1] [i_2 - 1] [i_3 - 1] [i_7] [i_4] = (((arr_23 [i_7 + 1] [i_7] [i_7 + 1] [i_7] [i_7 + 1]) ? var_1 : (arr_10 [i_3 - 1])));
                        }
                        arr_30 [i_4] [i_4] [i_3 - 1] [i_4 - 3] [i_4] [i_3] = (!var_14);
                        arr_31 [i_4 - 3] [i_4] [i_3] [i_3 - 1] [i_4] [i_1] = ((!((max(var_10, (arr_16 [i_1] [i_2 - 2] [i_3]))))));
                    }
                }
            }
        }
        arr_32 [i_1] [i_1] &= 2147983139495448219;
    }
    var_26 = (max(((var_0 != (var_6 ^ var_3))), (!-3921494183)));
    #pragma endscop
}
