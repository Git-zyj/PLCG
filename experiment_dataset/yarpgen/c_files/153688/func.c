/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153688
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) var_11);
                    var_16 = ((/* implicit */_Bool) (+(((16714427888173227514ULL) + (((/* implicit */unsigned long long int) arr_2 [i_0] [1LL]))))));
                    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((arr_4 [i_1]) ? (arr_1 [i_2]) : (arr_1 [i_1])))), (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) + (var_8)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */int) (short)-1073)) : (((/* implicit */int) (_Bool)1))))));
    var_19 = ((/* implicit */unsigned short) (_Bool)0);
}
