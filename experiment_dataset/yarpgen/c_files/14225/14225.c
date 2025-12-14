/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (((var_8 && var_12) ? 6571629829201827135 : (max((min(var_15, var_9)), var_13))));
    var_17 -= ((-(min(9223372036854775801, 2132246945))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (+(((24337 < 64) ? 24337 : ((max(-4800, 24359))))));
                arr_4 [i_0] [i_0] = ((min(122, (arr_2 [i_0 - 2] [i_0 - 2]))));
                var_19 = (min(var_19, ((min(((max((arr_3 [i_0 - 4] [i_0 - 4] [i_0 - 3]), (arr_3 [i_0 - 4] [i_0 - 1] [i_0 - 4])))), (((arr_3 [i_0 - 4] [i_0 - 4] [i_0 + 1]) - (arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 3]))))))));
            }
        }
    }
    var_20 = max(((var_15 ? (((max(0, var_14)))) : var_1)), (((!((max(var_1, var_11)))))));
    #pragma endscop
}
