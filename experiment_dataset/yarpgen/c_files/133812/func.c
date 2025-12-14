/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133812
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        {
                            arr_14 [i_1] [6] [i_1 + 1] [i_1] [6] [i_3] [i_4] = (-(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551601ULL))));
                            arr_15 [i_4] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_1);
                            var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_14)) / (var_16)))));
                            arr_16 [i_1] [i_1] = ((/* implicit */short) arr_11 [i_4] [i_3] [17] [i_0]);
                        }
                    } 
                } 
            } 
            arr_17 [i_1] [i_1] = ((/* implicit */int) ((long long int) ((unsigned int) arr_1 [(unsigned short)1] [i_1])));
            arr_18 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (arr_4 [i_1 - 2] [i_1 + 2] [i_1]) : (arr_4 [i_1 - 2] [i_1 + 2] [i_1])));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -930334151)) ? (((/* implicit */int) arr_1 [i_1 + 2] [i_1 - 2])) : (((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 2]))));
            arr_19 [i_1] = ((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_0] [(unsigned short)17] [i_1 - 1] [i_0]);
        }
        var_20 ^= ((/* implicit */unsigned long long int) arr_2 [i_0]);
        arr_20 [10ULL] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    var_21 = (+(((unsigned long long int) var_10)));
}
