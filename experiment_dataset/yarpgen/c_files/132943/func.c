/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132943
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) arr_7 [i_2] [i_1] [i_3 + 2]))), ((((_Bool)0) ? (((/* implicit */int) arr_7 [i_2] [i_3] [i_3 + 2])) : (((/* implicit */int) arr_7 [i_2] [i_0] [i_3 + 2]))))));
                                arr_14 [i_2] [i_2] = arr_11 [i_0] [i_2] [i_0] [i_2] [i_0];
                                var_11 = ((signed char) (-(arr_0 [i_1] [i_1])));
                                arr_15 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0]))));
                                var_12 |= ((/* implicit */short) (~(((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))) : (arr_8 [i_0] [i_0] [i_0] [0ULL] [0] [(short)8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (5412236416565625412ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))) | ((((_Bool)0) ? (((/* implicit */int) arr_7 [i_2] [i_2 + 2] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_2 + 2] [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_17 [i_5]);
        var_14 = ((/* implicit */long long int) min((min((arr_17 [i_5]), (arr_17 [i_5]))), (((/* implicit */int) ((arr_16 [i_5]) >= (arr_17 [i_5]))))));
        var_15 = (((!(((/* implicit */_Bool) (short)21497)))) ? ((-(15392917285420948639ULL))) : (((((((/* implicit */_Bool) (short)11789)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_1))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_6) : (var_2)))))));
        arr_19 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_17 [i_5]) ^ (arr_17 [i_5])))) ? (((/* implicit */int) ((((/* implicit */long long int) min((arr_17 [i_5]), (arr_17 [i_5])))) >= (((long long int) 3053826788288602971ULL))))) : (((/* implicit */int) ((short) (unsigned short)56661)))));
        var_16 = (short)-21498;
    }
}
