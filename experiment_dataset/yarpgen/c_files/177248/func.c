/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177248
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
    var_20 |= ((/* implicit */_Bool) var_9);
    var_21 = ((/* implicit */signed char) var_13);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-20)) ? (arr_3 [i_1] [i_1] [i_1]) : (arr_3 [i_1] [i_1] [i_1 + 3])))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)54)), (arr_4 [i_0])))))))));
                arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1])) >= ((~((((_Bool)1) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) arr_1 [i_0]))))))));
            }
        } 
    } 
}
