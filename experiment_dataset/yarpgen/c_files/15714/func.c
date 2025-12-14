/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15714
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
    var_20 = (!(((/* implicit */_Bool) ((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-2)) && ((_Bool)1)));
    var_22 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (-(var_12)))) ? (((((/* implicit */_Bool) var_17)) ? (1542072536) : (((/* implicit */int) var_16)))) : (var_12))) : ((+(((/* implicit */int) var_18)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_1] = max((((((/* implicit */_Bool) min((((/* implicit */short) arr_4 [i_0])), (arr_1 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1542072537)) || (((/* implicit */_Bool) (short)(-32767 - 1))))))) : (arr_2 [i_0 - 1]))), (((/* implicit */long long int) ((int) 9223372036854775807LL))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_3 [i_0] [i_1]))))))), (max((arr_6 [(signed char)2] [i_0 - 1]), (arr_6 [(_Bool)1] [i_0 - 1]))))))));
                var_24 += ((/* implicit */_Bool) (-(-1542072538)));
                var_25 += ((/* implicit */int) 18446744073709551615ULL);
            }
        } 
    } 
}
