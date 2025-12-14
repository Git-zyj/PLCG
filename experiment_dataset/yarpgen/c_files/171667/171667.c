/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 2984442931;
    var_13 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [0] [i_0] [13] [0] = -6516044602532601912;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = ((-1880808214 ? 2382995113 : 1911972182));
                                var_15 ^= (!1);
                                arr_12 [i_2] [i_1] [i_2] [i_3] [4] [i_0] = var_4;
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] = ((((min(15186, var_5))) ? (4395046601510071076 < 2382995113) : 4689109936970168817));
                }
            }
        }
    }
    #pragma endscop
}
