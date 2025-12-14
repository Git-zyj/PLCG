/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((min(var_14, var_3)))) != (18700 & 309040283))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_0] |= var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = var_15;
                                var_18 *= (min(((min(-112, (((arr_9 [i_0] [i_3] [i_0] [i_3]) ? 144 : var_8))))), 8321499136));
                                arr_18 [i_1] [i_1] = (((((112 >= (arr_17 [19] [i_1] [i_2] [i_2] [i_1] [i_2])))) > (((((-363016956 | (arr_4 [i_0] [i_0]))) >= (((min(var_5, 132)))))))));
                            }
                        }
                    }
                    arr_19 [i_1] [i_1] [i_2] [i_1] = (arr_12 [15] [15] [15] [i_2]);
                }
            }
        }
    }
    var_19 = (min(var_19, var_8));
    #pragma endscop
}
