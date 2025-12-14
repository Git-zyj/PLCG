/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121003
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
    var_17 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((2941597630U), (((/* implicit */unsigned int) var_9))))) ? (((((/* implicit */_Bool) var_14)) ? (12187803946064207248ULL) : (18446744073709551608ULL))) : (6258940127645344367ULL)))));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((var_14), (((/* implicit */int) var_9)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 21033715)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) 384)))) & (((/* implicit */unsigned long long int) var_14))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2048498275)) ? (((/* implicit */unsigned long long int) 2048498275)) : (5011912357686785064ULL)))) && (((/* implicit */_Bool) var_8))));
        arr_3 [i_0] |= ((arr_0 [i_0]) == (var_16));
        var_20 = ((/* implicit */unsigned int) 12187803946064207249ULL);
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_7 [3U] = ((_Bool) ((((/* implicit */_Bool) 6258940127645344352ULL)) && (((/* implicit */_Bool) var_10))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_1] [5]))) ? (9035543324388202142LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (-11640966) : (((/* implicit */int) var_13)))))))) > (arr_11 [i_3 - 1] [i_2] [i_1])));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 10; i_5 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((min((var_13), (arr_15 [i_5] [i_5] [i_5 + 1]))) ? (((/* implicit */int) ((6258940127645344381ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3])) || (var_13))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_4])) && (((/* implicit */_Bool) (unsigned short)24983))))), (((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) -11640966)) : (13434831716022766555ULL)))))));
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (var_7)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((_Bool) arr_14 [i_1] [(unsigned short)7] [9U] [1])))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) < (13434831716022766552ULL)))) == (((/* implicit */int) (short)13433))))) : (((/* implicit */int) min((((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) 6258940127645344367ULL)))), (arr_9 [i_3 - 1] [i_4] [i_4])))));
                                arr_18 [i_1] [i_3] [i_3] [i_4] [i_5 - 1] [i_5] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (arr_1 [i_3 - 1]) : (arr_1 [i_3 - 1]))), (max((arr_1 [i_3 - 1]), (arr_1 [i_3 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        var_24 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1922934628574994267ULL)) ? (arr_19 [i_6]) : (((/* implicit */unsigned int) -1427844605))))));
        var_25 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned char)255))))));
        arr_21 [4] |= ((/* implicit */_Bool) var_16);
        var_26 = ((/* implicit */int) min((((18446744073709551601ULL) & (((/* implicit */unsigned long long int) arr_0 [i_6])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_0 [i_6]) + (9223372036854775807LL))) << (((((/* implicit */int) var_4)) - (54)))))) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */long long int) arr_19 [10ULL])) / (arr_0 [i_6]))))))));
    }
}
