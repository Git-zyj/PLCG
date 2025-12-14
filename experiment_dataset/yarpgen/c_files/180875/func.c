/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180875
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
    var_14 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((((/* implicit */int) var_4)) / (((/* implicit */int) var_12)))), (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) var_0)) <= (4021208125783613751ULL))))))))));
                arr_5 [(unsigned char)5] [i_1] [i_0] = ((/* implicit */short) (signed char)95);
            }
        } 
    } 
    var_16 = var_2;
}
