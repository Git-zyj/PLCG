/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119394
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
    var_20 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned long long int) var_4))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_2))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0]))), (arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_17)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0])))))))) : (max((arr_0 [i_0]), (((/* implicit */long long int) max((arr_1 [i_0]), (arr_1 [i_0]))))))));
        var_22 *= ((/* implicit */unsigned long long int) var_10);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = min(((+(((int) arr_5 [i_0])))), (min((arr_6 [i_2 + 3] [i_2 + 3] [i_2] [i_2 - 1]), (arr_6 [i_2 + 3] [i_2] [i_2] [i_2 + 1]))));
                    arr_8 [i_1] [i_1] [i_2 + 2] [i_2] = ((/* implicit */unsigned int) ((unsigned char) max((((((arr_6 [i_0] [i_0] [i_0] [i_1]) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) + (42))))), (((/* implicit */int) ((arr_5 [i_1]) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 + 2])))))))));
                    var_23 = ((/* implicit */long long int) (~(var_14)));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) var_3);
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (((-(arr_6 [i_2] [15LL] [i_2] [i_1]))) + ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))))));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = max((((/* implicit */long long int) arr_1 [i_0])), ((+((~(arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    {
                        arr_21 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((max((((/* implicit */long long int) var_1)), (arr_5 [i_0]))) | (((/* implicit */long long int) max((arr_17 [i_0] [i_3] [i_4] [i_5]), (((/* implicit */unsigned int) arr_1 [i_4]))))))));
                        arr_22 [i_4] [i_4] [i_4] [i_5] &= arr_17 [i_5] [i_3] [(unsigned short)12] [i_3];
                        var_24 *= ((/* implicit */unsigned char) ((arr_17 [(unsigned char)12] [i_3] [i_4] [i_5]) < (((unsigned int) var_13))));
                        arr_23 [i_5] [i_3] [i_4] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) arr_5 [i_5]);
                        var_25 = ((/* implicit */short) arr_5 [i_3]);
                    }
                } 
            } 
        } 
    }
    for (long long int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6] [i_6])))))) + (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (min((((/* implicit */long long int) arr_6 [i_6] [i_6] [i_6] [i_6])), (arr_5 [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (arr_27 [i_6] [i_6])))))))));
        arr_28 [i_6] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6] [i_6] [i_6]))) ^ (((arr_27 [i_6] [i_6]) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) ((min((var_12), (((/* implicit */unsigned long long int) arr_14 [i_6])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6]))))))));
        arr_29 [i_6] = ((/* implicit */long long int) ((max(((~(((/* implicit */int) var_1)))), (((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_15 [i_6] [i_6] [i_6])) : (arr_6 [i_6] [i_6] [i_6] [i_6]))))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((int) arr_24 [i_6]))) >= (arr_3 [i_6] [i_6]))))));
    }
    for (long long int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
    {
        arr_32 [i_7] [i_7] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_15 [i_7] [i_7] [i_7])), (var_12))), (((/* implicit */unsigned long long int) max((arr_18 [i_7] [i_7] [i_7] [i_7]), (arr_18 [i_7] [i_7] [i_7] [i_7]))))))) && (((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7] [i_7]))));
        arr_33 [i_7] = ((/* implicit */unsigned int) arr_15 [i_7] [i_7] [i_7]);
        var_27 = ((/* implicit */unsigned long long int) max((arr_0 [i_7]), (((/* implicit */long long int) min((max((arr_25 [i_7]), (arr_17 [i_7] [(signed char)12] [i_7] [i_7]))), (((/* implicit */unsigned int) max((var_18), (((/* implicit */int) var_3))))))))));
    }
}
