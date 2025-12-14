/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118689
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
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) 2147483647)) : (3638780073499947218LL))))));
    var_15 ^= ((/* implicit */unsigned short) 18446744073709551615ULL);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_16 += ((/* implicit */unsigned int) (-(var_11)));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3216276591U)) ? (((/* implicit */long long int) arr_4 [i_0] [i_0])) : (arr_12 [i_3] [i_2] [i_1] [i_0])))) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (arr_12 [i_0] [i_1] [i_2] [i_1]))))));
                        arr_13 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */int) (!(arr_9 [i_1])))) <= (((/* implicit */int) (!(arr_9 [i_1]))))));
                        arr_14 [i_0] [i_3] [i_0] |= ((/* implicit */unsigned long long int) (+(((var_10) ? (((/* implicit */int) arr_6 [i_2] [i_2] [i_2])) : (((((/* implicit */int) arr_0 [i_0] [i_3])) ^ (arr_10 [i_0] [i_2] [i_0])))))));
                        var_18 = ((/* implicit */long long int) arr_0 [(signed char)10] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 12; i_4 += 3) 
                    {
                        for (int i_5 = 4; i_5 < 12; i_5 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) var_4);
                                var_20 &= min((((((/* implicit */_Bool) arr_11 [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 1] [(unsigned short)2])) ? (arr_11 [i_5] [i_5 - 4] [i_5] [i_5 - 4] [i_5]) : (arr_11 [i_5] [i_5 - 2] [i_5] [i_5 - 2] [i_5]))), (((/* implicit */unsigned long long int) var_7)));
                                var_21 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                                var_22 += ((/* implicit */short) ((arr_9 [i_0]) ? (((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4 - 1] [i_1] [i_1])) ? (arr_12 [i_4 - 2] [(unsigned short)11] [i_4 - 2] [(_Bool)1]) : (arr_12 [i_4 + 1] [i_4 + 1] [12ULL] [12ULL]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                    var_23 &= ((/* implicit */int) arr_2 [(unsigned short)8]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            for (int i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                {
                    var_24 = ((/* implicit */long long int) var_5);
                    var_25 = (((((-(var_2))) | (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)55086)) + (((/* implicit */int) var_8))))))) <= (((/* implicit */long long int) ((((((/* implicit */_Bool) 0U)) ? (arr_30 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38209))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((var_13) && (((/* implicit */_Bool) arr_24 [i_6]))))))))));
                    var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) 0U)) ? (4294967295U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))) & (((/* implicit */unsigned int) min((min((((/* implicit */int) var_1)), (arr_28 [i_6] [(unsigned short)11] [i_6]))), (((/* implicit */int) arr_26 [i_6] [i_6] [i_6])))))));
                }
            } 
        } 
    } 
}
