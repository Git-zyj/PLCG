/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131990
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((((unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)11)), (var_3)))), (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (unsigned char)217))))))))));
                var_14 = arr_5 [i_0] [i_0] [i_0];
                var_15 = ((/* implicit */short) (+(max((((/* implicit */unsigned int) (unsigned char)217)), (min((var_3), (2394904705U)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (short)28593);
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_5);
    var_17 ^= max(((-(max((((/* implicit */int) var_4)), (536854528))))), ((~((-(var_0))))));
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 589062624U))) ? (var_6) : (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (unsigned char)38)), (var_2))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)39)))))))))))));
}
