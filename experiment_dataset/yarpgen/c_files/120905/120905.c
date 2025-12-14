/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((((var_9 ? var_7 : var_0))) ? (((min(29, var_8)))) : var_4)))));
    var_11 = (min(366473452, ((min((3483468414 && 219), var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 = (((-32767 - 1) ? ((((arr_10 [i_2] [i_2] [i_2] [i_3]) >= -32762))) : (!4294967273)));
                                var_13 &= (((-(arr_1 [i_0]))));
                                var_14 = (max(var_14, (((36 ? 219 : 22)))));
                            }
                        }
                    }
                    var_15 = (min((((-1908340335 == (arr_3 [i_0] [i_1] [i_2])))), (!5789067328503559393)));
                    arr_12 [i_1] [i_2] [i_1] = (((arr_7 [i_0] [i_1] [i_2] [i_1]) ^ ((min(var_2, var_8)))));
                }
            }
        }
    }
    #pragma endscop
}
