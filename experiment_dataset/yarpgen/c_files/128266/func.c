/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128266
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_7)) + (max((((/* implicit */unsigned long long int) var_8)), (((arr_3 [i_0]) | (arr_3 [i_1])))))));
                var_21 = ((/* implicit */signed char) (unsigned char)210);
                arr_5 [i_0] = ((/* implicit */unsigned int) (unsigned char)44);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((unsigned int) arr_0 [i_1 - 1] [i_0])) > (((/* implicit */unsigned int) var_1)))) ? (min((var_12), (((/* implicit */unsigned int) (unsigned char)212)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_3))))), (var_6)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_13))))) ? ((+(var_5))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)16384))))))), (((/* implicit */long long int) ((unsigned char) (unsigned char)217)))));
}
