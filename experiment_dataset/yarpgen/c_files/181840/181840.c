/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_11 *= (arr_1 [i_1]);
                arr_4 [i_0] = ((-((+(min((arr_0 [i_0 - 3]), 37080))))));
                var_12 = ((~(((arr_0 [i_0]) & (arr_1 [i_0])))));

                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((arr_7 [i_0] [i_2 - 2]) + 1520274086);
                        var_13 = (!2388722637);
                        arr_10 [i_0] [i_1] [i_2] [i_0 + 1] [i_0] [i_0 + 1] = ((24211 && (arr_8 [i_0] [19] [i_2 - 4] [i_3])));
                        var_14 = var_3;
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        var_15 = var_2;
                        var_16 = (arr_0 [i_2]);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_17 = ((((4294967287 >> (((~3149555207) - 1145412083)))) << ((((arr_0 [i_6]) <= (arr_6 [i_2]))))));
                                var_18 = (min(((((min((arr_2 [i_0] [i_5] [i_0]), (arr_13 [i_0] [i_0] [i_0])))) ? var_6 : ((min((arr_2 [i_1] [i_2] [i_0]), 15))))), (((230 >= 219) ? ((var_8 ? 58 : 244)) : (15872 <= 5)))));
                                arr_20 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0] = min(((var_6 | (arr_8 [i_0] [i_0] [i_2] [i_2]))), (((~((~(arr_1 [i_0])))))));
                            }
                        }
                    }
                    arr_21 [i_0] [i_1] [i_0] [i_0] = (arr_2 [i_0 - 3] [i_1] [i_0]);
                    var_19 = (((((((var_6 ? (arr_8 [i_0] [i_1 + 1] [i_2] [i_1 + 1]) : 56676))) ^ (var_4 ^ var_7))) <= var_3));
                }
                var_20 ^= ((~((45801 ? (((~(arr_7 [i_1] [i_1])))) : (((arr_7 [i_1] [i_1 - 3]) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0 - 2]) : (arr_5 [i_0] [i_1] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
