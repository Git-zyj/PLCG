/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((((((4194303 ? (arr_0 [i_1 + 1]) : -6741280702855068521)) + (((arr_3 [i_1]) ? 17454747090944 : 4294967295))))) || ((max(((((-31961 + 2147483647) >> (149 - 127)))), 4294967282)))));
                var_18 = ((((((((~(arr_6 [i_0] [i_1])))) ? (((13 ? 220 : -3))) : 4292675206))) ? 813597403 : (arr_2 [i_0])));
                var_19 -= ((((max(((((arr_6 [i_0] [i_1]) || (arr_0 [i_1 + 1])))), 14629))) | ((((((4294967295 ^ (arr_1 [i_0 - 1])))) || (arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_20 = ((((1 ? (arr_4 [i_0] [i_1] [i_0]) : (arr_8 [i_2] [i_1] [i_0 + 2]))) * (((((((arr_10 [i_3]) ^ 1))) ? ((max(-14623, 34214))) : (-6284 & 1))))));
                            var_21 = ((~((-1 ? 1496939353 : 255))));
                            arr_12 [i_0] [i_1] [i_2] [22] [i_3] [i_3] = 1;
                            var_22 = ((((((((arr_11 [i_2] [i_2] [i_3] [10] [i_0]) >> (((arr_1 [i_3]) - 31144))))) + (max((arr_10 [i_3]), 1)))) ^ ((((((((-32767 - 1) ? (arr_9 [i_0] [i_1] [i_2]) : (arr_4 [i_0] [19] [i_0 + 2])))) > (max((arr_11 [i_0] [i_1] [i_3] [i_3] [i_1]), (arr_2 [i_1])))))))));
                        }
                    }
                }
            }
        }
    }
    var_23 *= (((((var_16 ^ (min(var_3, -20940))))) ? (((2798027942 ^ var_2) ? (min(var_15, var_3)) : (((min(32, var_8)))))) : ((((((1496939342 ? var_11 : -6713131968417644094))) ? ((var_3 ? -27622 : var_12)) : ((0 ? 125 : -2147483639)))))));
    #pragma endscop
}
