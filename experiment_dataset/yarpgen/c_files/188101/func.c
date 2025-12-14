/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188101
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) min((min(((-(((/* implicit */int) (signed char)-115)))), ((-(((/* implicit */int) (unsigned char)11)))))), (((/* implicit */int) (short)127))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) (-(390880985584208824ULL)));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (-(max((((/* implicit */int) (signed char)-112)), ((-(((/* implicit */int) (short)8191)))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) max((max((18055863088125342775ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (short)837)))))));
    var_18 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)63488))));
}
