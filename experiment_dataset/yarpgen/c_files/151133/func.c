/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151133
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
    var_15 = ((/* implicit */unsigned long long int) (unsigned char)7);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = arr_0 [i_0];
        arr_3 [i_0] [i_0] = ((/* implicit */short) min(((+((~(((/* implicit */int) arr_1 [i_0] [i_0])))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0])) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) arr_1 [i_0 - 3] [i_0]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_8 [2LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((long long int) arr_1 [i_1] [i_1])))) ? (min((((((/* implicit */_Bool) var_6)) ? (24U) : (var_5))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_4 [i_1]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) var_7)))))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    {
                        var_16 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-4442167488448486927LL))) / (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_1])), (min((((/* implicit */unsigned short) arr_0 [i_1])), (arr_18 [i_4] [i_2] [i_2] [i_4] [i_3])))))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4])) ? (arr_6 [i_1]) : (arr_6 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_4]) == (arr_6 [i_1]))))) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (arr_6 [i_1])))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 1; i_6 < 13; i_6 += 4) 
        {
            {
                var_18 += arr_18 [i_5] [i_5] [i_5] [i_5] [i_5];
                arr_26 [i_5] [i_5] = ((/* implicit */long long int) arr_12 [i_5] [i_6]);
            }
        } 
    } 
    var_19 *= ((((/* implicit */_Bool) min((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (_Bool)1))))));
}
