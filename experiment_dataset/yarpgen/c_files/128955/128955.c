/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_10);
    var_16 *= var_5;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_1] = (min((~71), ((-(~1)))));
            var_17 = (max(var_17, 1));
            var_18 = ((~(min(865274365, -29798))));
        }

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_0] = (~((2855125918 ? 1359775703 : 0)));
            arr_10 [i_0] [i_0] &= (min((~26), -1));
            var_19 ^= ((-((2787319336 ? (min(1, 1205992631)) : 26))));
        }
        var_20 = ((-(~-1050710143)));
    }
    var_21 = ((3433321295 ? -2111338466 : 0));
    var_22 = ((~(((~-16317) ? -1813237489 : ((4294967295 ? 10836330639882214574 : 18446744073709551604))))));
    #pragma endscop
}
