/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139374
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) min((((arr_0 [i_1 + 2]) - (arr_0 [i_1 - 3]))), (arr_0 [i_1 - 1])));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (short)13356))) || (((/* implicit */_Bool) (unsigned char)195)))))) : (((((/* implicit */_Bool) (short)-32752)) ? (1298491879U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21879))))))))));
                arr_7 [i_0] = ((/* implicit */short) min(((~(min((arr_6 [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) arr_3 [i_0])))))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-9)) | (((/* implicit */int) arr_3 [i_1 + 3])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_3))));
}
