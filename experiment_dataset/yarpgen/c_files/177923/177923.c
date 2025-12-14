/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = ((-(((!((min((arr_0 [i_2]), var_1))))))));
                    var_12 = ((-((min((arr_6 [i_0]), (arr_6 [i_2]))))));
                }
            }
        }
    }
    var_13 = (var_1 || var_0);
    var_14 = ((((min((var_7 - 8814381821678776374), (var_4 == -5197239150634025513)))) || (var_8 <= var_6)));
    var_15 = var_7;
    #pragma endscop
}
