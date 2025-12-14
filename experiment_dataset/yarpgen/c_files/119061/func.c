/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119061
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = arr_5 [(unsigned char)1] [(unsigned char)1] [i_2] [(unsigned char)12];
                    var_19 = ((/* implicit */short) var_8);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7073))) & (arr_7 [i_0] [(signed char)1] [(signed char)1] [i_1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                        var_21 = ((/* implicit */long long int) arr_4 [i_0] [i_3 + 1]);
                        var_22 ^= ((/* implicit */long long int) ((arr_5 [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) | (arr_6 [i_1])))) : ((~(11706542193948227546ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        arr_14 [(_Bool)1] [i_4] [i_2] [(unsigned short)13] [1ULL] [i_0] = ((/* implicit */signed char) ((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_2] [i_1] [i_1] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (short)24769))))))));
                        var_23 &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1]))) & (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24769))) : (arr_10 [i_4] [i_2] [i_2] [i_1] [9U])))));
                        arr_15 [9ULL] &= ((/* implicit */unsigned int) -1LL);
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) var_3);
    var_25 ^= ((/* implicit */long long int) var_3);
    var_26 |= ((/* implicit */short) ((((/* implicit */int) var_18)) * ((~(((/* implicit */int) max((((/* implicit */signed char) var_11)), (var_10))))))));
}
