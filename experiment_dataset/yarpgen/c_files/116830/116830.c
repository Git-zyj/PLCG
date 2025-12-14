/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((((max(111, ((var_6 ? 31958 : -112))))) ? (!532947818) : ((46 ? -19412 : -2291424782102968842))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_11 = (max(var_11, ((max(((((arr_3 [i_0] [i_2 + 1] [i_2 + 1]) < (arr_8 [i_1] [i_2 + 1] [i_2] [i_2 + 1])))), (((arr_9 [9] [i_1] [i_1] [i_1] [i_1] [i_1]) - (max((arr_8 [17] [i_1] [i_2] [i_3]), var_9)))))))));
                            var_12 = (((arr_9 [i_0] [i_0] [i_1] [i_2] [i_2 + 1] [i_3]) * ((0 ? 1 : 16073818422722385504))));
                        }
                    }
                }
                var_13 = ((!(min((var_1 < var_2), (arr_2 [i_0] [i_0])))));
            }
        }
    }
    var_14 *= 21;
    #pragma endscop
}
