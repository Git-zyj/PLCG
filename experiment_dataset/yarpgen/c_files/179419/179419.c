/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((((((!13377783166233603680) ? (13377783166233603675 && -241588871) : (var_5 && 13377783166233603680)))) || ((max((min(-1, var_3)), (!var_9)))))))));
                arr_6 [i_0] [i_0] = ((-(var_7 != 254)));
                arr_7 [i_0] [i_1] = (max((((-1233189255 + 2147483647) >> (14185 - 14175))), (arr_2 [i_0] [i_0])));
            }
        }
    }
    var_19 = (((((~(~var_7)))) ? (max((~241588870), var_14)) : var_10));
    #pragma endscop
}
