/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((!var_4) ? ((4294967295 ? var_4 : var_1)) : (arr_0 [i_1 - 1] [i_1 + 1])))) ? (((((1181954836 ? 1239743238 : -5889657213415809341))) ? (arr_3 [i_1 + 1] [i_1] [i_1]) : 3854672779)) : 1876726026);
                arr_6 [i_0] = ((~(((arr_3 [i_1 - 1] [i_1 - 1] [i_1]) ? 26992 : 2413715688))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_3] = 15441;
                    var_13 = (min((~1), (!5889657213415809340)));
                    var_14 = (arr_0 [15] [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
