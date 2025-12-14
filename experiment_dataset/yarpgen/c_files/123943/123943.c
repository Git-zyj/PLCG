/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_1 ? 7 : 0));
    var_13 = (max(var_8, 45980));
    var_14 = 45985;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_15 = (min(1875387817, 124));
                    var_16 = ((((((arr_5 [i_2] [i_2] [i_1]) ? (arr_6 [i_2 - 1] [i_2] [4] [i_2]) : (arr_6 [i_2 - 2] [i_1 + 2] [1] [i_0])))) ? (((19551 >> (3013527387299676373 - 3013527387299676366)))) : (arr_5 [i_2 - 2] [i_1 - 2] [8])));
                    var_17 = ((3775303201339336742 ? (var_5 || 884130552) : ((var_11 ? -1713692108 : (arr_5 [9] [i_1] [9])))));
                    var_18 = (min(var_18, ((((45990 ? 4907200786569620077 : var_1)) | ((((!45985) % (((-79 + 2147483647) >> (17534159383382860655 - 17534159383382860648))))))))));
                }
            }
        }
    }
    #pragma endscop
}
