/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (+((var_8 ? (!var_0) : (max((-127 - 1), 4433678723037498381)))));
    var_18 = (~((var_5 | ((10285272276317361596 ? var_4 : 268435455)))));
    var_19 = (~var_12);
    var_20 |= (!18446744073709551614);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 *= (-127 - 1);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                            {
                                var_22 = (var_2 ? (~4) : 18446744073709551608);
                                var_23 *= (arr_1 [i_0 - 2]);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                            {
                                arr_16 [i_0 + 2] [i_0 + 3] [i_2] [i_2] [i_0 + 3] = ((-(arr_9 [i_0] [i_0 + 1] [i_0 - 2])));
                                arr_17 [i_0] [i_0 + 3] [i_0] [i_2] [i_0] = var_7;
                            }
                            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                            {
                                arr_20 [i_6] [i_2] = 12347621286974241636;
                                var_24 = (max(((((4577380298348360432 ? 18446744073709551615 : 10152055619371007279)) | (((var_7 << (1084253362154401113 - 1084253362154401100)))))), ((min(((-(arr_12 [i_0 + 1] [i_2]))), -1)))));
                            }
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] = 2198989701120;
                            var_25 = (max(var_25, ((+((var_13 << (((arr_2 [i_0]) - 97))))))));
                            arr_22 [i_1] [i_2] [i_0 - 2] [i_2] = 0;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
