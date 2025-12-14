/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117014
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
    var_18 = ((/* implicit */signed char) ((unsigned int) var_15));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_12))) % (var_13)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89))) : (max((((/* implicit */unsigned long long int) (unsigned char)229)), (var_2)))))));
                arr_4 [i_1] = ((/* implicit */unsigned long long int) (+(var_14)));
            }
        } 
    } 
}
