/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_10 = (min(var_10, ((min((arr_11 [i_0] [2] [18] [i_2] [i_0] [i_4 + 2] [i_4]), (((-46 + 2147483647) >> (var_8 - 56))))))));
                                var_11 = (max(var_11, (((43 ? 1048574 : 29728)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_12 -= ((((((max(var_0, var_9))) + 2147483647)) >> (((((max((arr_11 [10] [10] [i_1] [i_1] [i_1] [i_5] [i_6]), var_0))) || (arr_9 [i_2 - 2]))))));
                                var_13 *= var_9;
                            }
                        }
                    }
                    arr_17 [i_2] = (max(((min(var_8, var_8))), (((arr_9 [i_2 - 2]) ? (arr_9 [i_2 - 1]) : (arr_9 [i_2 - 3])))));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_14 = ((((min((arr_20 [i_7] [i_7]), var_9))) ? (arr_8 [i_7]) : (arr_15 [10] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])));
        var_15 = (arr_12 [i_7] [i_7] [19] [i_7] [i_7] [i_7]);
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    var_16 = (min(var_16, (((+((+((((arr_5 [i_7] [i_8 - 2] [i_8] [i_7]) <= var_8))))))))));
                    var_17 = ((-((min(45, var_0)))));
                    var_18 += ((((~(arr_21 [i_8 + 1] [i_8 - 1]))) * (((~35807) / (arr_11 [i_9] [i_9] [i_7] [1] [i_7] [1] [i_7])))));
                    var_19 = ((+(((arr_3 [i_7]) ? 12 : ((449324396 ? (arr_26 [i_7] [i_7] [i_9]) : 49592))))));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_20 = ((((min((arr_11 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]), (arr_11 [i_10] [19] [9] [19] [15] [8] [i_10])))) ? (var_0 != 27801) : (arr_11 [20] [14] [i_10] [i_10] [i_10] [i_10] [i_10])));

        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_21 = (max(var_21, ((min(((1190913201876277109 ? (arr_5 [i_10] [i_10] [18] [i_10]) : (arr_5 [i_10] [i_11] [10] [i_10]))), ((min(99, (arr_5 [15] [i_11] [i_11] [i_11])))))))));
            var_22 = (max(var_22, ((((var_4 * 17356817315504939678) != ((max(2071933525, var_1))))))));
        }
        for (int i_12 = 1; i_12 < 21;i_12 += 1)
        {
            arr_35 [i_10] = ((+((((arr_33 [i_10] [i_12]) && (arr_33 [i_10] [i_12]))))));
            arr_36 [i_10] = (~54);
        }
    }
    var_23 = 4294967272;
    #pragma endscop
}
