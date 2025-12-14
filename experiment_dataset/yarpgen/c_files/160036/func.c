/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160036
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) arr_3 [i_1 + 1]);
                    arr_10 [i_0 + 1] [i_1] [(short)7] [i_0 + 1] = ((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((/* implicit */int) var_9))) != (((8296132522208286607LL) | (((/* implicit */long long int) arr_0 [i_0] [i_0 + 1]))))))));
                    arr_11 [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_9 [i_2] [i_1] [i_0]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)8))));
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) var_9))));
    var_16 = ((/* implicit */unsigned char) var_4);
}
