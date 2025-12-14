/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17099
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
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_14), (var_15)))) ? (((((/* implicit */_Bool) 268431360)) ? (((/* implicit */int) (_Bool)1)) : (var_16))) : (((/* implicit */int) min(((_Bool)1), (var_11)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 268431360)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (signed char)79))))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (var_2))))))) : (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) arr_4 [i_1])))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13404825889144737933ULL)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (unsigned char)187))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_3) : (var_3)))) : ((~(11012202242705026594ULL))))))));
            }
        } 
    } 
    var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */unsigned int) (_Bool)1)), (640435433U))) : (((((/* implicit */_Bool) (unsigned char)34)) ? (((((/* implicit */_Bool) -3156307766149453027LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47))) : (640435433U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)47)))))))));
}
