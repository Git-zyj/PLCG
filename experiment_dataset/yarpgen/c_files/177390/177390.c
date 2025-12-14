/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_2] [i_0] [i_2] = var_9;
                    var_19 = ((((((arr_1 [i_2 + 1]) ? (arr_4 [i_0] [i_2 + 3] [i_2]) : (arr_1 [i_2 - 2])))) ? (((arr_1 [i_2 + 2]) - (arr_4 [i_1] [i_2 + 2] [i_1]))) : (min((arr_4 [i_0] [i_2 + 1] [7]), (arr_1 [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (~28226)));
                                var_21 = (min(((((arr_10 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 + 3]) || ((min(-1202911256157397998, (arr_2 [i_0]))))))), (32628 || -1)));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (((min((arr_2 [i_2 + 1]), (arr_2 [i_2 + 1])))) >= ((((arr_2 [i_2 - 1]) == (arr_2 [i_2 + 1])))));
                            }
                        }
                    }
                    var_22 = ((~(arr_2 [8])));
                    arr_14 [i_2] = (((arr_5 [i_2 + 2] [i_2 + 3]) ? (((((14396709230533089287 ? 9173360705044014721 : 81))) ? -44 : (~9173360705044014721))) : (((~(~var_3))))));
                }
                for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_1] [i_0] = (((arr_3 [i_1]) << (((max((arr_5 [i_5 - 2] [i_1]), (((!(arr_1 [i_5])))))) - 15439856925482035561))));
                    var_23 = (min(((!(~255))), ((!(arr_16 [i_5 + 3] [i_5] [i_5 + 3])))));
                    arr_18 [i_0] [i_0] = arr_10 [i_0] [i_1] [i_1] [10];
                }
                var_24 = 255;

                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    var_25 = (max(var_25, ((((~((399467643 ? 37310 : (arr_6 [4] [i_0] [i_1] [i_6])))))))));

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_26 = (arr_9 [i_0] [i_1] [10] [i_0]);
                        var_27 = (min(var_27, 81));
                    }
                    var_28 = (min((min((arr_4 [i_6 - 2] [i_1] [i_0]), (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? 37310 : 4050034843176462329)))), (((18446744073709551615 < (arr_24 [i_6 - 1] [i_1] [i_6 + 1] [i_0]))))));
                    var_29 += (max((arr_25 [i_0] [10] [i_1] [10] [i_6] [i_6 - 2]), 14396709230533089287));
                }
            }
        }
    }
    var_30 = var_0;
    var_31 = (max(var_31, (((100 ? (min((!-5557191985957785907), (min(4577387576082380796, 37310)))) : ((var_14 ? 1928141051900139035 : 45544)))))));
    #pragma endscop
}
