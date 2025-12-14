/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_9, (((var_9 <= (25 != var_10))))));
    var_15 = var_7;
    var_16 |= -9223372036854775789;
    var_17 = (min((min((max(var_11, var_2)), -9223372036854775797)), ((min(var_5, (max(var_5, 1)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [6] = (((((1000642923 << (((-9223372036854775789 + 9223372036854775792) - 3))))) != (min(3395986976790322290, 21016268))));
        arr_3 [6] = (max(((var_2 >> (var_3 - 16309))), (((var_4 != (arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_6 [2] [14] [i_1] = (((min((arr_4 [i_1]), (min(var_10, var_0))))) ? ((var_11 ? ((var_4 ? 1316292706 : 9223372036854775807)) : (arr_4 [i_0]))) : 39524);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_2] [4] [14] = (max(((max(-30800, 1))), (~-1206540612906862556)));
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_3] [i_4] [i_4] = (max((min(var_7, 7086359330269123666)), ((~(arr_5 [i_1] [i_2] [i_3])))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            arr_19 [i_0] = ((var_1 < (max(1501022746, (((arr_4 [i_5]) ? (arr_5 [i_0] [i_5] [i_0]) : 1))))));
            arr_20 [10] = (((((arr_17 [i_5]) & (arr_17 [i_0]))) / (arr_17 [i_0])));
            arr_21 [i_0] = (+(((((-108 ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_8 [i_0]))) >= (((arr_7 [i_0] [i_5] [i_0] [i_0]) ? 12256 : 17627))))));
        }
        arr_22 [i_0] = ((!((max((max(0, (arr_8 [i_0]))), (arr_16 [i_0] [i_0]))))));
    }
    #pragma endscop
}
