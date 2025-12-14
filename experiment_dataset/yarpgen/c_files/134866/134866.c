/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_5, (-var_15 + 56)));
    var_17 &= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = ((((min(((max(65, var_11))), ((56 ? (arr_0 [i_1]) : (arr_5 [i_0] [i_0])))))) ? var_3 : ((((-(arr_3 [i_0])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = (((((-(((arr_7 [i_1] [i_1] [i_2]) ? (arr_2 [i_0]) : (arr_2 [i_0])))))) ? 18446744073709551615 : ((max(0, (arr_10 [i_0] [i_0]))))));
                                arr_14 [i_0] [i_1] [9] [i_3] [11] = ((-((((max((arr_4 [i_0]), var_9)) <= (((((arr_10 [i_0] [12]) >= 210)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((2781422169 >> ((0 ? var_1 : (var_0 || 832299048)))));
    var_21 = -var_14;
    #pragma endscop
}
