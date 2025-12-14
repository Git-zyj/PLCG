/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(((var_8 % (var_6 - 791982750))), var_4);
    var_11 = (max(var_11, ((((var_0 * (4294967295 >> var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (((min((arr_2 [i_1] [i_1] [i_0]), 0)) % ((((arr_3 [i_0] [i_1]) <= (arr_3 [i_1] [i_0]))))));
                arr_4 [i_1] = ((((((arr_3 [i_0] [i_0]) >> 2))) || ((min(((36 >> (var_7 - 1241920945741488781))), -40)))));
                arr_5 [i_0] [i_1] = (min(((((arr_0 [i_0]) && (arr_0 [i_0])))), ((-17789 - (arr_0 [i_1])))));
            }
        }
    }
    var_13 ^= (!var_5);
    #pragma endscop
}
