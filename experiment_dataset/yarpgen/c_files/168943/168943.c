/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [8] = var_7;
                    var_18 = 1;
                    var_19 = (min(var_19, (((max(var_4, ((1 ? 1 : 0))))))));
                    var_20 = ((((arr_4 [i_2]) ? (arr_4 [i_0]) : (arr_4 [i_1]))));
                }
            }
        }
        var_21 *= (((min(((min(1, 1))), (((arr_0 [i_0] [i_0]) ? var_2 : -278700363961265980)))) == (((((arr_6 [2]) >= (((63 ? 3374832553741187289 : -3374832553741187290)))))))));
        var_22 = ((((max((arr_5 [8]), (~var_5)))) ? (max(((max(1, var_0))), (((arr_7 [i_0] [8] [i_0] [i_0]) ? var_8 : 1)))) : (((arr_7 [i_0] [10] [i_0] [i_0]) ? (((var_2 << (var_17 + 32)))) : (255 & var_3)))));
        var_23 = ((~(min((arr_1 [12] [i_0]), var_16))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_24 = (min(var_24, (((((((((3374832553741187289 ? 7 : 1)) != var_12)))) / 3374832553741187300)))));
        var_25 = 4452949511055675504;
        var_26 = (arr_2 [1]);
        var_27 = ((((((-(arr_7 [i_3] [0] [0] [i_3]))) + 2147483647)) << (((-4796990129109556936 + 4796990129109556944) - 8))));
    }
    var_28 ^= var_11;
    var_29 = var_2;
    #pragma endscop
}
