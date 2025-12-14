/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13006
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) arr_0 [12ULL] [12ULL])) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */int) arr_2 [i_0])) << (((/* implicit */int) arr_2 [i_0]))))));
        arr_4 [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((/* implicit */int) (signed char)4))))), (arr_1 [i_0] [10])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((((/* implicit */int) (signed char)-1)) < (-2113758587)))))) : (max((2113758587), (((/* implicit */int) (signed char)0)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_1])) + (((/* implicit */int) (unsigned short)10315)))) - (((/* implicit */int) (unsigned short)20700))))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) max((arr_7 [i_1]), (arr_7 [i_1])))))))));
        arr_9 [i_1] = ((/* implicit */_Bool) (+((-(arr_7 [i_1])))));
        arr_10 [i_1] = ((/* implicit */_Bool) ((((arr_5 [i_1] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31359))))) | (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1])))) & (((/* implicit */int) max(((signed char)-5), (var_1)))))))));
    }
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((var_9) << (((/* implicit */int) max((var_8), ((signed char)0))))))));
}
