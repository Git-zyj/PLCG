/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107546
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */int) ((max((min((12916806010224420274ULL), (((/* implicit */unsigned long long int) (signed char)-32)))), (((/* implicit */unsigned long long int) ((var_5) & (((/* implicit */int) (unsigned char)237))))))) > (((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned int) arr_2 [i_1] [i_0])))))));
                arr_8 [i_0] = ((/* implicit */unsigned char) ((_Bool) (-(max((((/* implicit */int) (unsigned short)42671)), (arr_1 [i_0]))))));
                var_18 &= (!(((arr_1 [i_0]) < (arr_1 [i_1]))));
                arr_9 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) || (((/* implicit */_Bool) var_9)))))) != (max((var_6), (((/* implicit */unsigned long long int) var_3))))));
            }
        } 
    } 
    var_19 = var_15;
    var_20 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 10764721293343229016ULL)))) ? ((((_Bool)0) ? (var_5) : (((/* implicit */int) ((((/* implicit */_Bool) 2926705950U)) || (((/* implicit */_Bool) (signed char)79))))))) : (((/* implicit */int) var_15))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */long long int) var_4)) : (var_9)))), (((((/* implicit */_Bool) var_0)) ? (5529938063485131341ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned long long int) ((int) 2874545568801298222LL))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) var_13))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (var_17)))))));
}
