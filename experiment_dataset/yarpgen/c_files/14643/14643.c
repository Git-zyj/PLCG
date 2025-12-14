/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((61001 ? ((((min(-48, 12153))) ? 12153 : (min(53382, 2790747650821181958)))) : (((var_2 ? -14660 : 53389)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 *= ((-(((arr_6 [i_2]) >> (((50796 + var_14) - 50784))))));
                    arr_7 [i_0] [i_1] &= (max(1254165035, (-127 - 1)));
                    var_18 &= (max(12147, 981236684));
                }
            }
        }
    }
    var_19 = (((var_6 ? (73 % 53401) : var_1)) >> ((((-48 ? -7321912819524926808 : (min(-5600433332306957302, 1)))) + 7321912819524926824)));
    var_20 = ((var_11 ? -48 : ((((!(((53401 ? 53389 : var_12)))))))));
    #pragma endscop
}
