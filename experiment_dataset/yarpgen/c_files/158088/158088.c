/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (!2891217007);
        var_21 = ((30 << (((max(((min((arr_2 [i_0]), (arr_2 [i_0])))), (min(1457092648, 1)))) - 89))));
    }
    var_22 = var_1;
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_23 *= (((((((((arr_1 [i_3]) - 21248))) ? (min((arr_1 [i_3]), (arr_3 [i_3]))) : ((min(224, (arr_11 [8]))))))) ? (((max(27216, (arr_4 [i_3]))))) : (((((-21237 ? -21234 : 18830))) ? (~2251799813652480) : 30))));
                    arr_12 [4] [4] &= ((-((var_5 - ((-26524 ? (arr_0 [i_2]) : (arr_2 [i_1])))))));
                    arr_13 [i_1] [i_2] [i_2] [i_2] = ((((min(30, ((max((arr_4 [7]), var_5)))))) ? (((((0 ? 60583 : -6032431964204205059))) ? (((min((arr_9 [i_1] [i_1] [12]), 20)))) : 1379228911723454797)) : ((min(1158387838, 29571)))));
                }
            }
        }
    }
    #pragma endscop
}
