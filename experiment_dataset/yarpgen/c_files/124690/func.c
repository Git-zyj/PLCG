/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124690
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_8))))))) ? (((((int) var_3)) << (((var_0) - (2731479522565973796ULL))))) : (((/* implicit */int) var_1))));
    var_17 = ((/* implicit */_Bool) (((_Bool)1) ? (3932160) : (max((max((var_5), (((/* implicit */int) (short)28920)))), (var_3)))));
    var_18 = (-(max((((/* implicit */unsigned long long int) var_6)), (var_0))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */signed char) ((arr_2 [i_0 - 4]) ? ((~(((/* implicit */int) arr_2 [i_0 - 4])))) : ((~(((/* implicit */int) var_13))))));
                    arr_10 [(short)9] [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [3ULL])) >= ((~(((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))));
                    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))), (max((max((7592708370288580992ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) ^ (((/* implicit */int) (signed char)-38)))))))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_6 [i_2]))));
                    var_21 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)1]))) + (var_0))), (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) var_2)), (var_3))))))));
                }
            } 
        } 
    } 
}
