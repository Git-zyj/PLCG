/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134634
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
    var_12 -= ((/* implicit */unsigned int) var_1);
    var_13 = ((/* implicit */signed char) 13664494692408489506ULL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */long long int) (+(((/* implicit */int) (short)-25845))))) / ((~(7683725568916261996LL)))))));
                arr_5 [2ULL] [i_1] = ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) arr_3 [i_0])) == (max((13664494692408489506ULL), (var_4)))))));
                var_14 = ((/* implicit */_Bool) (signed char)81);
                var_15 = ((/* implicit */signed char) (unsigned char)54);
            }
        } 
    } 
}
