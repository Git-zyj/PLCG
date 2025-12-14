/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15072
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = var_1;
    var_12 ^= ((/* implicit */unsigned short) min((((((/* implicit */int) ((unsigned char) var_4))) * (((((/* implicit */int) (unsigned char)12)) * (((/* implicit */int) var_8)))))), (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (+(min((((/* implicit */int) var_8)), ((~(var_4))))))))));
                arr_4 [i_1] [i_1] [i_0 - 2] = ((/* implicit */int) min((min((((arr_2 [i_0] [(_Bool)1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((arr_3 [i_0 + 3] [i_1]) + (9223372036854775807LL))) << (((/* implicit */int) arr_0 [i_0])))))));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((max((arr_3 [i_0 + 3] [i_0 + 2]), (arr_3 [i_0 - 2] [i_0 + 2]))), (((/* implicit */long long int) ((signed char) arr_2 [i_0 + 4] [i_0 - 2]))))))));
            }
        } 
    } 
}
