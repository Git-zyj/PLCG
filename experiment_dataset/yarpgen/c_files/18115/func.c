/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18115
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [(short)1] [(signed char)11] &= ((/* implicit */short) (_Bool)1);
                arr_7 [(unsigned char)4] [(unsigned short)12] [15ULL] = ((/* implicit */short) min((((arr_1 [i_0 + 3]) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))))), (((arr_1 [i_0 + 2]) - (((/* implicit */unsigned int) ((var_9) >> (((18446744073709551615ULL) - (18446744073709551606ULL))))))))));
                var_12 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 347200680U)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (short)18638))));
                var_13 -= ((/* implicit */unsigned int) (short)10271);
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_1);
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (short)-18638)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned int) ((_Bool) var_8))), (var_6)))));
}
