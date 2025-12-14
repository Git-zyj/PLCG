/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (max(((((((54 ? 13292063221188110570 : var_6))) ? ((5154680852521441046 ? -1927430694 : var_8)) : var_8))), (max(var_7, 13292063221188110570))));
    var_12 = ((var_0 ? ((5154680852521441036 ? (5154680852521441036 ^ -1906703596) : var_5)) : (((((max(18446744073709551615, var_4)) == (((max(var_6, -25021))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_2] = (~(max((~13292063221188110567), (arr_2 [i_2]))));
                    arr_12 [i_0] [i_1] [i_2] [i_1] = (!((((((arr_7 [i_0] [i_1] [i_2]) ? 4016714695 : var_6)) | (((-(arr_3 [i_0]))))))));
                }
            }
        }
    }
    var_13 = ((max((2329203118 & var_10), (var_8 & 5154680852521441052))) | ((((max(-692593178, var_3)) | ((var_3 ? 447351243 : var_4))))));
    #pragma endscop
}
