/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min((min(var_12, var_2)), var_7))) ? (((((min(var_1, var_3)) + 9223372036854775807)) << ((((((2198 ? -7361914604330958249 : 54918)) + 7361914604330958265)) - 16)))) : ((((max(var_2, var_3))) ? var_6 : var_0)));
    var_14 += var_11;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_15 = (min(var_15, ((-8698076207505352545 ? 29 : -7546383230710067017))));
                        var_16 = max(21, -586068740839662426);
                        var_17 = var_3;
                        var_18 = (min(var_18, ((min((arr_6 [i_0] [i_1] [i_2] [i_0]), (max((arr_6 [i_3] [3] [i_1] [i_0]), var_9)))))));
                    }
                }
            }
        }
        arr_10 [i_0] [i_0] = (max((arr_9 [8] [i_0] [i_0] [i_0]), ((11047 ? 8102791162849629543 : 65535))));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_19 += (((arr_9 [2] [i_4] [i_4] [2]) ? (arr_9 [0] [i_4] [i_4] [i_4]) : (arr_9 [8] [i_4] [i_4] [i_4])));
        var_20 = (28001 == 31744);
    }
    #pragma endscop
}
