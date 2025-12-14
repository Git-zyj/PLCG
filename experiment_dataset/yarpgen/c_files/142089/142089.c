/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-9007199254740991 ? -2045271734 : (+-9007199254740979)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    var_21 = ((~(arr_4 [i_0] [i_2 - 2])));
                    var_22 = (((~0) * -1));
                }
                var_23 = ((!(((((arr_7 [i_1]) * -9007199254740991)) < 3717510223096611445))));

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_24 = ((((!(arr_1 [3])))) >= (arr_3 [i_0 + 3]));
                    var_25 = (((-(arr_4 [i_0] [i_0]))));
                }
                arr_11 [i_1] [i_1] [i_0] = (arr_10 [i_1 - 2] [i_1 - 1] [i_1] [11]);
                arr_12 [i_0] = ((-(((arr_3 [i_0 + 1]) + 8))));
            }
        }
    }
    var_26 = (((((-3906 ? -39 : 26266))) ? var_0 : (-0 - var_8)));
    #pragma endscop
}
