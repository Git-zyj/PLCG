/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143215
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
    var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19024)) ? (1729382256910270464ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (max((12930494030796684990ULL), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_7)) << (((12930494030796684990ULL) - (12930494030796684978ULL))))))))));
    var_16 |= ((/* implicit */unsigned int) (short)4506);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0 + 1] [i_0 + 1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((max((524913659U), (((/* implicit */unsigned int) var_2)))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) % (((/* implicit */int) (short)32749))))) ? (max((var_4), (((/* implicit */int) (short)4506)))) : (((((/* implicit */int) var_7)) | (((/* implicit */int) var_8)))))))));
                    arr_9 [i_0] [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_1]))) <= (arr_7 [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) max(((unsigned short)58116), (var_13)))))) : (max((((/* implicit */unsigned int) (unsigned short)8807)), (69931370U)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max(((-(((/* implicit */int) ((unsigned char) var_10))))), (((/* implicit */int) arr_5 [20U] [16ULL] [i_3])))))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) var_0)) ? (arr_15 [i_2] [10U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-12067))))))), (((((/* implicit */_Bool) 4092552060U)) ? ((~(5516250042912866626ULL))) : (((/* implicit */unsigned long long int) var_3)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((int) max((max((12930494030796684990ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_3)))));
}
