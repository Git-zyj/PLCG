/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146594
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (((+(arr_4 [i_2] [i_1]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((8153823465140593208ULL) << (((arr_4 [i_1] [i_1]) - (1191841838U))))) << (((((arr_0 [i_2]) >> (((var_6) - (1629603651111750615ULL))))) - (466411210))))) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [(unsigned char)9]))) + (((arr_6 [i_0] [i_1] [i_1]) + (arr_6 [i_0] [i_0] [i_1])))))))))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_18))))))))) + ((+(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 1] [3LL] [3LL]))) - (var_14))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) (short)9636);
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)53186)) && (arr_3 [i_4]))) ? (((((/* implicit */_Bool) (short)-11869)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (!(arr_3 [i_1]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) (unsigned short)53186))))) ? (((((/* implicit */_Bool) var_6)) ? (-1923766311716360898LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_3] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)53183))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) (~((~(var_11)))));
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) (unsigned char)108)))) : (((/* implicit */int) var_5))));
}
