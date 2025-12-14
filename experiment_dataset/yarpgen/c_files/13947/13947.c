/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((((arr_1 [i_0 - 3] [i_1 + 1]) << (3145728 - 3145708)))) ? ((min(42290, 1))) : (((29 && (arr_1 [i_0 - 3] [i_0 - 3]))))));
                var_11 = ((!(arr_1 [i_0] [i_0 + 3])));
                var_12 = ((((max(8170, 65497))) ? ((max((arr_1 [i_0 - 1] [i_0 + 4]), (arr_0 [i_0] [i_1 - 2])))) : ((((3238332847733557464 ? -3238332847733557464 : 9179681555475077906)) - (55032 - 3249137511133942021)))));
                arr_6 [i_0] [i_0 + 4] [i_0] = (arr_1 [i_0 + 2] [i_0 + 4]);
                var_13 = ((((var_5 ? (arr_1 [i_1 + 1] [i_1 - 2]) : 1010228750150857610)) > 2563133527));
            }
        }
    }
    var_14 = ((var_10 ? ((var_8 | (1 | var_0))) : var_8));
    #pragma endscop
}
