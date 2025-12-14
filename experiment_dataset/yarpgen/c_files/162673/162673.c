/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((6061845366151366517 % (-6061845366151366531 % -6061845366151366503)))) ? ((var_2 ? 255048707 : (2154203262289383963 % var_10))) : ((var_8 % (22809 % 5708114601412996802)))));
    var_18 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [8] [8] [8] [8] &= arr_4 [i_2 + 1] [i_2 + 1];
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = ((((8396674601680547055 ? -271892267 : 17875662499203682849)) % (((((((arr_0 [i_4]) ? var_3 : var_14))) ? (max(6061845366151366503, var_15)) : var_7)))));
                                var_20 = (((((((7421511034766257005 ? 63 : -8040))) ? (((6061845366151366502 ? (arr_0 [0]) : var_9))) : (max((arr_7 [0] [i_2] [4]), -8396674601680547055)))) & var_5));
                                var_21 = (((min((7933472025713098002 % var_15), (-6061845366151366517 % 127))) % var_14));
                                var_22 = ((((((var_13 ? 16348316197425860957 : 1)) % 6061845366151366503)) % ((((arr_1 [i_1]) % ((var_15 ? (arr_11 [i_2] [i_1] [0] [i_2] [i_4]) : var_3)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (7933472025713098002 << 0);
    #pragma endscop
}
