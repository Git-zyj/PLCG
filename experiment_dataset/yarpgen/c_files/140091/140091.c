/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((min(var_4, var_0))) % var_1)) >= (var_13 == var_6)));
    var_20 |= -1696020178;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (((~(((410558518 - 3884408779) << ((((251 ? 20872 : 15)) - 20847)))))))));
                arr_6 [1] [i_1] = (((max(-7393197786357339275, 2406032281942307818)) + ((((arr_1 [i_0] [i_1]) & 95)))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_22 = (((min(((min(-20879, var_18))), var_13)) ^ (-404572250 > -17238)));
                                arr_14 [i_0] [i_0] [i_2] [22] [i_4] [i_4] [i_4] |= ((var_0 || (arr_11 [19])));
                            }
                        }
                    }
                    var_23 = (arr_2 [i_0 + 2]);
                    var_24 = (max(var_24, (max((((arr_12 [i_2] [i_1] [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_0 - 2]) ? var_5 : (arr_12 [0] [i_2] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 2]))), ((1 + (arr_5 [i_0 + 3] [i_0 + 2] [i_0 + 3])))))));
                }
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    arr_17 [i_0] = (max((min((arr_5 [i_0] [i_5 - 2] [1]), (arr_5 [i_1] [i_5 + 2] [i_5]))), (arr_5 [i_1] [i_5 + 1] [i_5])));

                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        var_25 = (max(var_25, (arr_13 [i_0])));
                        arr_22 [4] [i_5] [i_6] = ((max(var_3, ((max(1, -32))))));
                        var_26 = (((arr_7 [i_6 + 1] [i_5 - 2] [i_0 + 1]) < (min(var_1, (arr_7 [i_6 + 1] [i_5 - 2] [i_0 + 1])))));
                    }
                    var_27 -= var_13;
                    var_28 |= (((((26065 ? (arr_19 [i_0 + 1] [i_0] [i_0] [3] [i_0] [i_0 + 1]) : ((min(var_10, (arr_12 [i_1] [i_0] [i_5] [i_1] [i_0] [i_1]))))))) ? ((((arr_9 [i_0] [i_0 + 3] [0] [i_0 + 2]) ? var_5 : (arr_9 [i_0] [i_0] [i_0] [i_0 + 2])))) : (min((((arr_4 [i_0] [i_1]) ^ 8572032700278009226)), (((~(arr_1 [15] [i_1]))))))));
                }
            }
        }
    }
    var_29 |= (410558502 || -404572228);
    #pragma endscop
}
