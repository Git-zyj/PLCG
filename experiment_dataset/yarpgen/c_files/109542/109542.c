/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = (18446744073709551608 <= 4294967284);
                        var_11 &= max((18446744073709551615 && -3), ((-(9194111704471589085 % var_10))));
                    }
                }
            }
        }
        var_12 = (((((((arr_6 [i_0] [i_0] [i_0]) ? (arr_5 [8] [i_0] [i_0] [i_0]) : 9194111704471589085)))) ? (((min((!var_4), 53228)))) : (max(2964944547, 50727))));
        var_13 = (((arr_0 [i_0]) & (arr_0 [i_0])));
    }
    var_14 = ((+(((var_7 / var_6) ? ((min(0, 18870))) : (var_3 <= 1781688308)))));
    var_15 = var_8;
    #pragma endscop
}
