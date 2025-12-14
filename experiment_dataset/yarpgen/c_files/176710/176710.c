/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_11 &= ((((((min(5410785770238771941, (arr_5 [i_0])))) || (((3155852216 ? (arr_2 [3]) : var_4)))))) > (((var_9 ? 13035958303470779675 : var_5))));
                var_12 += (min((((arr_3 [i_0] [i_0]) ? (arr_4 [i_0] [i_1]) : (arr_2 [i_1]))), (arr_3 [i_1] [i_1])));
                var_13 += ((((32726 ? 83 : ((-833419716 ? 13035958303470779674 : 1))))) ? ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_5 [i_0])))) : ((((-31 ? 1 : 13035958303470779674)) << ((min(0, (arr_2 [i_1])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_14 = (min(var_14, 51046));
                var_15 = ((((((((arr_10 [i_3] [i_2]) || 13102667725014522412)) ? 5410785770238771937 : 9457824412735523554))) || var_6));
                var_16 = (((arr_6 [i_2]) ? ((((min(1, 5344076348695029207))) ? ((min(22159, 1509652920))) : var_5)) : (((max((arr_10 [i_2] [i_2]), (arr_10 [i_3] [i_2])))))));
                var_17 = (max(var_17, ((((((2 ? 111 : 2785314390))) ? (((var_6 ? (min(1745644927, (arr_7 [i_3]))) : -92))) : 13102667725014522412)))));
            }
        }
    }
    var_18 = var_6;
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_19 = (max(((+(((arr_7 [i_4]) ? 1829175536 : (arr_11 [i_6] [7]))))), ((16512 ? 3917 : (arr_11 [i_4 - 1] [i_4 + 2])))));
                    arr_20 [8] [8] [i_5] [i_4] = (max(((87 ? (arr_6 [4]) : 542008944)), ((((arr_6 [i_6]) ? (arr_6 [i_5]) : (arr_6 [i_4]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_20 &= (min(((((((arr_1 [i_8]) | 12643198711431994969))) ? (((var_6 ? -81 : 2785314367))) : 10983952513234815851)), (arr_2 [i_5])));
                                var_21 = (min(var_21, (((((((arr_23 [2] [2] [i_8 - 3] [i_8] [i_8 - 2] [1]) ? (arr_25 [i_8] [i_8] [1] [i_8] [i_8 - 3]) : (arr_23 [i_8] [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_8 - 1])))) ? ((((((arr_15 [i_4] [i_7]) ? var_7 : (arr_13 [i_4] [1])))) ? (arr_16 [i_7 + 1] [i_5] [i_8 - 2]) : 2133940316)) : ((((max((arr_19 [i_4 + 2] [i_4]), 1))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
