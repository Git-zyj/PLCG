/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141033
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
    var_15 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) var_4)), (var_11)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) var_9);
                    arr_7 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) min(((~((+(var_2))))), (((/* implicit */long long int) min((((unsigned int) arr_4 [i_0])), (((/* implicit */unsigned int) ((unsigned short) arr_6 [i_2] [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) arr_9 [5ULL]);
                                arr_12 [i_2] [i_2] [i_2] [i_2] [i_4] = max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_5 [i_0] [i_2] [i_3])), (arr_8 [(unsigned char)4])))) ? (((/* implicit */int) arr_8 [i_4])) : (((/* implicit */int) arr_10 [i_4] [i_2] [11LL] [i_2] [i_2] [11LL]))))), (arr_4 [i_0]));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_3] [i_2]))))) ? (arr_6 [i_0] [(signed char)2] [i_2]) : (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_3])))))));
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (+(var_5)))), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) var_5)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (-((+(min((var_0), (((/* implicit */unsigned int) var_9))))))));
}
