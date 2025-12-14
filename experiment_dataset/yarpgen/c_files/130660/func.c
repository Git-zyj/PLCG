/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130660
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
    var_16 &= ((/* implicit */_Bool) var_11);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (_Bool)1))) != (((((/* implicit */int) arr_1 [i_2 - 1])) ^ (((/* implicit */int) arr_1 [i_2 - 1]))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_2] [i_1] [i_2 + 1])) < (var_11)))) != (((/* implicit */int) min((((/* implicit */short) (signed char)-7)), (arr_1 [i_2 + 1]))))));
                    arr_9 [i_2] = ((arr_6 [i_2] [i_2] [i_2 - 1] [i_2 + 1]) & (((/* implicit */int) ((15U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 2] [i_2 + 1])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3))) + (((/* implicit */unsigned long long int) (-(var_5)))))), (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) var_8)) ? (13244867970924529398ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (max((((/* implicit */unsigned long long int) var_14)), (0ULL)))))));
    var_20 = ((/* implicit */_Bool) ((((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_7))))) <= (((/* implicit */int) ((short) var_1))))) ? (var_11) : (((/* implicit */int) var_13))));
}
