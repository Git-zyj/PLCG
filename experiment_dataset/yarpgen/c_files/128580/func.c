/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128580
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3478008021662192415ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 1474574913U))))) - ((~(-619969874)))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) 9495866593940503829ULL))));
                    arr_8 [i_0] [10] [10] = ((/* implicit */short) (-(((/* implicit */int) (signed char)-96))));
                    arr_9 [17U] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)107))));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) ((((3161474406187823551LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))) : (((((/* implicit */_Bool) (short)14230)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))) : (4294967295U)))));
    }
    var_22 = ((/* implicit */short) (_Bool)0);
}
