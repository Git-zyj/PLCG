/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 = 18446744073709551604;
                                arr_13 [i_0] [i_0] [i_0] [i_0] = ((((((((~(arr_1 [i_0])))) ? (arr_10 [i_0] [i_0]) : (max(2184709643106715815, (arr_5 [i_1])))))) ? ((-((var_6 ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_2]))))) : 2006340397));
                            }
                        }
                    }
                    var_13 *= (min(((-1893119021 / (arr_0 [i_1]))), var_1));
                }
            }
        }
    }
    var_14 -= var_0;
    #pragma endscop
}
