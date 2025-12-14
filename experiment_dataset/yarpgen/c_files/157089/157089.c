/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(0, 101));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((4294967284 << (var_1 + 20332)))) ? (arr_4 [i_0] [i_0]) : (max(((var_2 ? var_10 : (arr_0 [i_0] [i_1]))), (arr_2 [i_0 + 4])))));
                var_14 = var_1;
                var_15 = (max((max(var_4, 0)), (max((((var_7 || (arr_3 [i_0] [4])))), var_5))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_14 [12] [i_2] = max(((((arr_8 [i_3 + 3]) % var_7))), ((var_1 ? var_0 : var_8)));
                    arr_15 [i_4] [i_4] [i_2] [i_3] = (((((212 ? 11 : 4294967295))) ? var_6 : ((((arr_13 [i_2 + 3]) ? (((var_3 ? (arr_11 [i_2] [6] [i_4] [i_4]) : (arr_10 [i_2])))) : ((var_6 ? var_4 : 1272253653)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_16 = ((0 ? 18 : 4294967281));
                                var_17 = (max(var_17, ((((((191 ? 16825837342857384988 : 12))) ? (arr_7 [i_2 + 3]) : ((max(var_1, var_11))))))));
                                var_18 = -9030649948690021801;
                                arr_22 [i_2] [i_3] [i_2] [i_2] [i_6 - 2] = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, ((max(var_2, (max(var_4, var_11)))))));
    var_20 = (((max((((var_4 ? -860461329 : var_4))), ((var_10 ? var_0 : var_3)))) << (var_10 - 29895)));
    #pragma endscop
}
