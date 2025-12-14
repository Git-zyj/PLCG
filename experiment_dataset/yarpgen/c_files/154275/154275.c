/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 + ((((248 - var_1) || (var_12 | var_11))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_14 = (((((199 << (var_1 - 81)))) >> ((((15 + ((~(arr_0 [i_2]))))) - 11103))));
                        var_15 = (((((arr_4 [i_0]) ? (arr_5 [i_2]) : (((max(var_10, (arr_4 [i_0]))))))) < ((((arr_4 [i_0]) ? (arr_6 [i_0 + 1] [i_0] [i_2 + 1] [i_3]) : (!var_0))))));
                    }
                    for (int i_4 = 3; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_16 = var_7;
                        arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_4 - 1] = var_5;
                    }
                    var_17 = ((-((-(arr_8 [i_0] [i_0] [i_1] [i_1] [i_0])))));
                    arr_14 [0] [i_1] [i_2 - 1] |= (max((((((var_4 << (((arr_11 [i_0 + 1] [i_0 - 1] [i_1] [2] [i_2 - 1] [i_2 + 1]) - 162)))) + ((var_8 ? (arr_2 [2] [6]) : (arr_0 [i_0])))))), var_9));
                    arr_15 [10] [i_0] [9] [i_0] = ((249 ? var_9 : ((max((var_7 * var_0), 3160659359)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                {
                    var_18 = var_7;
                    arr_24 [i_5 + 3] [i_6] [i_6] = ((min(4285982556681743188, (arr_20 [i_5] [i_6 + 3] [i_7]))));
                    arr_25 [4] [i_7] |= (min((((((((8155 || (arr_17 [i_7]))))) % (min(var_12, var_1))))), (max((max((arr_19 [0] [i_6]), (arr_21 [i_7]))), (arr_20 [i_6] [i_7 - 1] [i_7 + 2])))));
                }
            }
        }
    }
    #pragma endscop
}
