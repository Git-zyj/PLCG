/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_12 *= (max(((min(2966532540, ((~(arr_3 [i_1])))))), (max((((var_3 ? 11 : var_9))), ((20649 ? 3996757871937634255 : -14563))))));
                arr_7 [i_0 + 1] [i_1] = (min(var_11, ((min((arr_4 [i_0] [0] [i_1 - 1]), (arr_4 [i_1] [i_1] [i_1 - 1]))))));
                arr_8 [i_0] = min(((((min(var_10, 2745713628)) >> (var_9 - 222)))), (arr_1 [i_0] [i_1 - 1]));
            }
        }
    }
    var_13 = ((var_9 ? (var_7 + var_2) : ((((var_1 % -121) | ((33554400 ? -5289807345393117949 : 10588)))))));
    var_14 += var_0;
    var_15 = ((var_5 ? 16832338702993963028 : ((((!(!79)))))));
    #pragma endscop
}
