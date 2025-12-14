/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = (arr_0 [i_0] [i_0]);
        var_13 = var_1;

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_14 = (arr_5 [i_0] [i_1] [i_1]);
                            var_15 = (min(((var_7 + (arr_11 [i_0] [i_0] [i_0] [i_0]))), ((2807181336845435341 ? var_7 : (arr_11 [8] [i_3] [i_2] [i_3])))));
                        }
                    }
                }
                var_16 = (max(var_16, (((!(arr_9 [i_0]))))));
            }
            var_17 = (min(var_17, ((min((arr_5 [1] [1] [i_1 + 1]), (((arr_13 [8] [i_1 + 1] [i_1 + 1] [i_0] [i_0]) ? 15639562736864116275 : -425612773)))))));
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_17 [i_5] [2] = (+((max((arr_14 [i_5] [i_5]), (arr_16 [i_5] [i_5])))));
        var_18 = (max(((min((arr_16 [i_5] [i_5]), (arr_16 [i_5] [i_5])))), (max((!425612789), 15639562736864116274))));
        arr_18 [i_5] = (min((max((arr_15 [i_5]), var_8)), ((var_7 ? (arr_15 [i_5]) : 425612773))));
        arr_19 [i_5] [i_5] = (arr_16 [15] [1]);
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    {
                        arr_27 [i_5] [18] [i_5] [i_8] |= ((((arr_25 [i_6] [i_6 - 3] [i_6 - 1]) & var_6)));
                        var_19 = ((-(max(425612773, ((max(var_3, var_5)))))));
                        var_20 = (min(var_20, var_7));
                        var_21 = var_6;
                    }
                }
            }
        }
    }
    var_22 = var_5;
    var_23 = (((((var_8 ? 2983977030113710311 : (max(var_7, 2807181336845435313))))) ? var_5 : var_7));
    #pragma endscop
}
