/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((-166 != -89) ^ (min((163 - 16785), (30 - -32648)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((((min(-255, (90 + 8))) + 2147483647)) << (101 - 101)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_21 = -6671;
                            arr_12 [i_2] [i_1] [10] [i_0] [i_0] [i_2] = (min(((1 == ((max(96, 241))))), (((30 <= 1630465400) <= ((63713 ? -125 : 179))))));
                            var_22 = (min(var_22, ((min(348961879, ((min(162, -50))))))));
                        }
                    }
                }
                var_23 = (min(var_23, (((((max((min(-50, 3508710265244102473)), ((max(1, 72)))))) ? ((max(((-348961879 ? 254 : 255)), -55))) : (max((max(6124717218796545815, 34)), (122 > 1))))))));
            }
        }
    }
    #pragma endscop
}
