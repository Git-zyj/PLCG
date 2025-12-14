/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = var_1;
                arr_7 [2] &= (((96 | 16383) ? (((4294967284 ^ 17172222937427960384) ? (4294967284 & -1372276575706958857) : 1)) : 4294967284));
                var_19 = (((min(11171030817542699012, (arr_3 [3] [i_0]))) == (((var_14 * var_11) ? ((-4189961729685193142 ? 31417 : 0)) : 1))));
                arr_8 [i_0] [i_1] = (max(12617499694768951152, (arr_4 [0] [i_1 - 2] [i_0])));
            }
        }
    }
    var_20 = (max(((min(((var_3 ? var_7 : -15)), (min(1, var_15))))), ((min(5829244378940600463, 57)))));
    var_21 = ((((min(var_9, (min(2147483646, var_5))))) ? (min(0, 39)) : (((max(1, (min(1, 15))))))));
    var_22 = var_3;
    #pragma endscop
}
