/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105996
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
    var_19 = ((((/* implicit */_Bool) (unsigned short)44837)) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)28705))))), (((((/* implicit */_Bool) var_5)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44837))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) -1942994021)) ? (1942994020) : (((/* implicit */int) var_2))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) 1942994021);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)13])) ? ((+(arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (+(max((184246090), (-1942994021))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_7 [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-2147483647 - 1)), (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)384))))))) : (((/* implicit */int) ((arr_1 [i_1]) == (arr_1 [i_1]))))));
        var_21 = ((/* implicit */int) ((unsigned long long int) var_2));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((arr_0 [i_1] [i_1]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4222670647U)) ? (2147483647) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))) / (1028853662415253819ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) 1942994021)) : (-1319562178222715077LL)))))))))));
    }
}
