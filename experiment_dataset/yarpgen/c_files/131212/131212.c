/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_10 += ((((((((~(arr_3 [i_1] [i_0])))) ? (((arr_3 [i_1] [i_0]) ^ (arr_3 [i_1] [i_0]))) : ((-28559 ? -28557 : 2066643400))))) ? (arr_3 [i_1] [1]) : (min((arr_1 [i_1]), (arr_0 [i_1])))));
                var_11 = (arr_3 [i_1] [i_0]);
                arr_4 [i_1] [i_0] [i_0] = (((((4294967295 ? 28557 : 4294967285))) ? ((var_0 ? 3020101662 : 15)) : (((arr_0 [i_1]) + -var_9))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                var_12 = (((((((((arr_7 [i_3]) ? (arr_5 [i_3] [i_2]) : var_4))) ? 3127035436 : ((var_7 ? (arr_5 [6] [1]) : var_6))))) ? (((-29534 ? 108 : -1964463187))) : ((var_9 ? 1881235305 : ((32763 ? var_8 : -3735927179394651275))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_13 = ((3576116303 ? 2158123920419275973 : 108));
                            arr_15 [i_5] = ((4294967295 ? 255 : 905795825));
                        }
                    }
                }
                var_14 = (arr_14 [6] [4] [i_2] [i_2] [4] [i_2]);
                var_15 = ((((((((arr_11 [i_3] [i_2]) ? (arr_12 [i_2] [i_2]) : var_9))) ? 1 : 420545260))) ? ((((-12888 ? (arr_13 [i_3]) : (arr_13 [i_2]))) + (((arr_10 [i_3]) ? (arr_5 [1] [3]) : (arr_13 [i_3]))))) : (((((((arr_12 [i_3] [i_2]) ? (arr_14 [i_3] [10] [i_2] [i_2] [10] [i_2]) : (arr_7 [i_3 + 2]))) > (((((arr_7 [i_3]) && (arr_8 [i_3] [i_2] [i_2]))))))))));
            }
        }
    }
    #pragma endscop
}
