/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181841
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
    var_15 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)3584))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_0 [i_1 - 1])))), (((((/* implicit */_Bool) 14607811119401420898ULL)) ? (((/* implicit */int) (short)20742)) : (((/* implicit */int) arr_0 [i_1 + 1]))))));
                var_16 |= min((((arr_3 [i_0 - 1]) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (unsigned char)247)))), (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))));
                arr_5 [i_1] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((((-2390238664603080422LL) > (((/* implicit */long long int) -105073020)))) ? (((((((/* implicit */int) var_14)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)242)) - (230))))) : (((/* implicit */int) (unsigned short)42812)))) > (((((/* implicit */_Bool) max(((signed char)-126), ((signed char)36)))) ? ((-(((/* implicit */int) arr_2 [i_0] [i_1])))) : (((/* implicit */int) arr_2 [i_1 + 1] [i_0 - 1]))))));
            }
        } 
    } 
}
