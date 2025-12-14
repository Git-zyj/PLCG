/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((max(var_4, var_6)), ((max(2754299809, (~var_4))))));
    var_12 = 4467570830351532032;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 = var_5;
                                var_14 = (arr_7 [i_0] [i_0] [i_0] [i_4]);
                                var_15 = ((((-(arr_0 [i_1 - 1]))) * ((((min(62, 1488534359)))))));
                                arr_10 [i_4] [i_0] [i_0] [i_1] = 48;
                                arr_11 [i_0] [i_1] [i_4] = var_5;
                            }
                        }
                    }
                    var_16 -= ((!((((arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) - var_2)))));
                    var_17 = 11051;
                }
                arr_12 [i_0] [i_0] [18] &= 4467570830351532032;
            }
        }
    }
    #pragma endscop
}
