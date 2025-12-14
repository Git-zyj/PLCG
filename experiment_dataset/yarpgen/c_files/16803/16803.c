/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_18 - 1) ^ ((((!11) >= var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_20 -= (arr_4 [i_0] [i_0] [i_0]);
                var_21 = (max(var_21, ((((((12984741013483053421 ? 5462003060226498206 : 61855))) ? ((((var_18 != 65525) ^ (((arr_0 [i_0] [i_0]) ? var_5 : (arr_4 [i_1] [i_1] [i_1 - 3])))))) : (((arr_5 [i_1] [i_1 - 2] [i_1]) ? (1685242073597690190 > 8) : (arr_3 [i_1] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
