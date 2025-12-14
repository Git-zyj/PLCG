/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159998
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) & (((/* implicit */long long int) max((((/* implicit */int) var_2)), (var_10))))))) ? ((~(var_13))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) ((var_3) > (min((((/* implicit */long long int) var_12)), (arr_4 [i_1])))));
                var_21 ^= ((/* implicit */unsigned char) arr_3 [i_1 + 1]);
                arr_6 [i_1] = ((/* implicit */_Bool) ((unsigned char) min((arr_0 [i_1 - 1] [i_1 + 1]), ((signed char)-100))));
            }
        } 
    } 
    var_22 &= ((/* implicit */_Bool) var_6);
    var_23 = ((/* implicit */signed char) var_11);
}
