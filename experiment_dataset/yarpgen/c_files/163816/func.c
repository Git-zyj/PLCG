/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163816
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
    var_11 = ((/* implicit */unsigned long long int) (short)-20573);
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) (signed char)116)), ((short)-20573)))) | (((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))))))))))));
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((unsigned long long int) var_1))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [(signed char)5]))))), ((~(var_8)))))) || (((min((var_1), (((/* implicit */unsigned int) var_6)))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                    arr_10 [i_0] [i_1 - 1] [i_2] [i_1] = ((/* implicit */signed char) var_1);
                }
            } 
        } 
    } 
}
