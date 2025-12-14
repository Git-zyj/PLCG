/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((!((min(((min(var_7, 192))), (max((-32767 - 1), var_13))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_21 = -1073217536;
                            var_22 -= ((((51 << (44 - 29)))) && (max((arr_0 [i_3 - 3]), (arr_0 [i_3 - 3]))));
                            var_23 = ((!((min(4294967295, 47)))));
                            var_24 *= (max(((min((!8656602053452118755), (max(225, 4294967288))))), 549755813760));
                            var_25 = (max(var_5, ((min(((max((arr_0 [i_1]), var_14))), ((64919 ? (arr_0 [i_2]) : 68)))))));
                        }
                    }
                }
                var_26 |= (-62 % 186);
                var_27 = (max(var_27, ((min(((~(arr_1 [i_1]))), 19)))));
            }
        }
    }
    #pragma endscop
}
