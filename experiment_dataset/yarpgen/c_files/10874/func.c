/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10874
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3641879729U)) || (((/* implicit */_Bool) var_6))))), (((unsigned long long int) arr_4 [i_1] [i_1])))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_16)), (((arr_4 [i_1] [i_1]) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) var_11)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) (((~(var_1))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (arr_8 [i_0] [i_2] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_0] [i_2] [i_0]) && (arr_6 [i_0] [i_2] [i_0]))))))))));
                        arr_11 [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 653087575U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_4 [i_2] [i_1])), (((2137830710U) >> (((((/* implicit */int) arr_7 [i_2] [i_3])) - (3229)))))))) : (((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_10 [i_0] [i_1] [i_1] [i_2])))) : (max((arr_9 [i_0] [i_2]), (var_9)))))));
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        var_19 = (~(1531145111U));
                        arr_14 [i_1] [i_1] [(signed char)3] [(unsigned short)9] = ((min((arr_5 [i_1] [i_2]), (arr_5 [i_1] [i_4]))) & (min((arr_5 [i_1] [i_4]), (arr_5 [i_1] [i_4]))));
                        var_20 |= ((/* implicit */int) var_10);
                    }
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((arr_4 [i_1] [(unsigned short)6]) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_2])))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (unsigned short)3);
    var_23 |= ((/* implicit */long long int) ((short) var_7));
}
