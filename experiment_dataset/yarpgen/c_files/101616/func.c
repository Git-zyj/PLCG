/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101616
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
    var_15 &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)231)) / (((/* implicit */int) (unsigned short)65535))));
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~(max((3895821990960472961ULL), (((/* implicit */unsigned long long int) (signed char)-64)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 719798529U))))) | (((/* implicit */int) (!(((/* implicit */_Bool) -134217728)))))));
                var_17 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (arr_2 [i_0 - 3] [i_0])))), (14550922082749078655ULL))), (((((((/* implicit */_Bool) (short)-1962)) ? (13165965320987137336ULL) : (((/* implicit */unsigned long long int) 719798502U)))) << (((3575168766U) - (3575168707U)))))));
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (2843369627U)))) ? (((/* implicit */long long int) (-(arr_3 [(_Bool)1])))) : (3032499074142105850LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) <= (((unsigned long long int) (unsigned char)5)))))) : (var_7)));
            }
        } 
    } 
}
