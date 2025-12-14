/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178375
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((((/* implicit */int) var_9)) > (((/* implicit */int) var_5)))) ? (min((((/* implicit */long long int) arr_0 [i_1 + 2])), (var_8))) : (((/* implicit */long long int) (+((~(((/* implicit */int) var_1))))))))))));
                arr_4 [i_0] = (short)-24;
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((unsigned char) (((-(((/* implicit */int) (unsigned char)46)))) == (((/* implicit */int) var_3)))));
}
