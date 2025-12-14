/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131692
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
    var_10 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) min((var_4), (var_4)))) ? (var_7) : (((/* implicit */int) ((-532659803) == (((/* implicit */int) var_1))))))) + (2147483647))) << (((((((/* implicit */_Bool) 1667952144)) ? (((/* implicit */int) (short)5757)) : (((/* implicit */int) (signed char)-67)))) - (5757)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((signed char) arr_6 [i_0]))), ((+(min((var_3), (((/* implicit */unsigned long long int) arr_6 [i_0]))))))));
                    var_12 = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
                }
            } 
        } 
    } 
}
