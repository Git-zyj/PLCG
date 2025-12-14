/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161225
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
    var_18 = ((/* implicit */unsigned short) ((((long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 10401991690881078288ULL))))) & (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    var_19 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-4771993378386915586LL)))) ? (((unsigned int) var_17)) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21662)))))), (var_0)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (_Bool)0);
                arr_5 [i_0] [2] &= ((/* implicit */unsigned char) var_2);
            }
        } 
    } 
}
