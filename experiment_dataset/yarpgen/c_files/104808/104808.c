/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 = ((((255 < (arr_7 [i_3 + 2] [i_3 - 1]))) ? (arr_6 [i_2] [i_3 - 1] [i_2]) : -350178371719897744));
                            var_15 = (i_1 % 2 == 0) ? ((((((-((-(arr_2 [i_3])))))) && ((((arr_9 [i_3] [i_1] [i_3 + 3] [i_3] [i_3 - 1] [i_1]) << (((arr_9 [i_3 + 3] [i_1] [i_3 - 1] [i_3] [i_3 + 3] [i_3]) - 47962)))))))) : ((((((-((-(arr_2 [i_3])))))) && ((((arr_9 [i_3] [i_1] [i_3 + 3] [i_3] [i_3 - 1] [i_1]) << (((((arr_9 [i_3 + 3] [i_1] [i_3 - 1] [i_3] [i_3 + 3] [i_3]) - 47962)) - 8034))))))));
                            arr_11 [i_3] [i_1] [i_2] [i_1] [3] = (max(((max(1813929014, ((~(arr_9 [i_3 + 3] [i_1] [i_2] [i_2] [i_1] [i_0])))))), ((~(~var_11)))));
                            var_16 ^= ((((!(((65528 ? var_7 : (arr_3 [i_2])))))) && ((!(!var_6)))));
                        }
                    }
                }
                var_17 = var_7;
            }
        }
    }
    var_18 = (((((var_6 ? ((min(var_9, var_5))) : 1))) < var_2));
    var_19 = var_5;
    var_20 = var_8;
    #pragma endscop
}
