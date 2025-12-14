/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((min(var_3, (arr_1 [i_0] [i_0]))), ((max(-16330892, -1049707079)))));
        arr_3 [i_0] = (max((max((min((arr_1 [i_0] [13]), -7641242631065078639)), ((max(var_6, (arr_1 [i_0] [i_0])))))), ((max((arr_0 [i_0] [i_0]), 1923160165)))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_12 = (max(var_12, ((max((max((arr_7 [i_1] [i_1]), var_8)), ((max((arr_5 [i_1] [i_1]), (arr_5 [1] [i_1])))))))));
        arr_8 [1] = (min((max(((min(7641242631065078638, 20926))), (max(7641242631065078638, (arr_7 [i_1] [i_1]))))), ((max((arr_6 [i_1]), (min(var_2, 1049707078)))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = (max(((max(2894, 11186))), (min((arr_9 [i_2]), (arr_9 [i_2])))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_13 = (min((max(761333518, 1)), ((max(var_8, (arr_13 [i_4 - 1] [i_5] [i_5]))))));
                        var_14 = (max((max(((min(1, -111))), (arr_17 [i_5] [i_5] [1] [i_2]))), ((max((arr_4 [i_4 - 2]), 1)))));
                        var_15 = (min((max(2453105278, var_10)), ((min(var_7, (arr_13 [i_4] [i_4 + 1] [i_3]))))));
                        arr_19 [i_5] [i_5] [i_4 - 2] [i_4 - 2] = (max((min(((min(var_2, (arr_14 [i_3] [i_5])))), (max(var_4, (arr_7 [i_5] [i_5]))))), ((max((max(var_4, (arr_4 [i_3]))), ((min(var_8, (-32767 - 1)))))))));
                    }
                }
            }
        }
        var_16 += (max((max(-8269031470661758151, ((max(62372, 62365))))), 0));
        var_17 = (max((max((arr_7 [i_2] [i_2]), ((max((arr_6 [i_2]), (arr_5 [10] [10])))))), ((max(var_8, 27107)))));
        var_18 = (max(var_18, ((min((min(((min(var_3, var_7))), (max(-6570044127535408580, -6715)))), ((max((max(var_4, (arr_16 [i_2] [i_2]))), (max((arr_17 [i_2] [i_2] [i_2] [i_2]), (arr_18 [i_2] [i_2] [i_2] [i_2] [12])))))))))));
    }
    var_19 = (max((max((min(var_8, var_7)), var_9)), (max(65535, -1835))));
    #pragma endscop
}
