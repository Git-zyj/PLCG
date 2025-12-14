/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_10 = (max((arr_1 [17]), ((min(204745330, (arr_0 [i_0] [i_1]))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = (((((((15688 ? (arr_1 [i_3]) : (arr_9 [i_0] [i_1] [i_2 + 4] [i_1] [i_2])))) ? (arr_8 [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2] [i_2 - 2]) : (min(var_2, (arr_0 [i_1] [i_1]))))) + (((~(~7))))));
                            var_11 = ((((((6 ? (arr_6 [i_0] [i_2] [i_3]) : var_1)))) - var_2));
                            var_12 = (((arr_5 [i_2]) ? (var_2 < var_0) : (arr_5 [i_2])));
                            var_13 = var_4;
                        }
                    }
                }
                arr_11 [i_0] [i_0] [i_0] = (((((~(arr_7 [i_1])))) ? ((~((183 ? var_5 : var_3)))) : (((((max(var_4, var_5))) ? 25 : 29008)))));
                var_14 = (max((((((249 ? 92 : 68))) ? (arr_2 [i_0] [i_0]) : 4101408315)), (((+((min((arr_0 [i_1] [i_1]), var_8))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_15 = 1190976873;
                            var_16 -= (((((var_7 && 1117728206) ? ((1218138749 * (arr_6 [i_0] [i_1] [i_5]))) : 1))) ? 3110427258 : -58);
                        }
                    }
                }
                arr_17 [i_0] [i_0] = (min((((((((arr_1 [0]) ? 1978703430 : var_6))) ? 2147483647 : -587603657))), (((arr_1 [i_1]) ? (arr_12 [i_0] [i_0] [i_0]) : (((arr_3 [i_0] [i_1]) ^ var_9))))));
            }
        }
    }
    var_17 = (((((((var_6 ? 1647021991 : var_8)) ^ (var_3 || var_1)))) ? (((var_1 ? var_2 : var_6))) : var_5));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                var_18 = 4273697045334356346;
                var_19 = var_2;
            }
        }
    }
    #pragma endscop
}
