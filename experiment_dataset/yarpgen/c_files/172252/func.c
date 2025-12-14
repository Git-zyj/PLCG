/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172252
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
    var_11 = ((/* implicit */unsigned int) (+(0LL)));
    var_12 &= ((/* implicit */unsigned long long int) (+(4LL)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -29LL)) ? (-29LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)55)))))) ? (((((/* implicit */int) var_0)) / (var_7))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (max((((-29LL) / (28LL))), (((/* implicit */long long int) (unsigned short)51144)))) : (((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0])))) : (((((/* implicit */_Bool) -1003289669)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((~(18446744073709551615ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55)))));
                    arr_6 [i_0] = ((((/* implicit */_Bool) ((arr_2 [i_0 - 1] [(unsigned char)0] [i_0]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)108)) + (((/* implicit */int) var_4)))))))) || (((/* implicit */_Bool) min((arr_2 [i_0] [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) var_9))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_1)))))));
}
