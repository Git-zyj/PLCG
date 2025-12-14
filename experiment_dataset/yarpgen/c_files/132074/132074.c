/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 3; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_11 = (((min(var_6, (arr_0 [i_0] [i_0 - 2]))) == ((((!(arr_0 [i_0] [i_0])))))));
        var_12 = ((((((!(arr_1 [i_0]))))) ? ((((max(3, 3))) ? (arr_2 [i_0]) : (min(-21731, (arr_0 [i_0] [i_0]))))) : ((((((var_2 ? var_8 : 11)) > (!-21731)))))));
        var_13 = ((109594555 || ((!(arr_0 [i_0] [i_0 - 1])))));
    }
    for (int i_1 = 3; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_14 = ((!((((0 > -5307953092549078008) ? -11 : (!109594556))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_15 = ((!((max((arr_7 [i_2] [i_3] [i_4]), (max(5917002190197087779, 239)))))));
                                var_16 = (min(var_16, (((!((max(((-5307953092549078005 ? 14594864940577997431 : -125)), ((18446744073709551615 ? 7797077612596649135 : 4185372755))))))))));
                                var_17 = (max(var_17, ((((arr_6 [i_4] [i_4]) ? (arr_14 [i_3 + 2] [i_3 - 1] [i_5 - 3] [i_5] [i_5] [i_3 + 2] [i_4]) : -1)))));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1] = var_3;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        arr_18 [i_6] = (((arr_16 [i_6]) ? (arr_17 [i_6] [i_6]) : -5917002190197087779));
        arr_19 [i_6] = -691991324;
    }
    #pragma endscop
}
