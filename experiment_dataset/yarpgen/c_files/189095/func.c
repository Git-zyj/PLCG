/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189095
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : (((((/* implicit */_Bool) (unsigned char)47)) ? (arr_1 [i_0]) : (arr_1 [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((long long int) var_6))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) (short)27001)) ? (((/* implicit */int) (short)-27002)) : (((/* implicit */int) (short)-27002))))) + (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) var_0)))))));
                                var_11 = ((/* implicit */short) min((((((/* implicit */int) min((((/* implicit */short) var_8)), (arr_3 [i_0] [i_1] [i_1])))) - ((+(((/* implicit */int) arr_2 [i_1] [i_1] [(short)5])))))), (arr_5 [i_1] [i_1])));
                                var_12 = ((/* implicit */_Bool) min((((/* implicit */int) (short)-26998)), (min(((+(((/* implicit */int) (short)27001)))), (((/* implicit */int) arr_4 [i_1]))))));
                                arr_13 [i_4] [i_4] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-26992))));
                            }
                            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                            {
                                var_13 *= ((/* implicit */short) ((_Bool) ((_Bool) -1909824693)));
                                var_14 = (((-(((/* implicit */int) var_8)))) + (arr_5 [i_5 + 1] [i_1]));
                                var_15 = ((/* implicit */unsigned char) arr_3 [i_2] [i_3] [i_1]);
                                arr_16 [i_1] [i_1] [i_2] [2ULL] [i_5 + 1] [2ULL] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] [i_1]))))) + (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) arr_5 [i_1] [i_1])) : (arr_1 [(unsigned char)3]))))) + (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)26999)), (var_6)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1])))))));
                            }
                            arr_17 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) min(((short)27001), (((/* implicit */short) arr_15 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2] [i_3])))))) ^ (((/* implicit */int) min((((/* implicit */short) arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])), (arr_3 [i_1] [i_1] [i_1]))))));
                        }
                    } 
                } 
                arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((signed char) min((var_4), (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-27002)) - (((/* implicit */int) var_8)))) + ((-(((/* implicit */int) (short)4095))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (max((var_6), (((long long int) (short)26997)))))))));
    var_17 = ((/* implicit */int) var_6);
    var_18 = var_6;
}
