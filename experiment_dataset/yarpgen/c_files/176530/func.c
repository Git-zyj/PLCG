/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176530
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
    var_17 -= ((/* implicit */_Bool) min((((/* implicit */int) var_11)), (var_3)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) ((int) ((short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)35)), (12288U)))) ? (((/* implicit */int) min(((short)-4096), (((/* implicit */short) arr_3 [i_0 - 2] [i_0 - 2]))))) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) >= (var_8)))) ^ (var_1)))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((((unsigned long long int) (_Bool)1)) / (arr_5 [i_0] [2U]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_6), (((/* implicit */unsigned int) (_Bool)1)))) == (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)34994))))))))))))));
                    arr_10 [i_0] [14ULL] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1])) * (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1]))))) / (((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (4738829297085304545ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        var_20 += (+(((/* implicit */int) ((_Bool) ((arr_3 [i_0 - 1] [i_0 - 1]) ? (var_3) : (((/* implicit */int) arr_8 [i_0] [(unsigned short)7] [i_2] [i_0])))))));
                        var_21 += ((/* implicit */short) max((((/* implicit */unsigned long long int) -1821212449)), (((((/* implicit */unsigned long long int) arr_11 [i_0 + 1] [(short)3] [i_3 - 1] [(short)3] [i_3 + 2])) - (10292175413237708169ULL)))));
                        var_22 += ((/* implicit */unsigned char) max((((/* implicit */short) ((unsigned char) (signed char)(-127 - 1)))), ((short)-13756)));
                    }
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) var_5);
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) + (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) - (var_2))), (((/* implicit */unsigned long long int) ((var_12) ^ (((/* implicit */int) (_Bool)1)))))))));
                        var_25 = ((/* implicit */short) (-(min((((unsigned long long int) var_14)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_1])))))));
                    }
                }
            } 
        } 
    } 
}
