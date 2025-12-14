/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_6;
    var_18 = (min(var_18, ((((((min(((min(0, var_2))), -17547)))) != -8510768715542509956)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((-17518 ? var_7 : ((var_3 ? (arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_2 [i_0 + 1] [i_0 - 1] [i_0 - 1])))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    var_19 = 4387908825596423241;
                    var_20 |= (((arr_2 [i_2] [i_2] [i_2]) ? ((((arr_7 [i_1] [i_2] [i_1] [i_1]) > var_12))) : 21576));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_21 = ((((max(25020, ((0 ? var_11 : 20920))))) * (~var_5)));
                    arr_12 [i_0] [i_0] [i_1] = (arr_6 [i_1] [i_0] [i_3]);
                    arr_13 [i_0] [i_0] [i_0] [i_0] = (arr_2 [i_0] [14] [i_3]);
                }
                var_22 = (min((min(4312549878867969698, (12 + 0))), ((((((min(var_11, (arr_8 [i_0] [i_1] [i_0] [14])))) + 2147483647)) >> (-1886256325 + 1886256341)))));
            }
        }
    }
    #pragma endscop
}
