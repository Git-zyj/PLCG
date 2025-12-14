/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15167
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
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [(_Bool)1] = ((/* implicit */short) ((_Bool) ((var_0) > (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2] [i_1] [i_1]))) + (arr_0 [11ULL])))))));
                var_14 = ((/* implicit */long long int) min((min((arr_0 [i_0 + 1]), (((/* implicit */unsigned int) (short)-22877)))), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) var_4))))), (-571645958))))));
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_2 [i_1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (signed char)-1)))))))), (((((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_13))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) | (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (min((((/* implicit */unsigned int) 260975708)), (var_11)))))));
}
