/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111404
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((((/* implicit */_Bool) max((((unsigned int) 2565745136397626130ULL)), (((((/* implicit */_Bool) 8934877570082031670ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65515))) : (((unsigned long long int) arr_2 [i_0])))));
                arr_6 [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90))) != (arr_3 [i_1]))) ? (((((/* implicit */_Bool) (unsigned short)9786)) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) ((signed char) 33546240U)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_8);
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (var_6)))) ? (var_0) : (((/* implicit */unsigned long long int) 1686353382)))))));
}
