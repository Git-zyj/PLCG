/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 &= (+-1);
                                var_13 ^= (max(-432588036959380766, 333));
                                var_14 = (max(var_14, (((!(1 && 1))))));
                                var_15 = (max(var_15, (((~((~(((arr_12 [i_1 + 1] [i_1 + 1] [16] [0]) ^ 3146590746)))))))));
                                var_16 &= 18302;
                            }
                        }
                    }
                }
                var_17 -= (((max((arr_11 [i_0] [i_1 - 1] [i_0]), (arr_4 [i_1 - 1] [i_1 - 1] [i_0])))) || (((max(var_5, (arr_2 [i_1]))))));
                var_18 ^= ((+((((1 == 16) && ((max(-1913679339102541634, (arr_1 [i_0])))))))));
            }
        }
    }
    var_19 = ((((max(var_11, 1)) || (((var_2 ? -1913679339102541648 : -1913679339102541634))))) ? 1 : (~var_8));
    #pragma endscop
}
