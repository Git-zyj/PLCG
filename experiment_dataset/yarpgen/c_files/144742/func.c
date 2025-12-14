/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144742
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
    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) ((signed char) var_3))))))))));
    var_11 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((var_2), (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)14]))) : (var_3)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [15LL] [i_1])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) -1874751459))))), (max((var_1), (var_2)))))));
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((long long int) var_3))) % (((((/* implicit */_Bool) arr_2 [(signed char)15] [i_0])) ? (15871311281466439902ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_7);
}
