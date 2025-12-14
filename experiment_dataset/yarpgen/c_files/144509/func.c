/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144509
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((arr_9 [i_1 + 4] [(unsigned char)11]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_3] [i_2 + 1] [i_0])))));
                        var_16 += ((/* implicit */unsigned int) ((unsigned long long int) arr_3 [i_0] [(unsigned char)12] [i_0]));
                        arr_13 [i_0] [i_1] [i_1] [i_1 + 3] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_6)) < (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [7ULL])))) || (((/* implicit */_Bool) ((short) arr_3 [i_0] [i_0] [5U])))));
                        var_17 += ((/* implicit */unsigned char) ((arr_6 [i_0] [i_2 - 2] [i_2 - 2]) + (arr_6 [(unsigned short)13] [i_2 - 2] [i_0])));
                    }
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_15 [i_1] [10ULL] [i_4]))));
                        var_19 ^= ((/* implicit */short) arr_10 [(unsigned char)10] [i_4] [(unsigned char)10] [(short)14] [(signed char)6] [(unsigned char)10]);
                        var_20 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_19 [i_2 - 1] [i_0] [i_0] [i_2 - 1] = ((/* implicit */unsigned long long int) arr_15 [i_2 - 2] [i_5] [i_0]);
                        var_21 = ((/* implicit */unsigned int) min((var_21), (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_2] [8U] [i_5]))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (unsigned short)65515)))))) | (min((arr_1 [i_5]), (((/* implicit */unsigned int) arr_7 [i_5] [i_0] [i_0] [i_5]))))))))));
                    }
                    var_22 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_11 [12ULL] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [(signed char)12])) ? (arr_6 [i_0] [i_1] [(unsigned char)10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2])))))) : (arr_10 [i_0] [8ULL] [i_0] [i_0] [i_2 - 2] [i_2])))));
                    var_23 = arr_3 [i_0] [i_0] [i_0];
                    arr_20 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]);
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_14 [i_0] [i_1] [i_0]), (arr_7 [10ULL] [i_0] [i_1 + 4] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0] [i_1 + 3] [i_0] [i_0])) & (((/* implicit */int) arr_18 [i_0] [i_1] [2LL] [2LL]))))) || (((/* implicit */_Bool) var_13))))) : (((((/* implicit */int) arr_7 [i_1 + 2] [i_2] [i_2 + 1] [i_0])) * (((/* implicit */int) arr_7 [i_1 + 2] [i_1] [i_1 + 2] [i_0]))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_7);
}
