/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102775
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
    var_19 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) -4498281957239761054LL)) || (((/* implicit */_Bool) (unsigned short)64512))))), (-4498281957239761067LL))), (var_1)));
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)53281)) || (((/* implicit */_Bool) var_11)))) ? ((~(var_16))) : (((((/* implicit */_Bool) 4498281957239761053LL)) ? (5482432784411524711LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8652)))))))) ? (max((var_3), (((-3333130328606768356LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30591))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)0)), (var_3)))) ? (-3703889294477736833LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((((/* implicit */_Bool) (unsigned short)58768)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_10))))))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_1 [i_0]))));
            }
        } 
    } 
}
