/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 13397370165131860195;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (((max((min((arr_4 [i_0] [i_1 + 1]), 8299376212105401203)), (arr_3 [i_0] [i_0] [i_0]))) | ((max((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), 29115)))));
                arr_6 [i_0] = 10147367861604150412;
                arr_7 [i_0] = ((((((arr_4 [i_1 - 1] [i_1 + 1]) & (arr_4 [i_1 + 1] [i_1 + 1])))) ? (((326618023 ? (arr_4 [i_1 + 1] [i_1 - 1]) : (arr_4 [i_1 - 1] [i_1 - 1])))) : (~18138497443871976527)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_14 [i_3] = 17290811799207211581;

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        arr_18 [i_5 + 2] [i_4] [i_3] [i_3] [i_2] = (((((-(arr_13 [i_3])))) ^ ((5049373908577691420 ? 3968349272 : 12460326167397702603))));
                        arr_19 [i_3] [i_3] = arr_16 [i_2] [i_2] [i_2] [i_2];
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_16 += 185;
                        var_17 = ((var_1 ? -29116 : ((((120 ? (arr_13 [i_3]) : 1))))));

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_18 = ((1 ? 25246 : -1165535438));
                            var_19 = ((+(min(((min((arr_15 [i_2] [i_3] [i_4] [i_4]), (arr_25 [i_3])))), (max(0, (arr_23 [i_7] [i_6] [i_4] [i_3] [i_2 - 1])))))));
                            arr_26 [i_7] [i_6] [i_3] [i_2] [i_2] = ((+(((7983894024152052978 + 11) ? (((arr_11 [i_3] [i_6] [i_3]) ? 141 : (arr_21 [i_7] [i_4] [i_3] [i_2]))) : (((((arr_15 [i_2 - 2] [i_3] [i_3] [i_7]) != (arr_10 [i_6] [i_7])))))))));
                        }
                        var_20 += var_14;
                        arr_27 [i_3] [i_3] [i_3] [i_4] [i_4] [i_3] = (min((min((arr_3 [i_3] [i_2 + 1] [i_3]), 13397370165131860209)), 3417570432138051663));
                    }
                }
            }
        }
    }
    #pragma endscop
}
