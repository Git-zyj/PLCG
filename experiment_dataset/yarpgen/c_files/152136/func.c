/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152136
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
    var_14 = ((/* implicit */unsigned char) ((max((max((12874480806969381962ULL), (((/* implicit */unsigned long long int) var_4)))), (12874480806969381962ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52725)))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (unsigned short)37107))));
    var_16 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1772084186597365418LL))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((_Bool) (((-9223372036854775807LL - 1LL)) - (arr_1 [i_0 - 1])))))));
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)12821))))), (max(((unsigned short)23822), (((/* implicit */unsigned short) var_9))))))))))));
                arr_5 [(unsigned char)2] [(unsigned char)2] [i_0] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) max(((unsigned short)41717), (((/* implicit */unsigned short) arr_0 [i_0])))))))));
            }
        } 
    } 
}
