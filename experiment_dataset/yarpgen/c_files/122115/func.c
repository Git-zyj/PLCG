/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122115
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
    var_17 = ((/* implicit */int) min((min((var_11), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (+(arr_1 [i_0]))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (arr_3 [(short)2] [(short)2]) : (((/* implicit */long long int) var_14)))))))))));
        var_19 = ((3660365329U) * (((((/* implicit */_Bool) arr_1 [i_0])) ? (((634601966U) & (arr_0 [i_0]))) : (var_11))));
        var_20 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned int) ((unsigned char) var_2))));
        var_21 -= ((/* implicit */signed char) (-(634601982U)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (var_1)))) ? (((((/* implicit */_Bool) var_8)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) : (var_6)));
        var_22 = ((/* implicit */int) arr_1 [i_1]);
        var_23 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_3 [i_1] [1LL]) : (var_15))));
        var_24 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [(unsigned short)8] [(unsigned short)8])))) == (var_5)));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_25 += ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 634601947U))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((arr_1 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 10; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) arr_9 [i_1] [i_2] [i_1] [i_3]);
                        var_27 -= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)127))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        {
                            arr_24 [i_2] [i_6] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13652)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (3660365335U)))) ? ((~(var_15))) : (((/* implicit */long long int) var_10))));
                            arr_25 [i_1] [i_2] [8U] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 634601958U))) ? (((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */unsigned long long int) 4294967279U)) : (5147814160629853948ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_6] [i_5] [i_2])))));
                        }
                    } 
                } 
            } 
        }
    }
}
