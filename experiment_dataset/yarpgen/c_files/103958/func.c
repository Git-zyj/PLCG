/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103958
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
    var_15 = ((/* implicit */int) ((min((9223372036854775807LL), (((/* implicit */long long int) 2034894723)))) <= (((/* implicit */long long int) (~(1435556847))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((3177373050U), (((/* implicit */unsigned int) (unsigned short)46903))))), (((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46896)))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))), (var_2)))) : (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned char) (signed char)0))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_4))))) : (var_3)))));
    var_17 = var_6;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) (unsigned short)18633);
                var_19 = ((/* implicit */long long int) ((int) min(((unsigned short)18632), (((/* implicit */unsigned short) (_Bool)0)))));
                var_20 -= ((/* implicit */unsigned int) ((((arr_1 [i_0]) >> (((min((var_8), (var_8))) + (2486998730843680379LL))))) << (((((/* implicit */int) var_12)) - (19376)))));
                arr_5 [i_1] = ((/* implicit */unsigned short) ((short) max((var_11), (arr_2 [i_1 + 1] [i_1 + 1] [i_1]))));
            }
        } 
    } 
}
