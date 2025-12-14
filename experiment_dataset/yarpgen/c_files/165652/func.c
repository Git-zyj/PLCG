/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165652
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_17 |= ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -2147483643)), (var_6)))), (min((var_7), (((/* implicit */unsigned long long int) 894872758)))))));
                    arr_9 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2147483643)), (-5960364356507446251LL)))) / (9ULL))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_9);
}
