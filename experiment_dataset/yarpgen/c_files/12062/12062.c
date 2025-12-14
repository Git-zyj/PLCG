/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (((!65535) ? (max(var_1, ((65535 ? (arr_2 [i_0] [i_0]) : 1)))) : (((((arr_2 [i_0] [i_0]) - 425809195)) | (0 < var_0)))));
        arr_4 [i_0] = 11516250305070110692;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_11 = (max(var_11, ((var_5 ? 46270 : 0))));
                        var_12 = (min(var_12, (((((-((min(1, var_5))))) ^ var_6)))));
                        var_13 = max(((var_0 ? (arr_10 [i_3 + 1] [i_3] [i_3 - 1] [i_3] [i_3 - 2]) : 1082504775)), (arr_1 [4]));
                        var_14 = var_5;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_15 = var_9;
                        var_16 = (((arr_5 [i_1] [i_1]) ? (max(-1289750487, (arr_5 [i_0] [i_1]))) : ((max((arr_5 [i_4] [i_0]), (arr_5 [i_0] [i_1]))))));
                        var_17 = (arr_5 [i_4] [i_1]);
                        var_18 = ((~(((((max((arr_9 [i_0] [i_1] [i_2] [i_4] [i_1] [i_1]), (arr_3 [i_0] [i_1])))) || (arr_5 [i_4] [i_2]))))));
                        var_19 = ((((!(arr_13 [i_0] [i_0]))) ? (((max(65522, 1)))) : -var_7));
                    }
                    var_20 = ((~(max(-7633304163644796071, 46258))));
                    var_21 = var_0;
                }
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
