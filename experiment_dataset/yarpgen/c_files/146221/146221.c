/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_12 = ((-(min(((11976104432980440979 << (11976104432980440979 - 11976104432980440963))), (max((arr_0 [i_0]), var_3))))));

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0 + 1] [1] |= 1;
            var_13 = (arr_3 [i_0 + 2] [i_1 + 1]);
        }
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            arr_9 [i_0 - 1] [i_2] = (max(var_6, (arr_7 [i_0 + 2] [i_2 - 1] [i_2 - 1])));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_14 = (max(1981172310, ((11976104432980441004 - (arr_8 [i_0] [i_0])))));
                        var_15 = (((((~(arr_7 [i_2 - 1] [17] [i_4])))) ? (var_9 % -1) : ((((!(arr_0 [i_4])))))));
                        var_16 &= (((arr_15 [i_0 + 2]) ? ((((arr_14 [i_0] [i_2] [i_2] [19] [19]) - ((-(arr_6 [i_0])))))) : -3848955645021474651));
                    }
                }
            }
        }
    }
    var_17 = -var_1;
    #pragma endscop
}
