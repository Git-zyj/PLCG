/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = 4190195352;
    var_13 = ((((((var_2 ? -4750300655032503637 : var_9))) ? ((var_9 ? var_3 : var_9)) : (var_9 && var_5))) ^ var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (((max((arr_4 [i_0]), (arr_4 [i_0]))) != ((((var_10 < (arr_0 [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 = ((((((arr_4 [i_2]) ? (arr_4 [i_0]) : (arr_4 [i_0])))) ? (arr_4 [12]) : (((arr_4 [i_0]) % var_6))));
                            arr_10 [i_2] [i_3] = ((((arr_3 [i_0] [i_0] [i_3]) * (arr_3 [i_0] [i_0] [i_0]))));
                            arr_11 [i_0] [8] [8] [i_3] [i_3] = (((~((((arr_2 [i_0] [i_0]) == (arr_6 [7] [i_1] [i_1] [i_3])))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [20] [i_4] [i_5] = ((-(((((max(-562497152, var_6))) || var_4)))));
                            var_16 = ((+(((arr_7 [i_0] [i_0] [i_5 - 1] [i_0]) >> (((min((arr_9 [i_0] [i_1] [0] [i_5]), var_7)) - 1210466880))))));
                            var_17 += ((((3619112282 ? ((1 ? var_8 : (arr_4 [i_1]))) : (arr_6 [i_1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))) ? (min(var_6, (arr_8 [i_5 - 1] [i_4] [i_5]))) : (((arr_9 [i_0] [i_0] [i_0] [i_5 - 1]) ? -562497152 : ((-(arr_16 [i_0] [4]))))));
                            arr_18 [i_0] [i_1] [i_4] [i_0] [i_5 - 1] = ((((min((arr_1 [i_4]), (((arr_15 [7] [i_1] [10] [20] [i_5 - 1] [i_1]) && var_7))))) + ((((min((arr_5 [i_0]), var_0))) ? (32757 == 47380) : 2740))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
