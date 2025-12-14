/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1149
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
    var_14 += ((((/* implicit */_Bool) -335580309)) ? (-727391913) : (727391913));
    var_15 = ((/* implicit */short) var_6);
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_11))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) var_2);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-11918))))) ? (((/* implicit */int) arr_0 [2])) : ((((-(((/* implicit */int) var_2)))) << (((((((/* implicit */long long int) 727391910)) + (-541280172544425183LL))) + (541280171817033290LL)))))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (-((-(((/* implicit */int) arr_0 [i_0 - 1])))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_20 &= ((/* implicit */_Bool) arr_0 [9ULL]);
            var_21 -= ((/* implicit */unsigned int) min((9223372036854775787LL), (-541280172544425183LL)));
        }
    }
    for (long long int i_2 = 4; i_2 < 10; i_2 += 3) 
    {
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) max((var_11), (((/* implicit */short) (_Bool)1)))))));
        var_23 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) - ((~(-1968374590)))))), (1023U)));
        var_24 = ((/* implicit */unsigned long long int) min((((unsigned int) min((-804717305383052875LL), (((/* implicit */long long int) (signed char)77))))), (((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_2 [(_Bool)1] [(_Bool)1]), (var_2)))))))));
    }
}
