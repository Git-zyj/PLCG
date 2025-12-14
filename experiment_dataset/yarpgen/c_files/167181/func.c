/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167181
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_0)))) - (((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_0]))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_8)), (901393354U)));
                var_14 += ((/* implicit */signed char) 63754638U);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (!(((((/* implicit */long long int) (+(366652155U)))) == (min((((/* implicit */long long int) (unsigned short)60252)), (var_13)))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */long long int) (short)2512)), (-5772859533983383644LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) 3761541242U)) * (18446744073709551615ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)49142)) - (((/* implicit */int) (unsigned short)44255)))))))))));
    var_17 = ((/* implicit */unsigned short) (+(var_3)));
}
