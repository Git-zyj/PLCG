/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 *= 0;
                    var_20 ^= 1;
                    var_21 = (~var_5);
                    var_22 = (max(0, (arr_5 [i_1])));
                }
            }
        }
    }
    var_23 += var_2;
    var_24 *= ((min((0 || -2652204898350703807), var_10)));
    var_25 = (max(var_25, (((min((((var_3 && (-9223372036854775807 - 1)))), var_4)) == ((max(var_16, (!22325))))))));
    var_26 = (min(var_26, 26));
    #pragma endscop
}
