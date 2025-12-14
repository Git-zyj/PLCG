/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148640
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28026)) ? (((/* implicit */int) (short)-9147)) : (((/* implicit */int) (unsigned char)43))))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1086971103U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_12))), (((/* implicit */unsigned long long int) min((var_2), (var_13)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((_Bool) arr_1 [i_0]));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((var_10) | ((-(((/* implicit */int) (!(var_18))))))));
                                arr_14 [i_0] [i_0] [i_3] [i_3] [i_4] [i_0 + 2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (var_12)))) ? (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) var_11)) : (var_5)))))));
                                var_23 = ((/* implicit */signed char) arr_1 [i_0]);
                                arr_15 [i_0 + 1] [i_3] [i_2] [i_3 - 1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned short) (short)-26407)), ((unsigned short)1279))), (((/* implicit */unsigned short) ((unsigned char) arr_12 [i_3])))))) ? (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 + 2] [i_0 + 1])) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0 + 2])) : (((/* implicit */int) arr_7 [(signed char)15] [i_0 + 2] [i_0 + 1] [i_0])))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_3 - 1] [(unsigned short)13])) : (((/* implicit */int) (_Bool)0)))) <= (((/* implicit */int) arr_11 [i_0] [i_3 - 1] [i_4 + 2] [i_4] [i_4 + 2])))))));
                                arr_16 [i_0 + 2] [i_1] [i_2] [i_3] [i_4 + 1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [2ULL] [i_4])) ? ((((_Bool)0) ? (-287931095) : (-1311478097))) : (((/* implicit */int) var_3))))) + (max((((/* implicit */unsigned long long int) ((short) var_14))), (((((/* implicit */_Bool) arr_12 [i_3])) ? (var_12) : (((/* implicit */unsigned long long int) 1311478097)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) var_0)) ? (((((/* implicit */int) var_8)) * (((/* implicit */int) var_13)))) : ((+(var_10)))))) ? (((/* implicit */unsigned long long int) 4050880766U)) : (((((/* implicit */_Bool) var_7)) ? (((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_15))))))))))));
}
