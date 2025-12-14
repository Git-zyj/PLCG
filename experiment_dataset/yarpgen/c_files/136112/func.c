/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136112
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_2] [i_1] [i_1] = max((((/* implicit */unsigned int) ((3457104946869462596LL) > (-3457104946869462596LL)))), (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 2])) ? (arr_2 [i_0] [i_0 - 1]) : (2439247111U))));
                    arr_11 [i_2] [i_1] [i_1] [i_0] = max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) > (((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1])))))))), (max((((/* implicit */unsigned int) arr_8 [i_1])), (((unsigned int) 4409781972769911694LL)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)7)) + (((/* implicit */int) var_0))))))) >> (((max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_2))))))) - (204ULL)))));
    var_15 = ((/* implicit */unsigned char) var_13);
}
