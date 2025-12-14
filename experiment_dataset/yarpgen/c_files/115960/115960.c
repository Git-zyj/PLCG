/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_7 == ((var_4 ? 70360154243072 : var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                var_15 = (((((-((28263 ? 242 : 17585415274905517148))))) ? (((((var_0 ? 8776 : 921772576))) ? -38 : (min(-2442695893329509603, 38)))) : 921772566));
                var_16 = (min(1, 11522787876885571275));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] [3] = ((((min(3373194730, (((-(arr_8 [i_2]))))))) ? ((-(min(var_1, 229)))) : ((((((var_3 ? -38 : (arr_10 [i_2] [i_3] [i_3])))) ? (arr_9 [i_2] [6]) : -var_7)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_17 = (max((arr_13 [i_3 + 3] [i_2 + 2] [i_3 + 3]), ((-(arr_15 [i_3 - 1] [i_2 - 3] [0])))));
                            var_18 = (-(max((arr_8 [i_2]), var_3)));
                            var_19 = (((-(arr_11 [i_3 - 1]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
