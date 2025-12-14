/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181935
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (arr_1 [8] [i_0]))) >> ((((+(arr_2 [(unsigned short)5] [i_1]))) - (3935521859627733067LL)))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((unsigned short) ((unsigned long long int) (signed char)1))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (signed char)-2);
}
