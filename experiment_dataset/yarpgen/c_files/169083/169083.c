/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 27172;
    var_20 = min((!var_7), var_16);
    var_21 &= var_17;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_22 = (((146 ? ((7229 ? 2505240161 : 4294967288)) : 13837)));
        var_23 = (max(var_23, ((min((min(3340480824, (((var_17 ? 76 : (arr_1 [i_0])))))), 1099687354)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_24 = (min(var_24, var_17));
        var_25 = (min(var_25, (~65535)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_12 [i_1] [i_4] [i_3] = ((((47541 ? 128 : 1311))) ? 3654057134 : 2387601205);

                        for (int i_5 = 3; i_5 < 6;i_5 += 1)
                        {
                            var_26 = (min(var_26, -2620676492));
                            arr_17 [i_1] [i_4] [i_4] [i_4] [2] [i_4] = (arr_16 [i_1] [i_2] [2] [i_3] [i_2] [i_5 + 4] [i_5 + 3]);
                            var_27 = (min(var_27, (((((5512883235165470338 ? (arr_0 [i_2] [i_2]) : 3197452007))) ? var_5 : var_17))));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_22 [7] [7] [1] [i_4] [i_4] = (((((arr_3 [i_6]) ? var_11 : 146)) != (arr_10 [i_1] [i_2] [1] [i_2] [i_2] [4])));
                            arr_23 [i_1] [i_2] [i_4] [i_2] [i_4] [i_6] [i_4] = (~2387601205);
                            arr_24 [i_1] [i_1] [i_4] [i_6] = (~4294967283);
                            var_28 = ((arr_21 [i_6] [i_6] [6] [3] [i_6] [i_6] [6]) | (arr_5 [i_3] [7] [i_6]));
                        }

                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            var_29 *= 0;
                            var_30 = arr_16 [i_1] [i_2] [i_3] [i_3] [i_7 + 1] [i_4] [3];
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_31 = (min(var_31, 11578));
                            var_32 ^= (arr_11 [i_2] [i_2] [i_2] [i_1]);
                            var_33 = (!var_13);
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_34 = ((47541 ? ((((arr_2 [i_4]) + 7))) : (((arr_15 [i_9] [i_4] [i_1]) ? (arr_20 [i_9] [i_4] [i_4] [i_3] [i_2] [6]) : 18388911806120894361))));
                            arr_34 [i_4] [9] [i_2] [i_3] [i_4] [9] = (((arr_8 [i_1] [i_2] [i_3] [i_2]) < (!var_5)));
                        }
                        var_35 = (min(var_35, var_12));
                    }
                }
            }
        }
        var_36 = ((34030 ? 2216938 : (arr_32 [i_1] [i_1] [i_1] [8] [i_1])));
        var_37 = ((-(6169653345907103053 && -15244)));
    }
    #pragma endscop
}
