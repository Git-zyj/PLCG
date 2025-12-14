/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154966
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_0)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 |= max(((unsigned char)255), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1]))))));
                var_14 = ((/* implicit */long long int) (unsigned short)7);
                var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)240))))) ? (((arr_5 [i_0] [i_0] [i_0]) / (((/* implicit */int) (unsigned char)255)))) : (arr_5 [6U] [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_3 [(_Bool)1] [i_1] [(unsigned char)12])))) : (arr_1 [i_1])));
            }
        } 
    } 
}
