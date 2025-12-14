/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173726
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
    var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) var_17)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) var_17)) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46748))) + (889770451U)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */short) (+(min((arr_5 [i_1]), (((/* implicit */unsigned long long int) 4294967295U))))));
                var_20 = ((/* implicit */unsigned long long int) var_10);
                arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_0 [i_1]) < (arr_0 [i_1])))) - (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)222)), ((unsigned short)80))))));
            }
        } 
    } 
}
