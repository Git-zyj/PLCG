/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157551
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) max((arr_5 [i_0 + 1] [i_0]), (arr_5 [i_0 - 1] [i_0])))) ? (((((/* implicit */_Bool) 420072936)) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_0])) : (((/* implicit */int) arr_5 [i_0 + 2] [i_0])))) : (((((/* implicit */int) arr_5 [i_0 + 2] [i_0])) + (((/* implicit */int) (unsigned char)180)))));
                    var_19 = ((_Bool) -1282494421);
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */int) (unsigned char)75);
}
