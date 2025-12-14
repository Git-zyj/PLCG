/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150230
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
    var_18 += ((signed char) ((unsigned short) (-(((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) min((15040195516594493649ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) ((arr_1 [i_1]) && (((/* implicit */_Bool) var_17))))) : (min((var_3), (((/* implicit */int) arr_4 [1ULL] [i_1])))))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */signed char) arr_1 [i_0])), ((signed char)126)))) ? (((/* implicit */int) arr_2 [i_0] [8U])) : (var_3))), (((/* implicit */int) arr_4 [4] [4U])))))));
                var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_1] [(_Bool)1]) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [(unsigned char)3] [9U] [(unsigned char)10]))))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(_Bool)1] [i_1])) >> (((((/* implicit */int) var_15)) - (79)))))) ? (min((arr_0 [2LL]), (arr_0 [(_Bool)1]))) : (((/* implicit */unsigned long long int) 63U))))));
                var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [(unsigned short)6] [10ULL]) ? (1214800090704210666ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) ? ((-(arr_0 [i_1]))) : (((arr_5 [(signed char)8]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [7])))))))) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_0]))));
                arr_6 [5LL] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_3 [(short)1] [(_Bool)1] [(signed char)3])), (arr_5 [i_0]))) % (max((((/* implicit */unsigned long long int) ((signed char) (_Bool)1))), (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (var_1)))))));
            }
        } 
    } 
}
