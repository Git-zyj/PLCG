/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110633
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
    var_12 = ((/* implicit */short) (((+(((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)127)) >= (((/* implicit */int) (_Bool)1))))) + (((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) -3970004958902870255LL))))) : (((/* implicit */int) arr_0 [i_1]))));
                var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */short) max((arr_0 [i_0]), ((signed char)-113))))))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_0] [(unsigned short)2])) : (((/* implicit */int) var_11))))) || ((((_Bool)1) || (((/* implicit */_Bool) (unsigned short)0))))))));
                arr_6 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) max((arr_2 [i_1] [i_0]), (((/* implicit */unsigned short) var_7))))), (max((arr_4 [i_1]), (arr_4 [i_0])))));
                var_15 = ((/* implicit */_Bool) min((var_15), (min(((_Bool)0), ((_Bool)1)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((short) ((((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98))))) < (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
    var_17 = ((short) ((((/* implicit */_Bool) ((long long int) var_9))) && (((/* implicit */_Bool) var_6))));
    var_18 = ((/* implicit */unsigned int) var_6);
}
