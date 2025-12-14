/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((-(min(((~(arr_0 [i_0]))), 2143130397504346674))));
                arr_5 [12] [i_1] [i_0] |= 11613;

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    var_19 = (max((((((min(16979948303890334146, (arr_6 [i_2 - 1] [i_0] [i_0])))) || (arr_3 [i_0])))), (min(((((arr_6 [i_0] [i_0] [i_0]) && (arr_2 [i_0] [i_1 - 1])))), 53922))));
                    arr_8 [i_0] [i_1] [i_0] = ((+(((!(((arr_3 [i_0]) || (arr_7 [i_0]))))))));
                    arr_9 [i_0] [5] [i_2] = (~643080677);
                    arr_10 [i_0] [i_1 - 3] [i_2 - 2] = (min((((((min(var_18, (arr_7 [i_0]))))) ^ (arr_6 [i_2 + 1] [i_1 - 1] [i_1 + 1]))), (arr_3 [i_0])));
                }
            }
        }
    }
    var_20 = (((var_10 ? var_2 : var_3)));
    var_21 = ((311679542 ? ((((var_12 && var_7) != ((248 ? -100 : 122))))) : (!var_17)));
    #pragma endscop
}
