/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114669
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
    var_12 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_2)), (((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    var_13 = ((/* implicit */unsigned long long int) var_10);
    var_14 = ((/* implicit */unsigned char) (((_Bool)1) ? (4217746875U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (((~(((/* implicit */int) var_7)))) / (((((/* implicit */int) (unsigned short)10485)) | (((/* implicit */int) (unsigned short)10485)))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) arr_0 [i_0] [i_1]);
                arr_6 [i_0] [i_1] [i_1] = (-(((/* implicit */int) (short)-1)));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10485))))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((arr_3 [i_1] [i_0]) + (9223372036854775807LL))) << (((5067301278730956154ULL) - (5067301278730956154ULL)))))) || (((/* implicit */_Bool) (~(var_8)))))))));
                arr_8 [i_0] [i_1] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1449351725753330355ULL)) ? (973693192U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) 32767))))) ? (min(((~(0ULL))), (((/* implicit */unsigned long long int) (signed char)16)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124))));
            }
        } 
    } 
}
