/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179729
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
    var_12 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((long long int) 3411014832U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))) : (var_1))));
                arr_8 [i_1] = ((/* implicit */short) var_2);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
                            arr_14 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (1904662904U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), ((-(((((/* implicit */_Bool) var_1)) ? (var_10) : (var_1)))))));
                            var_13 *= ((/* implicit */unsigned char) var_3);
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min(((unsigned short)55284), (((/* implicit */unsigned short) var_5))))) ? (min((var_6), (((/* implicit */unsigned long long int) var_9)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_0] [i_0] [i_0])) : (var_6))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((int) var_9))), (max((((/* implicit */unsigned int) var_7)), (36449604U))))))));
                var_14 += ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) var_3)))))));
            }
        } 
    } 
}
