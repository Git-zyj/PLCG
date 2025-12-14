/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_9 ^ ((~((max(var_15, 152)))))));
    var_21 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] = var_15;
                            arr_11 [i_2] [i_1] [i_2] [i_2] [i_3] = (((((-((min(var_18, var_6)))))) * (((arr_3 [i_1] [i_2 + 1]) ? (-127 - 1) : ((((-7734411913131533410 + 9223372036854775807) << (((arr_2 [i_0] [i_0]) - 1835195589)))))))));
                            var_22 = (max(7734411913131533428, -7734411913131533410));
                            var_23 += (((min(((min(-13008, (arr_9 [i_0] [i_0] [i_2] [8])))), (((arr_3 [i_2] [10]) >> (((arr_0 [i_3]) + 84)))))) < ((((var_1 / (arr_5 [i_1] [i_1])))))));
                        }
                    }
                }
                var_24 = (((((max((arr_2 [i_0] [i_1]), var_9)) < ((((arr_9 [i_0] [i_0] [i_1] [i_1]) ? var_6 : (arr_5 [1] [4])))))) ? (arr_2 [i_0] [i_1]) : ((-7734411913131533410 ^ (max(var_10, (arr_6 [i_0] [7] [i_0])))))));
                var_25 = ((!((max((41544 < var_5), (arr_3 [i_0] [i_1]))))));
            }
        }
    }
    var_26 = (!7734411913131533413);
    #pragma endscop
}
