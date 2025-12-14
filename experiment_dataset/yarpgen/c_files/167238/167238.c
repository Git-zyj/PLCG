/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((min((!var_11), (((16383 % 65535) < (((var_12 ? var_9 : 1))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] = ((((((arr_3 [i_2 - 1] [i_2]) ? (((1 ? (arr_7 [i_0] [i_0] [16]) : var_9))) : ((65535 ? 0 : (arr_6 [i_2] [17] [i_0])))))) ? var_5 : (((-40269 != (((arr_7 [i_2] [i_1] [i_0]) ? (arr_5 [i_1]) : 65531)))))));
                    var_14 = ((~(arr_3 [i_1] [i_0])));
                    var_15 = (min(var_15, ((min(((((arr_2 [i_0 - 1] [i_0]) - (arr_8 [i_0 - 1] [i_0] [i_0 - 1])))), ((((((arr_5 [i_2]) ? var_11 : (arr_7 [i_0] [16] [15])))) ? (arr_8 [i_0 - 1] [i_2 + 1] [i_2 - 1]) : (max((arr_3 [i_1] [i_0]), var_0)))))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_16 = 65534;
                            var_17 = ((18969 | ((((((arr_11 [5] [i_1] [i_3] [i_4]) <= var_12)) && ((17 != (arr_3 [i_1] [10]))))))));
                            arr_18 [i_0] [i_0] [1] [i_0] [i_0] [i_0] = (arr_7 [i_0] [i_1] [i_3]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            {
                var_18 |= (max(65534, ((var_7 ? 1 : (((!(arr_8 [i_5] [i_6] [i_6]))))))));
                arr_24 [i_6] = (min(0, 1));
            }
        }
    }
    var_19 += ((min((((-134217728 ? var_8 : var_11)), (13781530856216682135 + 65533)))));
    #pragma endscop
}
