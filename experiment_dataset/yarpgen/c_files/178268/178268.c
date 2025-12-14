/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = (((((min((arr_3 [i_1]), (arr_1 [i_0]))) - (((((arr_3 [i_0]) == var_5))))))) ? (arr_0 [i_0]) : (((min(-2241840802103821457, 2889150578760314155)) / 46897)));
                arr_6 [i_0] [i_0] = (((((156 - var_12) ? (((868398757 * (arr_4 [i_1])))) : ((var_1 ? (arr_3 [i_1]) : 15557593494949237466)))) - (var_3 / 80)));
                arr_7 [i_0] [i_1] = ((0 ? 16376 : 0));
                arr_8 [i_0] [i_1] [i_0] = max(((((((var_12 && (arr_3 [1])))) > (arr_2 [0] [0])))), ((~((var_12 ? (arr_3 [i_0]) : (arr_4 [i_1]))))));
                arr_9 [i_0] = (min(-10871, 221));
            }
        }
    }
    var_13 = var_9;
    var_14 = var_3;
    #pragma endscop
}
