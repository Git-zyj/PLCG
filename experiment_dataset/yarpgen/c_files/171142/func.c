/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171142
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_2 [i_0])), (((((((/* implicit */int) (_Bool)1)) == (var_4))) ? (((/* implicit */long long int) ((/* implicit */int) ((4294967295U) < (var_1))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (var_0)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) 544312860U);
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_8 [(signed char)7] [i_1] = ((/* implicit */unsigned char) max((((long long int) min((((/* implicit */long long int) arr_7 [i_1] [i_1])), (var_0)))), (((/* implicit */long long int) 518985686))));
        arr_9 [(_Bool)1] = ((/* implicit */unsigned char) 2843462154U);
        arr_10 [i_1] = ((/* implicit */short) min((arr_5 [13ULL]), ((+((+(arr_6 [i_1])))))));
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_6 [i_1]), (((/* implicit */unsigned int) arr_7 [i_1] [i_1]))))) ? ((((!(((/* implicit */_Bool) (unsigned short)47812)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1])))))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (4294967284U) : (((/* implicit */unsigned int) var_4)))))))))));
    }
    var_11 = ((/* implicit */signed char) var_4);
}
