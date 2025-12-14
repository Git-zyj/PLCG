/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((32141 ? -32142 : var_13)) * (~34720)));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_12 [i_0] = (((15010373505781333323 & 3436370567928218293) ? 15010373505781333312 : (((((arr_8 [i_0] [i_0] [i_0]) < (-32767 - 1)))))));
                        arr_13 [i_0] [i_1] [i_1] [i_0] = (arr_1 [i_0] [i_0]);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
        {
            var_15 = (max(var_15, 120));
            var_16 = (((arr_9 [i_0] [i_4] [i_0]) ? ((15010373505781333322 ? var_12 : 43021)) : -1));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            arr_19 [i_0] = (((arr_3 [i_0]) != 255));
            arr_20 [i_5] &= (1 ? 1080213271 : 1);
        }
        var_17 = (min(var_17, ((803674298 ? 0 : 1018604532))));
    }
    var_18 = (min(var_18, var_4));
    #pragma endscop
}
