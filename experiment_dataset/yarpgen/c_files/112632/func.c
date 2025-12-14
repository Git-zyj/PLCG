/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112632
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)249)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2251799813685247LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) >> (((3364485167U) - (3364485154U)))))) : (((((/* implicit */_Bool) 843153910U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 10372297918839883404ULL)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [7LL])) : (((/* implicit */int) (signed char)-55))))) : (952019462U)))));
                arr_6 [i_1] [i_1] [i_1] = (_Bool)1;
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) var_1);
}
