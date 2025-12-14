/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124820
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
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) (short)45)))))) / (((((/* implicit */_Bool) 13947116U)) ? (13619879261631314775ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-24)))))));
                arr_8 [i_0 - 2] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_2 [i_0 - 2] [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)117))) : (var_8)))))) : ((~(((unsigned long long int) (unsigned char)0)))))))));
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_2)) - (83)))))), (((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */int) var_5))))) / (var_10))))))));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_11))));
}
