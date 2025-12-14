/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174053
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
    var_14 = ((/* implicit */short) max(((unsigned short)5467), (((/* implicit */unsigned short) (short)-25640))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] &= ((/* implicit */int) max((min((((/* implicit */unsigned long long int) min((((/* implicit */short) arr_1 [i_0])), (arr_0 [i_2])))), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_2 [i_2]))))), (((/* implicit */unsigned long long int) max((min((arr_3 [i_0]), (((/* implicit */short) arr_6 [i_2])))), (max((arr_3 [i_1]), (((/* implicit */short) arr_1 [i_1])))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) max((((/* implicit */short) arr_6 [i_2])), (arr_3 [i_0])))) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((arr_4 [i_2]), ((~(arr_4 [i_2])))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) arr_5 [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */short) arr_1 [i_1]))))) : (((arr_6 [i_0]) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_0 [i_1]))))))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))))) ? (min(((+(6364212088652761083ULL))), (((/* implicit */unsigned long long int) max((arr_3 [i_1]), (((/* implicit */short) arr_6 [i_1]))))))) : (max((max((arr_2 [i_1]), (((/* implicit */unsigned long long int) arr_6 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0])))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((min((max((((/* implicit */unsigned long long int) var_4)), (var_9))), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */signed char) min((var_3), (var_3)))))))));
}
