/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_8 ? var_16 : var_11))) ? (-32767 - 1) : var_15)) * var_11));
    var_20 += var_1;
    var_21 = (max(var_21, var_6));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_1 - 1] [i_0] = ((2338 ? 63197 : 4294967278));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((((32767 | var_9) >> (min((arr_2 [i_3]), (((arr_6 [i_0]) * var_1)))))))));
                            var_23 += (!19);
                            var_24 += ((((((((arr_0 [i_1] [i_3]) ? (arr_3 [i_0] [i_0]) : var_17))))) + (((8787171359537830960 < 2358) - ((var_7 ? (arr_7 [i_3] [1] [5] [i_1 - 1] [i_0]) : 4294967283))))));
                            arr_9 [i_0] [i_0] [7] [3] = (min(31, (2338 | 63193)));
                        }
                    }
                }
                arr_10 [2] [2] = 18;
                arr_11 [i_0 + 2] [i_0 + 2] = (arr_6 [i_1]);
                var_25 += ((-((((arr_0 [i_1] [i_0]) > ((63196 ? (arr_6 [i_0 - 1]) : 4294967295)))))));
            }
        }
    }
    #pragma endscop
}
