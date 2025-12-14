/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172344
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
    var_16 = max((((/* implicit */long long int) ((unsigned int) (_Bool)1))), (var_8));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_2 [i_0] [(_Bool)1])))))));
                arr_4 [i_0] [i_1] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -120122428)) ? (((/* implicit */int) (short)22678)) : (((/* implicit */int) arr_2 [i_0] [i_0])))));
                arr_5 [i_1] = ((/* implicit */long long int) arr_3 [(unsigned short)2] [i_1]);
                var_18 = ((/* implicit */short) ((long long int) (((_Bool)0) ? (17112610027607674304ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
            }
        } 
    } 
    var_19 *= ((/* implicit */_Bool) var_6);
    var_20 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((9223372036854775796LL), (((/* implicit */long long int) var_7))))) ? (536870911ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))), (5446339850515368589ULL)));
    var_21 -= ((/* implicit */_Bool) var_14);
}
