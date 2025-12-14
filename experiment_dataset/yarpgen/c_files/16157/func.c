/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16157
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
    var_15 |= ((((/* implicit */_Bool) ((signed char) max((var_6), (((/* implicit */unsigned long long int) var_2)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_13), (var_13))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (min((6836358410622320403ULL), (((/* implicit */unsigned long long int) (signed char)96)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
    var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max(((short)-2270), (((/* implicit */short) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_10)), (var_9))))) : (var_6))), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))))));
                arr_5 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) arr_1 [i_0] [i_1]))), (12726625321593374118ULL)));
                var_18 += (((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) : (16743425147382152924ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-87), ((signed char)127))))));
            }
        } 
    } 
}
