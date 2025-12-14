/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186801
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
    var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) max(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (var_14)))) ? (((long long int) (unsigned char)182)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6598586167521677710LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17))))))) : (-1LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((arr_3 [i_0] [(_Bool)1]) ? (((((/* implicit */int) var_9)) << (((((/* implicit */int) var_3)) - (62))))) : (((/* implicit */int) arr_5 [i_1] [(signed char)11])))) / (((var_14) >> (min((18446744073709551612ULL), (((/* implicit */unsigned long long int) var_15))))))));
                var_19 = ((/* implicit */_Bool) var_1);
            }
        } 
    } 
}
