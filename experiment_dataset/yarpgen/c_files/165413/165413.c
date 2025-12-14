/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_6;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = max((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [2]))), (min((arr_0 [19]), (arr_0 [i_0]))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                var_13 ^= (((min((arr_5 [i_2 + 1] [i_0] [i_2 - 1]), (arr_5 [i_2 - 1] [i_1] [i_2 - 1]))) != (((min((arr_3 [i_1] [i_2]), (arr_3 [i_0] [i_2 - 2])))))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_11 [i_0] [i_2] [i_0] [i_0] = (((arr_8 [i_2] [i_1] [i_2 - 1] [i_2] [i_2 - 1]) || (arr_8 [i_0] [i_1] [i_2 + 1] [i_1] [i_1])));
                    var_14 = (max(var_14, (((24 < (((arr_5 [14] [i_3] [i_2]) ? (arr_5 [i_0] [i_1] [4]) : (arr_5 [i_0] [i_3] [i_0]))))))));
                    var_15 = ((!(arr_2 [i_0] [i_1])));
                    var_16 = ((((arr_6 [i_0] [i_1] [13] [i_3]) ? (arr_2 [i_0] [i_2]) : var_9)) != (arr_10 [18] [i_1] [i_2] [i_3]));
                }
                for (int i_4 = 4; i_4 < 20;i_4 += 1)
                {
                    var_17 -= ((((((arr_2 [i_4 - 4] [i_4]) & (arr_2 [i_4 + 1] [i_4])))) ? (arr_8 [i_2 + 1] [i_4 - 2] [i_2 - 2] [i_4] [i_1]) : (((arr_9 [i_4] [i_1] [i_1] [16]) ? (arr_6 [i_4] [i_0] [i_1] [i_0]) : ((36 ? (arr_15 [i_1] [9]) : (arr_8 [i_0] [11] [i_1] [i_2 + 1] [i_4])))))));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_18 = (i_2 % 2 == 0) ? (((((((arr_0 [i_0]) << ((((4167442518 / (arr_5 [19] [i_2] [22]))) - 1))))) ? (!6405227110712262511) : 4167442488))) : (((((((arr_0 [i_0]) << ((((((4167442518 / (arr_5 [19] [i_2] [22]))) - 1)) - 1))))) ? (!6405227110712262511) : 4167442488)));
                        arr_18 [i_0] [i_1] [i_2 + 1] [i_2] [i_2] [i_5] = ((6405227110712262511 == (~var_2)));
                        arr_19 [i_4 - 4] [i_2] [22] [i_2] [i_0] = (((arr_9 [i_0] [i_0] [i_2] [i_4 - 3]) - var_2));
                    }
                }
            }
            var_19 = (arr_2 [i_0] [i_1]);
            var_20 -= ((((max((max((arr_7 [i_0] [i_1] [i_0] [i_1]), (arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0])))) ? ((min(((max(-108, 86))), ((-(arr_4 [0])))))) : ((170 / (max(-8882200602081136526, 815070770123908582))))));
        }
    }
    var_21 = ((-(((var_7 != 0) ? var_2 : var_5))));
    #pragma endscop
}
