/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (4294967295 >> (((((max(8299432865511974685, 2)) ^ (~54))) + 8299432865511974729)));
                    var_17 = var_11;
                }
            }
        }
    }
    var_18 = (min(2698472419, (((!(255 - 1808))))));
    var_19 &= (((var_3 & 3079434023388988087) ^ (min(var_16, ((min(842, var_2)))))));
    #pragma endscop
}
