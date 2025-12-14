/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123245
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [12] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (8)))) % ((-(arr_1 [(signed char)5]))))))));
                    var_17 *= ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_2] [i_1 + 1]);
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (16040822675926905042ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) 3835235431U))))) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */int) ((((/* implicit */_Bool) -724755749783729425LL)) || (((/* implicit */_Bool) var_14)))))));
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */_Bool) var_16);
}
