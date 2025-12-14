/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (((((((33522 ? (arr_5 [i_0] [i_0]) : 9223372036854775807))) ? ((32013 ? 32006 : 0)) : (arr_2 [i_0] [i_0])))) ? ((((((arr_5 [i_0] [i_0]) ^ (arr_1 [i_0] [i_0]))) < (arr_1 [i_0] [i_0])))) : (((arr_7 [i_0] [i_0] [i_0] [i_2]) ? (arr_2 [i_0] [i_0]) : 32018)));
                    var_19 *= ((~(((4294967295 / 206) * 882871516))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = max((((arr_4 [i_0]) >> (((arr_4 [i_1]) - 8219026965169120294)))), (((~(!0)))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] = 274877906936;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = 9223372036854775807;
    #pragma endscop
}
