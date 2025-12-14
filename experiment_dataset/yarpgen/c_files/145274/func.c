/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145274
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) (short)-27024);
                            var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)-27024)), (min((min((var_5), (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) var_10))))));
                            var_13 = ((/* implicit */short) max(((+(((/* implicit */int) var_1)))), (((int) arr_7 [i_3 - 1] [i_3] [i_2] [i_2 - 1] [i_0] [i_0 - 1]))));
                            var_14 += ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) 2057641937)) ? (((((/* implicit */_Bool) (short)-27024)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5))) : (((/* implicit */unsigned int) ((int) -2057641937))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)27023)) ? (((/* implicit */int) (short)-27031)) : (((/* implicit */int) (short)-27024)))))));
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                            {
                                var_15 = ((/* implicit */short) (((+(((unsigned long long int) var_4)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_8 [i_0 + 2] [i_0 - 2] [i_2 - 2] [i_3 - 1]))))));
                                var_16 &= ((/* implicit */long long int) (((~(((unsigned long long int) -3219270532336629275LL)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-17965)) ? (((/* implicit */int) (unsigned short)13313)) : (((/* implicit */int) arr_0 [i_0 + 2])))))));
                                var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-21237)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_3] [i_2] [i_3 - 1] [i_3 - 1]))) : ((-(2961148229U))))), (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), ((-(((/* implicit */int) var_9)))))))));
                                var_18 = ((/* implicit */unsigned short) ((int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((-9223372036854775807LL - 1LL)))))));
                                var_19 = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)13313));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    var_20 = ((/* implicit */unsigned char) (short)-17982);
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 2057641937)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (2305842734335787008LL)));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_1))));
}
