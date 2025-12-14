/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124968
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
    var_18 = ((/* implicit */long long int) min((var_18), (var_10)));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max((-8638378505600826736LL), (((/* implicit */long long int) var_4)))))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_15))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_15 [1LL] [i_1 + 1] [i_2] [i_3] [i_2] [i_4] = ((/* implicit */long long int) ((((unsigned long long int) 8638378505600826740LL)) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2 + 1] [i_1 + 1] [i_1 + 1] [(unsigned char)6])))))));
                                var_21 = ((/* implicit */unsigned long long int) (~(-2375128416392286758LL)));
                                var_22 = (~(((long long int) var_8)));
                                arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) min((((long long int) -2375128416392286746LL)), (((long long int) arr_5 [i_2 + 2] [i_2 + 1] [i_2 - 1]))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_12 [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 1])))) : (((((/* implicit */_Bool) arr_12 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (8638378505600826721LL)))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)94))));
                arr_18 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */unsigned long long int) var_7)) : (max((arr_14 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 1]), (((/* implicit */unsigned long long int) arr_4 [i_1 + 2] [i_0]))))));
            }
        } 
    } 
}
