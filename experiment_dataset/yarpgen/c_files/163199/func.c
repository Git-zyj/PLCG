/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163199
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
    var_18 = (!((!(((/* implicit */_Bool) var_16)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_19 *= ((/* implicit */signed char) arr_0 [i_0]);
                    var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_8)), (arr_3 [(unsigned char)0] [i_1] [(unsigned char)0]))) < (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_1] [(_Bool)1])) : (arr_3 [i_2] [6LL] [6LL])))))), (((((arr_0 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) : (min((arr_2 [13ULL] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */signed char) ((11069173339178928835ULL) <= (((/* implicit */unsigned long long int) ((min(((_Bool)1), ((_Bool)1))) ? (var_14) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))))))));
    var_22 = ((/* implicit */long long int) var_7);
}
