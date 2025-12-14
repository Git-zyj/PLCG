/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105936
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
    var_20 = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) (short)-13071))))) != ((~(((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) var_13)) ? (((2147483647) << (((((-2147483647) - ((-2147483647 - 1)))) - (1))))) : (((((/* implicit */_Bool) 5270446400408495178LL)) ? (((/* implicit */int) (short)13071)) : (((/* implicit */int) (unsigned char)0)))))) : (((((/* implicit */_Bool) (~(var_7)))) ? ((~(((/* implicit */int) (short)26499)))) : (((/* implicit */int) ((short) var_11)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min((((((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-26500))))) / (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned short) var_0)))))))), (((/* implicit */long long int) arr_3 [i_1] [i_0] [i_0])))))));
                var_22 += var_19;
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) 3113903777552552794LL)) && (((/* implicit */_Bool) (short)-1))))) : (2147483647))))));
}
