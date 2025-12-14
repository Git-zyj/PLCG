/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109173
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
    var_20 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */short) min((((((/* implicit */int) (unsigned char)22)) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)238))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)22))))));
                arr_7 [i_0] [(short)0] = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */short) (unsigned char)240)), (var_13))));
            }
        } 
    } 
}
