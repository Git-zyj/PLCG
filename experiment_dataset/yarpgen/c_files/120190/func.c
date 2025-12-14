/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120190
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >= ((-(((((/* implicit */int) var_1)) * (((/* implicit */int) var_9)))))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
                var_16 -= ((/* implicit */long long int) ((((((/* implicit */int) min(((short)-31478), ((short)-31452)))) ^ (((/* implicit */int) var_1)))) <= (((((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (unsigned short)65522))))) >> (((((/* implicit */int) ((unsigned short) var_13))) - (15218)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (var_10))))));
    var_18 = ((/* implicit */unsigned char) (_Bool)0);
}
