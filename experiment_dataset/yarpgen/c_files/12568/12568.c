/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = 2448032605;
                var_12 = (max(var_12, ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) * (((arr_2 [i_0]) * 0)))))));
            }
        }
    }
    var_13 = (((var_8 ? 17348115795122802215 : (~var_1))) ^ (min(var_3, (max(var_8, var_2)))));
    var_14 = (min(var_14, ((33 ? ((var_0 ? (min(var_4, var_4)) : var_2)) : var_8))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_15 = (min((!var_5), (-10668 || 1098628278586749400)));

                            for (int i_6 = 0; i_6 < 25;i_6 += 1)
                            {
                                var_16 += ((((!(arr_17 [i_5] [i_3] [i_4] [1] [i_4] [i_2]))) || var_10));
                                arr_20 [i_2] [i_5] [i_4] [i_3] [i_2] [i_2] [i_2] = (((((7476476849580662839 ? (arr_12 [i_3] [i_3] [i_3]) : 2448032605))) ? (min(10667, (arr_19 [i_3 - 3] [i_3 - 3] [i_3 - 3] [i_2] [i_3 + 1]))) : ((min((arr_12 [i_3] [i_3] [i_3]), (arr_12 [i_2] [i_2] [1]))))));
                            }
                            for (int i_7 = 0; i_7 < 25;i_7 += 1)
                            {
                                var_17 *= 1;
                                arr_23 [i_2] [i_2] [6] [i_2] [i_2] [i_2] = (~var_5);
                                arr_24 [0] [i_2] [i_4] [0] [i_7] [i_3] [i_3] = (((((186 ? 1098628278586749400 : 17348115795122802215))) ? (((arr_3 [i_2] [i_3 - 3] [i_4]) ? (arr_18 [i_2] [i_7] [i_4]) : (arr_3 [i_5] [i_3 - 3] [i_4]))) : (arr_3 [i_2] [i_2] [i_3 - 3])));
                                arr_25 [i_2] = -61;
                            }
                            var_18 -= -10668;
                            var_19 = ((-(arr_3 [i_2] [i_5] [i_4])));
                        }
                    }
                }
                arr_26 [i_2] [i_2] = ((-(!17348115795122802215)));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            var_20 += (max(((min((arr_30 [i_2] [i_3] [i_3 - 1] [6]), (arr_32 [i_3] [1] [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3])))), (min(((min(var_10, (arr_3 [19] [i_3] [13])))), (var_2 * 0)))));
                            var_21 = (max(var_21, ((min(((((max(var_2, var_2))) ? (var_3 + 16453) : ((2121870967 ? -12 : (arr_4 [i_9]))))), (((var_6 ? (arr_15 [i_2] [i_2] [i_8] [i_9]) : (arr_27 [i_3 - 2] [i_8] [i_8] [i_9])))))))));
                            arr_33 [i_2] [i_2] [i_8] [i_8] [i_2] [i_2] = (((min((!9994), -961072956)) | ((-((((arr_0 [i_2] [i_2]) > (arr_19 [22] [i_3] [i_8] [i_2] [i_3]))))))));
                            var_22 = (min(var_22, (arr_0 [i_3 + 1] [i_8])));
                        }
                    }
                }
            }
        }
    }
    var_23 = (((var_5 - (min(var_4, var_8)))));
    #pragma endscop
}
