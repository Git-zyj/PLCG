/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120743
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
    var_12 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_11))))) ^ (max((var_5), (((/* implicit */unsigned int) var_10))))))) ? (max(((-(var_7))), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    var_13 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? ((~(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
                arr_6 [i_0] [12LL] |= ((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_4 [i_0])) / (((/* implicit */int) var_8)))) >> (((((/* implicit */int) (unsigned char)201)) - (174)))))), (min((((/* implicit */unsigned int) arr_4 [i_1])), (var_5)))));
            }
        } 
    } 
}
