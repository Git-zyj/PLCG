/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167420
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) min(((~(max((((/* implicit */long long int) arr_8 [i_0])), (var_11))))), (((((/* implicit */long long int) 1781832765U)) - (((((/* implicit */_Bool) (signed char)-98)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)101)))))))));
                    var_13 ^= ((/* implicit */short) (-(((/* implicit */int) max((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0 - 1] [i_0 - 1]))))));
                    var_14 = ((/* implicit */unsigned long long int) arr_5 [i_0] [(_Bool)1] [(_Bool)1]);
                    var_15 = arr_1 [i_1] [4ULL];
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -128473398924863751LL)) ? (128473398924863750LL) : (5448283597121115064LL)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) (+((~(((/* implicit */int) var_7))))))) ? (max((((/* implicit */long long int) (unsigned short)30237)), (max((((/* implicit */long long int) var_4)), (var_11))))) : (((/* implicit */long long int) var_1))))));
    var_18 = ((/* implicit */_Bool) -194849907146099572LL);
    var_19 = max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)30234)), (var_3)))) ? (var_5) : (((/* implicit */long long int) var_4)))));
}
