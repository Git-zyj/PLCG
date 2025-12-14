/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174746
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_1 [i_0])));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned int) arr_0 [i_0])) * (var_10)))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) var_10)) : (-7833945439442848251LL)))) ? (((int) var_12)) : (((/* implicit */int) (signed char)0)))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 2) 
    {
        for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            {
                var_15 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) << (((min((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) arr_0 [i_2])) : (var_2))), (((/* implicit */long long int) arr_2 [i_1])))) + (1129379600LL)))));
                arr_11 [i_1 + 1] [i_1 + 1] [i_1] = ((/* implicit */signed char) ((long long int) (signed char)0));
            }
        } 
    } 
}
