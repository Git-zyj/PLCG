/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (max((max(((max(var_5, 33777))), (((arr_4 [i_0 - 2]) ? var_17 : 3221952206552906699)))), (((((max((arr_8 [i_0 - 2] [i_2]), (arr_2 [i_1] [i_1])))) ? ((-2372042426044316855 ? (arr_5 [i_0] [i_0 - 2] [i_0 - 2]) : (arr_3 [i_2]))) : ((min(255, 31770))))))));
                    var_20 *= (min(((max(((max(31752, var_12))), (((arr_5 [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_1]) : 32767))))), (max(((min(2899233550, 3238854501))), (min(var_2, 2951323378))))));
                    var_21 = (((((((max(1343643917, var_8))) ? ((1343643945 ? var_16 : 9684770276936687476)) : ((var_7 ? (arr_0 [i_0 + 1] [i_2]) : (arr_5 [i_0] [i_0] [i_0])))))) ? (max((max(5711690462058882946, 60154)), 31757)) : (max((max(var_14, var_0)), (max(var_14, (arr_6 [i_2])))))));
                }
            }
        }
    }
    var_22 = (min(((((max(60154, 32768))) ? (max(0, var_4)) : ((max(var_6, var_11))))), ((min((((18446744073709551610 ? 32745 : 32767))), ((var_18 ? var_8 : 2)))))));
    #pragma endscop
}
