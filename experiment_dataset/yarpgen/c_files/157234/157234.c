/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((((((min(2147483645, var_12))) ? (var_7 << 1) : -1))) ? (var_11 == -6625159035878217136) : -var_10));
    var_15 = (32707 ? (((-32767 - 1) ^ (min(2147483645, 77)))) : var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 += (min((((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1]))), ((~(arr_1 [i_1])))));
                    arr_9 [i_0] [i_0] [i_2] = (arr_1 [i_0]);

                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        var_17 = ((-(!1036884519739548288)));
                        arr_13 [i_0] [i_0] [i_2] = ((+(max((min((arr_12 [i_0] [22] [i_2] [i_0] [i_0]), (arr_0 [i_0] [8]))), (arr_0 [i_0] [i_0])))));
                        var_18 = (((((arr_12 [i_0] [i_3 - 3] [i_3 + 1] [i_3 - 3] [11]) ? (((-(arr_12 [i_0] [i_2] [i_2] [i_3] [i_0])))) : (min(1, (arr_4 [i_0] [i_1]))))) > 866956989));
                        var_19 = (max(var_19, ((((((arr_12 [i_1] [i_3] [i_3] [i_3] [i_3 - 1]) ? (arr_12 [i_1] [i_1] [6] [i_3] [i_3 - 3]) : (arr_12 [i_1] [i_1] [i_3] [6] [i_3 - 1]))) != ((~((-13 & (arr_10 [i_1] [i_2] [i_2] [i_3] [i_3]))))))))));
                        var_20 = (i_0 % 2 == zero) ? (((-12259420990632199029 >> (((max((arr_6 [11] [i_0] [i_2] [i_0]), ((-1744950547 ? (arr_6 [i_0] [i_0] [i_1] [i_3]) : -10237)))) - 987886663))))) : (((-12259420990632199029 >> (((((max((arr_6 [11] [i_0] [i_2] [i_0]), ((-1744950547 ? (arr_6 [i_0] [i_0] [i_1] [i_3]) : -10237)))) - 987886663)) + 1310842929)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
