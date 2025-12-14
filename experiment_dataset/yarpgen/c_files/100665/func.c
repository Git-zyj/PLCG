/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100665
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */int) (unsigned short)120)) * (((/* implicit */int) arr_0 [(signed char)0])))) ^ (((/* implicit */int) min((arr_0 [(unsigned char)7]), (arr_0 [i_0 + 1]))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) var_15);
                        var_22 |= ((/* implicit */short) min((((/* implicit */long long int) var_11)), ((~(max((arr_5 [1U] [0ULL] [0ULL]), (((/* implicit */long long int) (unsigned short)65415))))))));
                        arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_4 [i_0 - 2] [i_0 - 1] [i_0]) | (((/* implicit */int) arr_1 [i_0 + 1]))));
                        arr_9 [i_0 - 1] [i_0 - 1] [i_2] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65426))) | (4091745051U))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)146)))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] [(short)8] = ((/* implicit */int) arr_1 [i_0]);
    }
    var_23 = ((signed char) var_5);
}
