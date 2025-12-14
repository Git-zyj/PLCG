/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((min((arr_2 [i_0 - 1] [i_0]), (arr_0 [i_0 - 1] [i_0]))) <= var_9));
                var_15 = ((((((-34 ? 65535 : (arr_2 [i_0] [i_1])))) ? (arr_1 [i_0 - 1] [i_1]) : (((max(-30922, 1)))))));
                var_16 = (max(var_16, ((((((33 ? (arr_1 [i_0 - 1] [i_1]) : ((2260286931336335910 ? 3858671848 : (arr_0 [i_0] [i_1])))))) <= ((((max(46, var_8))) ? (arr_2 [i_0 - 1] [i_0 - 1]) : (1828259798603225555 / -33))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_1] [i_2] [13] = ((!((max((max((arr_1 [i_0] [i_1]), var_13)), ((min(2048, (arr_4 [i_0])))))))));
                            arr_13 [i_0] [i_0] [i_3] [i_0] = ((+(max((arr_2 [i_1] [i_2]), (4077090909 + 32)))));
                        }
                    }
                }
            }
        }
    }
    var_17 |= var_9;
    var_18 = (!3547377833);
    #pragma endscop
}
