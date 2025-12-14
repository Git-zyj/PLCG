/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127107
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
    var_19 = ((/* implicit */int) var_15);
    var_20 *= ((/* implicit */unsigned int) var_13);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_2] [(unsigned short)13] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned short)31939)))), (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_2 + 2])) : (((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 1] [(unsigned short)11]))))));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((long long int) (-(arr_8 [i_1])))))));
                    arr_11 [(_Bool)1] [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_1 [i_2 + 1])))) ? (arr_1 [i_2 + 1]) : (((/* implicit */unsigned int) max((arr_8 [i_2]), (-659902327))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        arr_15 [1LL] [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_13 [i_1] [i_1] [i_3 - 1]))))) : (1688140040U)));
                        arr_16 [i_0] [i_2] [i_1] [17ULL] [i_3 + 3] [(unsigned char)5] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) arr_0 [i_3 - 1])))));
                    }
                    arr_17 [i_2] [(unsigned short)22] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 1] [i_0 - 1])), (((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) (unsigned short)2299)) : (((/* implicit */int) (unsigned char)62))))))), (((((arr_7 [23U] [i_1] [i_2 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))))) | (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [2])))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) var_3);
    var_23 *= var_7;
}
