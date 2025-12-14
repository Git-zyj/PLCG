/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104892
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] |= ((/* implicit */short) max(((~(((/* implicit */int) min((var_4), (((/* implicit */signed char) arr_4 [i_0] [i_0] [i_1 + 1]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) -3650814320265891200LL)))))));
                var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) arr_5 [i_1 - 1])) : ((-(((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_0]))))))), (((((/* implicit */_Bool) arr_1 [i_0] [(signed char)7])) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-74), (((/* implicit */signed char) arr_4 [i_0] [i_0] [i_1 + 2]))))))))));
                var_20 *= ((/* implicit */signed char) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    var_21 ^= ((/* implicit */short) var_7);
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((-1285830778) >= (((/* implicit */int) var_1)))))) : (((var_13) + (var_12)))))) || (((/* implicit */_Bool) var_5))));
}
