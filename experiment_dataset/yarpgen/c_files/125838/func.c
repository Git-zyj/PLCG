/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125838
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
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) max((var_0), (((unsigned short) var_2))))), (((((/* implicit */int) ((((/* implicit */int) (unsigned short)38799)) < (((/* implicit */int) var_12))))) + (((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_1] [i_0] = ((unsigned short) arr_4 [(unsigned short)3] [i_0]);
                var_16 ^= var_9;
                var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)12534)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) min(((unsigned short)6), ((unsigned short)885))))));
            }
        } 
    } 
}
