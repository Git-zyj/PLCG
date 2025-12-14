/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171340
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
    var_17 = ((/* implicit */unsigned char) var_4);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-5505)) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_8 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)81))) : (arr_7 [i_0 - 2])))) ? (arr_7 [i_0 + 2]) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                arr_9 [i_0 + 1] [i_0 - 3] [i_0 + 1] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [(short)10] [18U])), ((short)-8332)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_0] [(_Bool)1]), (((/* implicit */signed char) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) : (var_2))))));
            }
        } 
    } 
}
