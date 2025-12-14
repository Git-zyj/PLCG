/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = (arr_2 [11]);
                    var_20 = (((arr_3 [i_0] [i_2 + 2] [i_0]) || ((!(arr_3 [i_1] [i_2 + 1] [i_0])))));
                    var_21 = (max((max((((8 ? 8 : 11))), (max(3216607744009015590, (arr_2 [i_0]))))), (((var_9 ? (var_5 && 255) : (arr_3 [1] [i_2] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_22 = ((+((((((arr_0 [i_0] [i_3]) ? 4294967286 : var_12))) ? (arr_10 [0] [i_1] [i_2 + 1] [i_1] [i_2 + 1] [i_0] [i_2 + 1]) : (arr_3 [i_0] [i_1] [i_0])))));
                                var_23 = (((((((17173983908576894317 ? (arr_9 [6] [i_4] [i_4] [i_3] [i_4] [11]) : 1272760165132657299))) ? (arr_11 [i_0] [19] [i_2] [i_0] [10]) : (max((arr_6 [i_0] [i_4] [i_2]), 1272760165132657298)))) == var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            {
                var_24 = (arr_3 [i_6] [16] [i_5]);
                var_25 = ((79 ? -1272760165132657299 : (((1272760165132657298 ? 562947805937664 : (-2147483647 - 1))))));
                var_26 = (((max(1, 3990121834))) ^ (min(4294967288, 8)));
            }
        }
    }
    var_27 = ((((3957086959856776527 ? -3957086959856776528 : 8)) != var_3));
    #pragma endscop
}
