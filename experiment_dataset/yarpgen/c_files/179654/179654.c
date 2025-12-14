/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [8] = (((min(18446744073709551615, (arr_2 [i_0] [8]))) == (min((max(18446744073709551606, 160331904473435912)), (arr_2 [i_0] [i_1])))));
                arr_6 [i_0] [i_0] [i_0] = (arr_0 [i_0] [i_0]);
                var_10 |= (((((((min(18446744073709551615, 63)) != (min(50, 18446744073709551595)))))) & var_5));
                arr_7 [i_0] [i_1] |= ((var_8 ? (arr_4 [i_1]) : (arr_1 [i_1] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_11 = ((~(((1361978924 >= (arr_10 [i_1 + 3] [i_1 + 2] [i_1]))))));
                            var_12 = (max(var_12, (((((~(arr_11 [i_1] [i_1 - 2] [i_2 + 2]))) != 17196)))));
                            arr_14 [i_0] [i_2] [i_2] [i_0] [i_0] [i_0] = (--11763660352300791450);
                        }
                    }
                }
            }
        }
    }
    var_13 = ((var_1 == ((((max(var_3, 1361978924))) ? (max(var_7, 11647)) : var_9))));
    var_14 = var_2;
    #pragma endscop
}
