/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_6));
    var_11 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = (arr_2 [i_1] [i_1]);
                var_12 = (((max((arr_3 [i_0 - 2] [i_0] [7]), -65535)) == ((max((arr_1 [i_0 - 1] [i_0 - 1]), ((-(arr_2 [9] [9]))))))));
                var_13 = 29742;
            }
        }
    }
    var_14 += 32760;
    var_15 = (((((var_8 ^ (var_1 && -32760)))) ? ((((var_8 && (!1236900470515889384))))) : ((var_0 % (max(3155504890, -22290))))));
    #pragma endscop
}
