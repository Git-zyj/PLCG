/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((max(var_10, var_0)))));
    var_14 = (max(var_14, ((((65535 ? 2366954733 : 10463582486047539008))))));
    var_15 = ((((((2366954716 << (101 - 71))))) != (((17253337277171783358 ? 7988692292544857490 : -101)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] = ((17253337277171783343 << (4294967295 - 4294967260)));
                    var_16 = 5643398973000717449;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                {
                    arr_12 [i_0] = ((576460752303423487 ? -101 : 1));
                    var_17 = (0 & -1160526420);
                    var_18 = ((-6483449948147974552 ? 2556987481 : 65535));
                    var_19 = (max(var_19, 2366954725));
                }
            }
        }
    }
    #pragma endscop
}
