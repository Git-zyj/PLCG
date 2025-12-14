/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119442
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
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8843861406524746774LL)) ? (8522547474944843500LL) : (8924709427977568014LL)))) ? (((var_9) >> (((arr_9 [i_1 - 1] [i_1]) - (580008619648943014LL))))) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) | (arr_4 [i_1 + 1] [i_1 + 2] [i_1 - 2])))));
                                arr_12 [i_0 + 2] [i_4] [i_4] [i_4] [i_0] = var_7;
                                arr_13 [i_0] = arr_4 [i_0] [i_0 + 2] [i_0];
                                arr_14 [8LL] [8LL] [i_2] [i_0] [i_4] [i_1 - 2] = ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */long long int) (unsigned short)65535)), (arr_10 [i_4] [i_3] [i_0] [i_0] [i_0]))) < (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))) : (max((((/* implicit */long long int) arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 2])), (var_3))));
                            }
                        } 
                    } 
                    var_10 = max((((/* implicit */long long int) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6)) && (((/* implicit */_Bool) arr_0 [i_0]))))))))), (((max((((/* implicit */long long int) (signed char)-60)), (arr_10 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1]))) & (((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (arr_7 [i_0] [i_0] [i_2] [i_0 + 1]))))));
                }
            } 
        } 
    } 
    var_11 = var_7;
    var_12 ^= var_9;
}
