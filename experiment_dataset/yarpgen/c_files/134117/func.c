/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134117
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
    var_16 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (var_3))))) != (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18700))) & (309040283U))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_0] |= ((/* implicit */long long int) var_7);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) var_15);
                                var_18 *= ((/* implicit */signed char) min((((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned char)112)))), (((((/* implicit */_Bool) arr_9 [i_0] [i_3] [i_0] [i_3])) ? (((/* implicit */int) (unsigned char)144)) : (var_8)))))), (8321499136LL)));
                                arr_18 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)112)) >= (((/* implicit */int) arr_17 [(unsigned short)19] [i_1] [i_2] [i_2] [i_1] [i_2]))))) > (((/* implicit */int) ((((((/* implicit */unsigned int) -363016956)) | (arr_4 [i_0] [i_0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)132))))))))));
                            }
                        } 
                    } 
                    arr_19 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */int) arr_12 [(unsigned short)15] [(unsigned short)15] [(unsigned short)15] [i_2]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_8))));
}
