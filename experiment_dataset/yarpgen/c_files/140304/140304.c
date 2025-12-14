/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((min((min(var_0, -1424829856)), var_7))), var_2));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_12 -= ((-(((1 ? 19424 : -19425)))));
            var_13 = max((max((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_0]))), (!var_2));
            var_14 = var_2;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_15 = (max(((max((!-19416), (max(19445, 2616978044))))), (var_2 + 14542939692710514387)));
                            arr_11 [i_4] [i_1] [14] [i_1] [i_1] [i_0] = ((-9223372036854775777 ? (((1 && ((min(1, 322945024360364314)))))) : 16384));
                            arr_12 [i_3] [i_3] [i_3] [i_3] [i_1] = 1;
                            var_16 -= -1945303292;
                            var_17 -= ((((((arr_9 [i_4] [6] [i_1] [i_4] [i_3 - 1]) & 322945024360364299))) ? (((arr_9 [i_4] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]) | (arr_9 [i_4] [20] [i_2] [i_3] [i_3 - 1]))) : (((15404212439902584326 ? 32753 : -32761)))));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_16 [i_1] [i_1] [i_1] = (!-32737);
                arr_17 [i_1] [14] = (arr_2 [23] [i_1]);
                var_18 += (arr_3 [i_0] [i_0] [8]);
            }
        }
        var_19 -= var_3;
    }
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 9;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                {
                    var_20 = (max(var_20, ((max(((((((arr_25 [i_6 - 1] [i_7] [i_6]) ? (arr_2 [i_6] [i_7]) : var_10)) <= (((~(arr_24 [2] [i_7] [i_7] [i_6]))))))), ((-32739 ? (arr_18 [i_7] [i_7]) : (var_7 + var_9))))))));
                    var_21 = (32753 << 1);
                }
            }
        }
    }
    #pragma endscop
}
