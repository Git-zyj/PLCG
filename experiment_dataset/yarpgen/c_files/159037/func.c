/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159037
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
    var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_15)) >> (((min((11436192882677830397ULL), (((/* implicit */unsigned long long int) var_5)))) - (31023ULL)))))));
    var_19 ^= ((/* implicit */int) ((var_10) < ((~(((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_16)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) var_13);
                arr_4 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)12] [i_1] [i_1])) ? (arr_3 [i_1] [4LL] [8ULL]) : (arr_3 [(signed char)5] [3] [i_0 - 1])))) / (((max((arr_2 [12LL] [i_0 + 1] [i_1]), (((/* implicit */long long int) var_6)))) / (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    arr_7 [(unsigned char)0] [(unsigned short)2] [i_2] [i_2 - 3] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 + 3] [i_2 + 1])) != (((/* implicit */int) arr_0 [i_0 + 2] [i_2 + 2]))))), (((unsigned short) arr_0 [i_0 + 3] [i_2 - 1]))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) & (min((((/* implicit */unsigned long long int) (short)31628)), (6087047922921574071ULL))))))))));
                }
            }
        } 
    } 
}
