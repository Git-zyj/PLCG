/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130164
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
    var_15 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8191))) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (((+(((var_11) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_3 [i_0] [i_0] [i_2])))) ? (arr_1 [i_2]) : (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))))))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_3 [i_0] [i_0] [i_0 - 3]), (((/* implicit */unsigned long long int) arr_2 [i_0 - 1]))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~(((/* implicit */int) (signed char)118)))))));
    var_19 = ((/* implicit */unsigned short) ((_Bool) ((((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_6))))) / (var_8))));
}
