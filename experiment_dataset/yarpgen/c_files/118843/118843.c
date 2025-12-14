/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = ((!var_1) || (arr_1 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((((((-286705413 / ((-(arr_5 [0])))))) ? ((-((-(arr_1 [12]))))) : ((max(((var_6 * (arr_5 [2]))), ((var_10 * (arr_5 [4])))))))))));
                    arr_7 [i_0] [i_0 - 1] [i_0] = (((((min(var_8, (arr_1 [i_0])))) || (!var_2))));
                    arr_8 [i_0] = (!(-5423 && -87));
                }
            }
        }
    }
    var_16 = var_14;
    #pragma endscop
}
