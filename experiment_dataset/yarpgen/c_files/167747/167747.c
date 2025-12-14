/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = ((!(((-(var_9 != var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = ((var_8 ? ((min(-124, 13464))) : (arr_3 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = 1140969327;
                                var_17 |= 9267226948091485400;
                                var_18 = 7;
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] = (((var_8 >= var_0) % (min((arr_15 [i_0] [i_1] [i_2] [i_0] [i_2] [i_2]), ((var_1 + (arr_5 [i_0] [i_0] [i_1])))))));
                }
            }
        }
    }
    var_19 = var_4;
    var_20 = (max(var_20, ((-702305244865717944 ? 213 : 6664129649493113146))));
    #pragma endscop
}
