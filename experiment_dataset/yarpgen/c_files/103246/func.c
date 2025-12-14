/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103246
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
    var_11 = ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (var_9)))))) : (((/* implicit */int) var_0)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_12 = var_8;
                    var_13 = ((/* implicit */unsigned short) min((-2109797126), (var_10)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((2752413632428834373ULL) >> (((((/* implicit */int) (unsigned short)960)) - (912))))))));
}
