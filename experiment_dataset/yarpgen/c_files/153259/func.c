/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153259
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [(unsigned short)4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(5136299488085775944ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))) & (4ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) : (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1827351992789256054LL))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((80493171) >> (((((/* implicit */int) arr_3 [i_0] [18])) - (38)))))), (arr_6 [i_0] [i_0]))))));
                    var_18 ^= ((((arr_2 [i_1 + 1] [i_1 + 1]) == (arr_2 [i_1 + 1] [i_1 + 1]))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) ? (arr_2 [i_1 + 1] [i_1 + 1]) : (((/* implicit */int) (signed char)66))))));
                    var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_5 [i_1 + 1] [i_1] [(signed char)9]), (((/* implicit */unsigned long long int) 2765327188U))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (6994936639431426126LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))) ? (min((2765327160U), (((/* implicit */unsigned int) (signed char)-97)))) : (((/* implicit */unsigned int) arr_2 [i_1 + 1] [i_1 + 1])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_4);
}
