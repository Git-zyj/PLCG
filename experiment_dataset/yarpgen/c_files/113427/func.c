/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113427
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
    var_13 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1567925953U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38))) : (var_3)))) ? (max((var_1), (var_1))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [3] [i_2])) * (((/* implicit */int) (unsigned char)146))))) : ((-(10811582241499713968ULL))))))))));
                    var_15 |= ((((/* implicit */_Bool) -988669556)) ? (((((8188932508589128508ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)49))))) * (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)24)), (296213321U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_2]))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (((~(var_5))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)34))))))))) != ((~(max((((/* implicit */long long int) (signed char)6)), (var_7)))))));
}
