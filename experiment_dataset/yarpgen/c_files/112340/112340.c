/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((max(178, 10342))) ^ ((max(var_6, var_10))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_13 = (min(8191, var_10));
                            var_14 = ((((((var_3 ? 2584213851 : (arr_4 [i_2] [i_2])))) ? 0 : -1)));

                            for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                            {
                                var_15 = (min((31 == 241582447), 66));
                                var_16 = ((((min(0, (max(66, (arr_4 [i_1] [i_1])))))) ? (!-4294967295) : (min(3297362856347217628, var_2))));
                            }
                            for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                            {
                                var_17 = 0;
                                var_18 = (max((max(var_1, (min(var_5, var_11)))), (1 - var_8)));
                            }
                            arr_13 [i_1] = ((max(((var_2 - (arr_5 [i_2] [i_3]))), ((((arr_1 [i_3]) + (arr_2 [i_0])))))));
                            var_19 = (min(((((min(16, 356822631)) < (((-(arr_1 [0]))))))), (min(-1, 225))));
                        }
                    }
                }
            }
        }
    }
    var_20 = max(((((var_5 - 511) == (min(var_4, var_10))))), (min((max(var_1, var_8)), ((min(65510, -28286))))));
    #pragma endscop
}
