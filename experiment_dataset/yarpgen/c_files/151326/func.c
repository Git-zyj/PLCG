/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151326
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)27423)) + (((/* implicit */int) var_12))))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (short)-1)) - (((/* implicit */int) var_0)))) / (max((arr_3 [i_0]), (arr_3 [i_1]))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) arr_0 [i_1])) / ((+(((/* implicit */int) (signed char)-107)))))));
                            arr_10 [i_3] [(short)16] [i_2] [i_2] = ((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)55)))), ((+((-(((/* implicit */int) arr_0 [i_1]))))))));
                            var_17 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)78)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_8 [i_2 - 3] [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) var_4))))));
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                            {
                                var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) (short)28326))))))))));
                                var_19 += ((/* implicit */short) (-(3172483520U)));
                            }
                            for (unsigned char i_5 = 4; i_5 < 17; i_5 += 4) 
                            {
                                arr_15 [i_2] [i_2] [9U] = ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)127))))), (((arr_14 [i_0] [19] [3] [i_3] [i_0] [i_5 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [17ULL] [i_0]))))))))))));
                                var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((short)28326), ((short)2)))))))) / (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203))) : (878781057U)))) * (((unsigned long long int) 4ULL)))));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_2] [i_2] = (!(((/* implicit */_Bool) 18446744073709551615ULL)));
                            }
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((max((var_7), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0])))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0] [i_0]))))))) * (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (signed char)0))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_12))));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)39)) ? (((long long int) (unsigned char)183)) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) var_14)))))))) ? ((-(((/* implicit */int) max((((/* implicit */short) (unsigned char)178)), ((short)28326)))))) : (max((((/* implicit */int) ((short) (unsigned char)248))), ((-(((/* implicit */int) (unsigned char)13))))))));
    var_25 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((var_3) << (((((long long int) var_7)) + (3972953360451968602LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))));
}
