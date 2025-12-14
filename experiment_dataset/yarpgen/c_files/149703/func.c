/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149703
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max((var_4), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))))))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_16 += ((/* implicit */signed char) (((-(arr_2 [i_0 - 4]))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))));
                var_17 = ((/* implicit */short) var_2);
            }
        } 
    } 
}
