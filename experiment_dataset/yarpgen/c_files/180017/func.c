/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180017
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_8 [i_0] [(signed char)15] [(signed char)20] = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0])) + (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (unsigned char)152)))))));
                var_11 = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_0] [12U])) & ((-(((/* implicit */int) (unsigned short)65519))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) var_9);
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_8)))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_1), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_0)))))) ? (var_4) : (((/* implicit */int) (_Bool)1))));
}
