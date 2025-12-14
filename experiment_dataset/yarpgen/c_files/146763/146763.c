/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 65535;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = ((-var_7 ? (~var_5) : (((((arr_2 [i_0]) ? 8070450532247928832 : 2125402124)) + (arr_4 [i_0 + 4] [i_0] [i_1 - 2])))));
                arr_5 [i_0] = (((max((min(65535, var_2)), (max((arr_4 [i_0] [i_0] [i_1]), (arr_3 [i_0])))))) ? 1 : ((111 ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_22 = (max(((-8 ? (arr_8 [i_0]) : ((max((arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_0]), 14547))))), (!2125402133)));
                            var_23 = (arr_2 [i_0]);
                        }
                    }
                }
                arr_11 [i_0] [i_0] [i_0] = (((((-(arr_10 [i_0])))) && ((min(((254 ? 14537 : 7)), -26994)))));
            }
        }
    }
    #pragma endscop
}
