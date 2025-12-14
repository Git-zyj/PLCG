/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_10 = (max(var_10, 32357));
                    var_11 = (i_0 % 2 == 0) ? (((var_8 ? ((((var_4 >> (((arr_1 [i_0] [i_0]) - 4881254510300154387)))) / (var_4 ^ -109))) : var_5))) : (((var_8 ? ((((var_4 >> (((((arr_1 [i_0] [i_0]) - 4881254510300154387)) - 220181652854869550)))) / (var_4 ^ -109))) : var_5)));
                    var_12 = (((arr_0 [0]) << (((((-109 + 2147483647) << (11925 - 11925))) - 2147483526))));
                    var_13 = ((~(min(((min(var_5, var_9))), ((~(arr_0 [i_2])))))));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_11 [i_0] [i_3] [i_0] [i_0] = (~var_4);
                    arr_12 [i_0] = ((((min((arr_3 [i_0] [i_1] [i_3]), ((var_2 ? var_2 : var_8))))) ? (arr_5 [i_1]) : (((((var_0 / (arr_8 [i_3] [i_0] [i_0])))) ? var_6 : (var_3 / var_9)))));
                }
                arr_13 [i_0] [i_1] = (((((var_2 / var_2) * (3427141030173741888 / 173))) / -7488233678622108582));
            }
        }
    }
    var_14 = -var_2;
    #pragma endscop
}
