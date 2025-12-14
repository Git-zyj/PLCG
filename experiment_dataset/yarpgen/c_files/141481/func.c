/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141481
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
    var_11 = 2147483647;
    var_12 = ((/* implicit */signed char) min((min((((var_1) ? (0) : (2147483647))), (((((/* implicit */int) var_2)) + (var_8))))), (((/* implicit */int) min((var_6), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_10))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)63)) / (-898066010)))))) ? (((/* implicit */int) ((arr_3 [(unsigned char)16]) == (((/* implicit */int) arr_2 [i_1] [(unsigned char)5] [i_1]))))) : (((-898066010) | (721609803))));
                var_13 -= ((/* implicit */_Bool) var_0);
                arr_5 [i_0] [(_Bool)1] = ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
    var_14 = -1157949886;
}
