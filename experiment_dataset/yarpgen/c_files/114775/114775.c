/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 += (-(arr_6 [0] [0]));
                    arr_10 [i_0] [i_2] [i_2] [1] = (((arr_0 [i_2]) ? ((((1656670734 < (arr_1 [i_0] [i_0]))))) : (arr_8 [i_0] [i_0] [0] [0])));
                    var_14 = (arr_9 [i_2]);
                    arr_11 [i_0] [i_0] [i_2] [i_2] = (4911827813922094782 / -4911827813922094762);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_14 [i_3] = (arr_5 [i_3]);
        arr_15 [11] [i_3] = (arr_8 [i_3] [i_3] [i_3] [i_3]);
        var_15 ^= (arr_8 [i_3] [i_3] [i_3] [i_3]);

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_16 = (((((((((arr_3 [i_3]) ? (arr_16 [1]) : (arr_12 [i_3] [11])))) ? ((~(arr_2 [i_3] [i_3]))) : (~1)))) ? ((((((arr_16 [i_3]) ? (arr_4 [i_4]) : 0))) ? 12579145407094648115 : -21596)) : ((((arr_17 [i_3] [i_4]) ? (arr_16 [i_3]) : 1981798759473703106)))));
            arr_20 [i_3] [i_3] [9] = ((9223372036854775807 ? ((-((48 ? (arr_19 [0]) : 7606584559594782192)))) : (((arr_12 [i_4] [i_3]) ? (((1 ? 145 : (arr_3 [i_4])))) : (((arr_17 [i_3] [i_3]) ? 0 : (arr_17 [i_3] [i_3])))))));
            var_17 *= (+((33554 ? (~12) : (((arr_17 [i_3] [5]) ? 11032909086935952226 : (arr_7 [i_3] [i_3] [3]))))));
            var_18 = (((+-475096643) / (+-6208059458175462152)));
        }
    }
    #pragma endscop
}
