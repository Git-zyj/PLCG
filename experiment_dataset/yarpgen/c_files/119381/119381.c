/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((!var_0) || (((var_4 ? (1 > var_2) : -var_9))))))));
    var_12 -= var_4;
    var_13 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((((((((min(61, 79359882))) ? -102 : (arr_5 [i_0] [i_1] [i_2])))) == (((~824303359) * 3796763161)))))));
                    var_15 = (min(var_15, ((max((min((arr_3 [i_0 - 1]), (min(7582530199543983016, var_7)))), ((max(-var_5, (arr_2 [i_0] [i_1] [i_0])))))))));
                    var_16 = ((~(((498204135 <= (~var_10))))));
                    arr_7 [i_0] = (min((arr_0 [i_0 + 2]), (((arr_2 [i_0] [i_1] [i_0 - 3]) ^ (arr_2 [i_0] [i_1] [i_0 - 2])))));
                }
            }
        }
    }
    #pragma endscop
}
