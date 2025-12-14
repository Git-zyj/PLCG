/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108966
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
    var_20 += ((/* implicit */unsigned long long int) (~(var_7)));
    var_21 += ((/* implicit */unsigned int) var_17);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [(unsigned char)7] = ((/* implicit */signed char) 9457896179186871657ULL);
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 34989366U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159)))));
                var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_0])), (var_19)))))))));
            }
        } 
    } 
}
