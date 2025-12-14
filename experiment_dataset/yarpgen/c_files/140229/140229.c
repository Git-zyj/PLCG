/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] = (arr_4 [i_0 + 1] [i_0 + 1]);
            var_11 = ((((max((min((arr_2 [i_0 - 2]), var_4)), ((((arr_0 [i_0] [i_1]) && (arr_3 [i_0] [i_0] [i_1 - 1]))))))) ? (((~(arr_3 [i_0 + 1] [i_0 - 1] [i_1 - 3])))) : (max((max((arr_2 [1]), (arr_1 [i_0] [i_0 + 1]))), ((min((arr_3 [i_0] [1] [i_0 - 1]), var_1)))))));
        }
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            arr_10 [4] [i_2] [i_2 + 2] = max((arr_0 [i_2] [i_2 + 3]), (max((arr_0 [i_2] [i_2 + 1]), var_9)));
            arr_11 [1] [i_2 + 1] [1] = (((max((arr_4 [i_0] [i_0 - 3]), (arr_4 [i_0] [i_0 - 2]))) ? ((max((arr_0 [i_2 + 1] [i_2 + 1]), (arr_0 [i_2 + 3] [i_2])))) : ((max((arr_0 [i_0] [18]), var_3)))));
            arr_12 [i_0] [i_0] [i_2] = (((!var_9) ? (arr_9 [i_2] [19] [i_0]) : (((arr_9 [2] [9] [2]) & (min(90711968, 63))))));

            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                arr_15 [i_3] [i_2] = (arr_9 [10] [i_3 + 2] [i_0 - 2]);
                arr_16 [i_2 + 2] &= (+-1);
            }
            arr_17 [i_0 + 1] = (((!var_2) ^ var_5));
        }
        arr_18 [i_0 - 1] [1] = (((((~(max(20, -20))))) ? (min((arr_13 [i_0]), (arr_2 [i_0]))) : (((min(var_6, (arr_2 [i_0 + 1])))))));
    }
    var_12 = (min(var_12, (((max(-var_6, ((min(var_6, var_3)))))))));
    var_13 = var_1;
    #pragma endscop
}
