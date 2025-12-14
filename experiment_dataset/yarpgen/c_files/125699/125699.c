/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = (max((min((arr_7 [4] [i_2] [i_1] [i_0]), 239)), (arr_7 [5] [5] [i_0] [i_0])));
                            var_19 = ((((max(((239 >> (((arr_9 [i_0] [10]) - 1416699733)))), -2))) | ((254 ? 2588460926 : -529865848))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_20 = (max(99, ((1 ? 1 : -1634944486))));
                            arr_17 [i_0] [9] = (max(((((arr_9 [i_0] [i_5]) << (86 - 86)))), -17541604772532994145));
                            var_21 = ((-(arr_1 [10])));
                        }
                    }
                }
                var_22 |= 44;
            }
        }
    }
    var_23 = (max(1, 1256695226));
    #pragma endscop
}
