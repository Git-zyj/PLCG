/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12019
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_5) ? (var_6) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
                var_14 = ((/* implicit */unsigned short) var_12);
                arr_5 [i_1] = ((/* implicit */signed char) (~(((unsigned int) ((unsigned char) (unsigned char)63)))));
                arr_6 [i_1] = ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
    var_15 = ((/* implicit */short) var_5);
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (16034927039352160687ULL)));
}
