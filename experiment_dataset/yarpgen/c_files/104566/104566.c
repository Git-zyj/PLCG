/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = (((min((!-15349), var_8)) <= var_5));
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (((~697085122) ? (((~-617336811) ? (94 * 0) : (min((arr_2 [i_0] [i_0]), (arr_3 [i_0] [1]))))) : ((max(var_12, 1)))));
                var_20 = ((8294652665490107871 ? 1 : -1253935141));
                var_21 = (min(var_21, ((((!(arr_5 [10] [i_0 - 1]))) ? -1500277742 : -370601185))));
            }
        }
    }
    #pragma endscop
}
