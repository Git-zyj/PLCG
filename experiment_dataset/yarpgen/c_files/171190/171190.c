/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min(-var_9, -31287)) & var_11));
    var_18 -= ((var_15 ? var_16 : var_14));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_19 = (arr_2 [i_0]);
                        arr_11 [i_0] [i_1] [i_3] [i_1] [i_3] [i_1] = ((-(arr_5 [i_0 + 3] [i_0] [i_0 + 2] [i_0])));
                        arr_12 [i_1] [i_2] [i_1] [i_1] = 452312946;
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_20 = -var_16;
                        var_21 = ((-(min(225, (arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [i_4])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_1] [i_1] = (((((~(arr_2 [i_0])))) || (arr_3 [i_2] [i_5])));
                        var_22 &= ((((((arr_17 [i_0] [i_1] [i_5] [i_5] [i_2]) ? 65528 : 3968960053))) ? (arr_18 [i_2] [i_0 - 1] [i_0 + 3] [i_0 - 2]) : (arr_15 [i_0 - 2] [i_0 + 3] [i_0])));
                        arr_20 [i_0] [i_0] [i_1] [i_1] [i_0] = ((-(((var_13 + 2147483647) >> var_7))));
                    }
                    arr_21 [i_1] [i_1] [i_1] = ((-19 ? (((arr_9 [i_0] [i_1] [i_1] [i_2]) ? 125 : (arr_7 [i_0 + 2] [i_0 - 1]))) : ((min(-234, 0)))));
                }
            }
        }
    }
    var_23 = (max(((12954 ? -86 : 32984)), ((min(var_1, var_4)))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            {
                var_24 = (min((max((arr_0 [i_6] [i_7]), (arr_0 [i_6] [i_6]))), (60836 % 165)));
                var_25 = (min(var_10, (((((var_2 ? (arr_7 [i_7] [i_7]) : (arr_6 [i_7]))) < (~-14678))))));
            }
        }
    }
    #pragma endscop
}
