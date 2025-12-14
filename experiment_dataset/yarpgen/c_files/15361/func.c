/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15361
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((var_1), (arr_1 [i_0])))), (arr_2 [i_0])))) != ((~(16636578676644272698ULL)))));
                arr_7 [i_0] = ((/* implicit */unsigned int) max((1810165397065278918ULL), (((/* implicit */unsigned long long int) (unsigned short)65533))));
                var_17 = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned int) ((_Bool) var_9))), (var_11))));
                arr_8 [i_0] [18U] = ((/* implicit */unsigned int) arr_3 [i_1] [i_1] [8U]);
            }
        } 
    } 
    var_18 = var_5;
    var_19 = ((/* implicit */short) var_1);
}
