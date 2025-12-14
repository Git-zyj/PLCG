/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145694
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-21138))) ^ (var_11)))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (1117103813820416LL)))))) ? ((~(max((17855165322344706561ULL), (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (short)-14176))))))))));
    var_16 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 *= ((/* implicit */short) 17LL);
                arr_6 [i_0] |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) 27LL)))))), (arr_3 [i_0] [i_0])));
                var_18 |= ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) arr_4 [i_0])))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-((+(9223372036854775787LL))))))));
            }
        } 
    } 
}
