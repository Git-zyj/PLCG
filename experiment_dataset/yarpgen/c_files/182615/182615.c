/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_1, (min(var_8, (var_5 > var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (min(((-(arr_1 [i_1]))), (arr_1 [i_0])));
                var_11 = (((((((arr_3 [i_1] [i_0]) ? -936044520527613307 : 1381582844)))) ? (((0 ? (arr_2 [i_0] [i_1]) : ((-(arr_2 [1] [7])))))) : ((((max(30983, var_3))) ? (max(var_7, (arr_3 [i_1] [i_1]))) : ((((arr_2 [4] [4]) ? var_4 : 34248)))))));
                arr_6 [4] [i_1] &= max(var_7, ((34249 ? 125 : 132)));
                arr_7 [i_0] = ((var_2 ? ((((min((arr_4 [14]), var_5))) ? (min(3160350361877257132, 5)) : ((var_9 ? 5931582654888335126 : var_8)))) : -1495363502));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 &= (max((((arr_1 [i_2 - 2]) << (var_6 - 1642859377))), (~5)));
                                var_13 ^= ((var_5 ? (((arr_14 [i_2 + 1] [i_1] [i_2] [6]) ? 117 : 31701)) : (arr_9 [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
