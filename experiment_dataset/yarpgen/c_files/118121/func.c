/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118121
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) -1033629681);
        var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (7292183803775949062ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32761)) ? (-105426172) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (702504118) : (702504144))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 ^= ((/* implicit */int) ((((((/* implicit */_Bool) 702504117)) ? (max((-1033629694), (arr_3 [0] [i_1]))) : (arr_3 [(signed char)16] [i_1]))) < (((/* implicit */int) ((-7078887685061473150LL) == (arr_4 [(unsigned char)8]))))));
        arr_5 [i_1] [i_1] = 210445090U;
        var_21 = ((/* implicit */_Bool) min(((+(arr_4 [i_1]))), (((/* implicit */long long int) ((arr_4 [i_1]) == (arr_4 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_6 [i_2]) ^ (1033629694)))) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (arr_6 [i_2]))) : (arr_6 [i_2])));
        var_23 ^= ((/* implicit */short) arr_7 [i_2]);
    }
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_1)) : (18446744073709551591ULL)));
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((702504114), (var_1)))) ? (((/* implicit */long long int) ((1337063738) / (((/* implicit */int) (_Bool)1))))) : (var_7)))) ? (-116748100) : (((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)32767)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))));
}
