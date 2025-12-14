/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((998582652 + ((min(var_8, 64000))))) * (((1535 + 1535) / var_12))));
    var_17 = ((min((1535 / var_12), (0 + var_4))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_18 += ((!(arr_0 [i_0])));
                        var_19 = (min(var_19, ((((arr_3 [i_3] [i_1]) ? ((min(34608, 151))) : ((min((arr_3 [16] [i_1]), 132))))))));
                    }
                }
            }
        }
        var_20 = ((!(103 && 30929)));
    }
    for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
    {
        var_21 = 1355397048;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                {
                    var_22 = ((((min(-793316043, (arr_9 [i_4])))) || ((min((arr_9 [i_4]), (arr_9 [i_4]))))));
                    var_23 = 1535;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
    {
        var_24 = (((arr_13 [i_7 + 2] [i_7 + 2]) | (arr_13 [i_7 - 2] [i_7 - 2])));

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_25 = (arr_10 [i_7]);

            for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
            {
                arr_26 [7] = (arr_13 [2] [i_8]);
                var_26 = (((arr_15 [i_7] [i_8]) ? 50947 : ((89 >> (var_12 - 7323)))));
                var_27 = (arr_25 [i_7 + 2]);
                var_28 = (((arr_1 [i_8] [i_8]) & (arr_17 [7] [i_7 - 1] [1] [i_7 - 1])));
            }
            for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
            {
                var_29 = ((((-(arr_28 [i_7] [i_7] [4])))) ? 30928 : (arr_27 [i_7 - 1]));
                var_30 = (min(var_30, (~-23455)));
            }
            arr_29 [i_7 - 2] [i_8] = 35472;
        }
    }
    #pragma endscop
}
