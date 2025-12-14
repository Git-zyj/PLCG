/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(4294967295, 4294967295));
    var_21 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = ((+((((((arr_6 [i_1]) ? (arr_1 [21] [i_1 + 1]) : 20))) ? (var_6 & var_5) : 4081))));
                    var_23 *= ((((min((min(32759, 1)), (((-86998620 ? -32755 : (arr_0 [i_2] [i_1]))))))) / -9223372036854775789));
                }
            }
        }
    }
    var_24 = (max(var_24, (((2096640 ? var_19 : ((max(var_16, (~var_11)))))))));
    var_25 = (min(32752, 1));
    #pragma endscop
}
