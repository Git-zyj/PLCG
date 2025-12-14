/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (!var_12);

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_20 = (max(var_20, var_2));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_11 [i_3 + 1] [i_3 + 1] [i_2] [i_3] = ((!(arr_6 [i_0 - 1] [i_3 + 2] [i_3] [3])));
                        var_21 = (min(var_21, (((27 ? 26091 : (arr_9 [i_0 + 1] [i_0 - 2]))))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_22 = (min(4757563521578578073, 22816));
            var_23 = ((((((arr_9 [i_0] [i_4]) >> ((((min(var_16, var_18))) - 51397))))) ? (((((((arr_5 [i_0] [i_4]) ? var_14 : (arr_10 [i_4] [i_0] [i_4] [i_4])))) ? (!var_9) : (1 && 21)))) : ((((!(arr_6 [i_4] [i_4] [i_4] [6]))) ? var_18 : (((arr_0 [i_0] [i_4]) ? var_14 : (arr_6 [i_0] [i_0 - 1] [i_0] [i_0])))))));
            var_24 = ((!((!(((1 ? var_6 : (arr_0 [i_0] [i_4]))))))));
        }
        for (int i_5 = 3; i_5 < 24;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 23;i_6 += 1)
            {
                var_25 = ((((var_13 ? (arr_4 [i_0]) : (min(var_6, 6603770793208740202)))) % (((arr_19 [i_0 - 2] [i_5] [i_6 + 2] [i_6 + 2]) ? (arr_9 [i_0 + 1] [i_5 - 1]) : (arr_9 [i_0 - 1] [i_5 - 1])))));
                var_26 = (max(var_26, (((((((((arr_8 [i_0] [i_5] [i_5] [i_5]) ? var_12 : 3479366498))) || (arr_7 [i_0] [i_0 - 1] [i_5 - 3] [i_5 - 3]))) ? 234 : 8108845381085551257)))));
            }
            var_27 = (arr_0 [i_0] [i_0]);
        }
    }
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        var_28 = (((((var_2 ? var_6 : (arr_16 [18] [16])))) && ((min((arr_16 [i_7] [18]), (arr_16 [i_7] [16]))))));
        arr_24 [i_7] |= 59;
        arr_25 [i_7] = ((((((arr_21 [i_7 - 1] [i_7 - 1] [22]) ? var_18 : (arr_21 [i_7 - 1] [i_7 - 1] [2])))) ? ((((((var_3 ? var_18 : var_5))) ? 35580 : (min(5355, 3))))) : (min((arr_7 [4] [i_7 + 2] [i_7 + 2] [i_7]), var_1))));
    }
    var_29 = (((min(var_0, var_17)) > var_1));
    #pragma endscop
}
