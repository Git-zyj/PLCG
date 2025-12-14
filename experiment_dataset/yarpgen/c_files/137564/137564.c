/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (13 < -1)));
                var_11 = var_7;

                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        var_12 ^= ((((-64 >= (arr_8 [i_2 - 2]))) ? (~-58) : (min((((32767 ? (arr_2 [i_3 - 4]) : (arr_7 [i_3])))), (arr_4 [i_0])))));
                        arr_9 [i_0] [i_0] [i_1 - 3] [i_0] [1] = ((((((115 <= (arr_5 [i_0] [i_1] [i_2 - 3] [i_3 - 1])))) << (((~24) + 52)))));
                        var_13 = (((min(-59, -982266062))) ? (arr_6 [18] [i_1] [i_2] [4]) : ((min(((!(arr_3 [i_0 + 3]))), (-65 || var_5)))));
                    }
                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        var_14 = (min((arr_8 [i_0 - 3]), (min(((((arr_8 [i_0]) < (arr_6 [i_0 - 2] [i_0 - 2] [i_2] [i_4])))), (arr_4 [19])))));
                        var_15 = (((max((arr_0 [9] [i_0]), (!var_2))) - (((arr_10 [i_4 - 2] [i_0] [i_4 + 2] [i_4]) | (arr_7 [i_0 + 3])))));
                        var_16 -= ((((((~(arr_3 [i_1 + 3])))) ? (arr_11 [1] [14] [i_2] [1]) : ((~(arr_8 [i_4]))))));
                    }
                    var_17 = (max(var_17, ((-(((max(var_6, var_3))))))));
                    var_18 = ((!(arr_10 [i_1 + 2] [i_0] [i_0 + 2] [i_0])));
                }
                arr_12 [i_0] = ((-(min((~var_1), ((((arr_4 [i_1]) + 1120289584530330130)))))));
            }
        }
    }
    var_19 = (!var_8);
    var_20 = var_7;
    #pragma endscop
}
