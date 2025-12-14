/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138612
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
    var_19 = var_10;
    var_20 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */short) ((((unsigned long long int) 7620533531757443321ULL)) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_12);
                var_21 = ((/* implicit */unsigned short) ((int) (unsigned short)55313));
            }
        } 
    } 
}
