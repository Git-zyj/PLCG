/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((10 >> (2192989382 - 2192989346)));

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_11 = var_4;
        var_12 = min(2192989382, 2192989382);
        var_13 = ((arr_1 [i_0]) ? -var_6 : (-109 || var_6));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, -113));
        var_15 = ((((((arr_1 [i_1 - 1]) ? (arr_1 [i_1 + 2]) : 3007794038))) || ((((arr_1 [i_1 - 1]) ? 23 : var_2)))));
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] [12] = (arr_6 [i_2 + 2]);
        var_16 += (((((var_0 ? 66 : (arr_6 [i_2 + 1])))) ? ((((var_6 && (!var_2))))) : (min((arr_0 [i_2] [i_2 - 1]), (arr_2 [i_2 + 1])))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    {
                        var_17 = ((var_8 > ((((var_2 + (arr_4 [i_3] [1]))) + (~31250)))));
                        var_18 = (((var_1 + 2147483647) >> var_8));
                        var_19 = (max(var_19, ((((~(arr_1 [i_4])))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_19 [i_6 + 1] = ((~((4379778753104824645 ? 4026129634 : -31559))));
        var_20 = (min(((-187 ? 51 : 1679554728)), (((((~(arr_1 [i_6]))) * (~30))))));
    }
    #pragma endscop
}
