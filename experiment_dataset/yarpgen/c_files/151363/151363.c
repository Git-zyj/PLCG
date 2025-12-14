/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_11 *= (min((arr_3 [i_1] [3]), (120 & 18446744073709551615)));
                    arr_6 [i_1] = (min(0, 143974450587500544));
                    var_12 = (var_1 ? (arr_1 [i_0]) : ((((1 % 2147483647) ? 0 : 255))));
                }
            }
        }
    }
    var_13 = ((((max(((var_5 ? var_7 : var_2)), var_7))) ? (~var_4) : (min(120, (max(11952066507086774015, 120))))));
    #pragma endscop
}
