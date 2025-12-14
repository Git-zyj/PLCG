/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137759
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [15ULL] [i_0] = ((/* implicit */unsigned short) ((((arr_1 [i_0]) / (((/* implicit */int) arr_5 [i_0])))) | (((/* implicit */int) ((((/* implicit */_Bool) (+(var_7)))) || (((/* implicit */_Bool) arr_3 [i_0])))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3953280931403962391LL)) || (((/* implicit */_Bool) (unsigned short)4032))))), ((-(arr_3 [i_0]))))), (((/* implicit */unsigned long long int) var_2))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((((/* implicit */_Bool) 3953280931403962394LL)) && (((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))) : (7483618240776602171LL))) : (((/* implicit */long long int) 864450280)))) <= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) min((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) << (((((/* implicit */int) (short)30720)) - (30718)))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (short)30720)), (var_7)))))))));
    var_12 = ((/* implicit */unsigned short) var_1);
}
