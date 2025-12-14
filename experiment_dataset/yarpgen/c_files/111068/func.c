/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111068
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
    var_12 = ((/* implicit */unsigned int) (_Bool)0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0])) * (((/* implicit */int) var_1)))))));
                    arr_10 [i_1] = ((unsigned int) ((((/* implicit */_Bool) (+(arr_1 [3LL])))) ? (min((arr_5 [i_0] [i_1] [i_2] [i_1]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) 1125899906777088LL))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((_Bool) (signed char)-113))), (((((/* implicit */_Bool) ((long long int) arr_15 [i_0]))) ? (((6162564091916156089ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [2]))))) : (((/* implicit */unsigned long long int) arr_1 [i_0])))))))));
                                arr_17 [i_0] [2] [i_2] [i_4] [i_4] = ((/* implicit */signed char) (~((-(((/* implicit */int) ((signed char) var_4)))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [5LL] = ((/* implicit */_Bool) (((~(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7))))))) - (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_5))))) & (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_5))))))) : (((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_5)))) ? (min((((/* implicit */unsigned long long int) var_11)), (var_2))) : (((/* implicit */unsigned long long int) (+(var_0))))))));
}
