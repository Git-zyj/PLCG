/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_0));
    var_13 = ((-var_6 ? ((var_7 ? (-2147483647 - 1) : var_1)) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_14 = (max(var_14, 12984052592340810735));
                    arr_6 [i_0] [i_1] [i_2] = (min((((((((arr_2 [i_0] [i_1] [i_2]) < var_10))) | (arr_5 [i_1] [i_1] [i_2])))), ((((max(5462691481368740881, 45015))) ? 2009298699 : -1686952003675174096))));
                    var_15 &= ((max((((arr_2 [i_0] [i_0] [i_2]) ? (arr_5 [i_2] [i_2] [i_2]) : 12984052592340810721)), var_5)));
                    arr_7 [i_1] [8] [i_1] [i_1] = ((+((45 ? (arr_5 [i_0] [i_1] [i_2]) : ((-(arr_4 [i_0] [i_0] [i_0] [i_0])))))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_16 -= (arr_1 [1]);
                    var_17 = (min(var_17, ((min(((16082441714439336642 ? 8701467089570044628 : 27)), var_0)))));
                    arr_12 [i_0] [i_1] [i_3] = ((-(min((arr_10 [i_1] [i_1] [i_3]), (arr_4 [i_0] [0] [i_3] [i_1])))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    arr_15 [i_0] [i_1] [i_1] [4] = ((arr_3 [i_0] [i_4]) ? (arr_9 [i_0] [i_1] [i_0] [i_4]) : (arr_10 [i_1] [i_4] [8]));
                    var_18 = (min(var_18, (arr_10 [i_0] [i_1] [i_0])));
                    arr_16 [i_1] = ((((12984052592340810726 ? (arr_10 [i_1] [i_1] [i_1]) : var_9))) ? (12984052592340810754 > 1) : (2490 || 402095361));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        {
                            var_19 = (arr_0 [i_0]);
                            var_20 = 2009298692;
                            var_21 = var_3;
                        }
                    }
                }
                arr_21 [i_1] [i_1] = ((-var_1 ? ((min((arr_8 [i_0] [i_1] [i_0] [i_1]), (arr_8 [8] [i_1] [i_1] [i_1])))) : ((min(13, (arr_8 [i_0] [i_0] [i_0] [i_1]))))));
                var_22 = ((((2490 ? (arr_14 [i_0] [i_0] [i_1] [i_1]) : var_4)) / ((~(arr_14 [i_0] [i_1] [i_1] [i_1])))));
            }
        }
    }
    var_23 = var_9;
    var_24 = var_4;
    #pragma endscop
}
