/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_14;
    var_19 = (max(var_9, var_7));
    var_20 = (min(38245, -8071499552839048738));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_21 |= (max((((!(arr_5 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])))), var_9));
                        var_22 = 10936760352203878366;
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_23 = max(((~(((arr_7 [i_0] [i_0] [i_0]) ? 10936760352203878366 : var_17)))), ((max((max((arr_9 [i_0]), var_7)), ((max(-22468, (arr_3 [i_0]))))))));
                        arr_10 [i_0] [4] [13] [i_0] [i_4] = (((-1 && 1) - ((11873716106918644977 ? (arr_5 [i_0] [i_1] [i_4 + 1] [i_0]) : (arr_5 [i_0] [i_1] [i_4 + 1] [i_4])))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = (((((arr_6 [i_4] [i_4 + 2] [i_4] [i_4 + 1]) & (arr_8 [i_4 + 2] [1] [i_4 + 2] [i_4 + 2] [i_4 + 2])))) ? (((arr_8 [i_0] [i_2] [i_0] [i_0] [i_0]) | 10)) : (arr_6 [i_4 + 2] [i_4] [i_4 - 1] [i_2]));
                    }
                    arr_12 [i_0] [i_0] [i_0] = ((-(((arr_8 [12] [i_1] [i_1] [i_0] [i_0]) % (arr_8 [4] [1] [i_2] [12] [1])))));
                }
                var_24 = 0;
                arr_13 [1] = min((((arr_3 [i_0]) == (arr_3 [i_0]))), (min((arr_3 [i_0]), (arr_3 [i_0]))));
            }
        }
    }
    #pragma endscop
}
