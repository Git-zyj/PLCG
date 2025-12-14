/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184594
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)65519), (((/* implicit */unsigned short) var_12)))))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27600))) ^ (var_5)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_11)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((max((-4629961040732163343LL), (4629961040732163351LL))) + (-9155456874705390432LL))) - (((/* implicit */long long int) -1439807146)))))));
                arr_4 [i_0] = ((/* implicit */int) -1LL);
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(max((15498670137802752315ULL), (arr_2 [i_1] [(_Bool)1])))))) ? (min((min((arr_2 [i_0] [i_0 + 3]), (var_3))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_0])))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-6861)) ? (((/* implicit */int) (unsigned short)36766)) : (((/* implicit */int) (unsigned char)113))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) max((var_18), (min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (4860184334094141628ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) var_11))))))))));
    var_19 = ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (661580748083897659ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (var_2) : (((((/* implicit */int) var_4)) - (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_6))));
}
