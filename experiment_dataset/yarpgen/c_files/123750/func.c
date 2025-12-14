/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123750
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
    var_16 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)44701)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (7725777621194877490ULL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 = (unsigned short)4319;
                var_18 = ((/* implicit */unsigned short) max((arr_1 [i_0 - 1]), (max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_0))));
    var_20 = ((/* implicit */unsigned int) var_14);
}
