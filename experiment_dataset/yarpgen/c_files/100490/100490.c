/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (0 < var_9);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_19 = (((((165 ? 4672392559286725790 : 81))) ? ((823826327817067217 ? 8491263771150827489 : 2578878741)) : -8491263771150827490));
            var_20 *= ((1 ? (8491263771150827503 - 8) : (0 + 2578878746)));
            arr_5 [i_0] [i_1] = ((1716088555 ? -8943841248147203359 : 2719126479));
            arr_6 [i_0] [i_1] = 1716088555;
        }
        arr_7 [i_0 - 1] [3] = ((18446744073709551611 >= ((((-8491263771150827489 / -3304389303743935710) >> (2578878760 - 2578878708))))));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        arr_11 [i_2] = ((min(17, (-2147483647 - 1))));
        arr_12 [i_2] = (2147483647 ? (4234 + 651356739) : (max(-111, (7154900845567831878 / -6201220783313143347))));
    }
    var_21 = 2578878741;
    var_22 = (((~53) ? (1716088537 ^ 7168) : ((var_6 ? (1435347498 | 3) : -76))));
    #pragma endscop
}
