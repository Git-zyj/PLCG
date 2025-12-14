/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11637
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
    var_20 = ((/* implicit */_Bool) max((max((var_8), (var_8))), (((/* implicit */int) var_13))));
    var_21 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (arr_0 [i_2 + 2])));
                    var_23 += ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_7 [4ULL] [i_2 - 3] [4ULL])) : (arr_9 [i_0 - 3] [0ULL] [0ULL]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 1) 
                {
                    {
                        var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4610372118892509263LL)) ? (arr_16 [i_0 - 2]) : (((/* implicit */int) (signed char)-2))))) ? (((/* implicit */long long int) var_6)) : ((((_Bool)0) ? ((-(var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_0 + 1] [2] [i_0 + 1])))))))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((int) max(((_Bool)0), (var_12))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_0 [i_0]))))) ? (arr_9 [i_5] [(unsigned short)2] [i_4]) : (((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) arr_1 [i_5] [i_3 + 1])))))))));
                        var_26 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((var_16) <= (((/* implicit */int) arr_7 [6ULL] [i_0] [i_0])))))) != (arr_13 [i_0] [(signed char)6] [(unsigned short)0])));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            {
                                arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */int) ((var_2) >= (max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_6] [i_0])), (var_10)))))), (((((/* implicit */int) (_Bool)1)) >> (((var_6) - (2850038991U)))))));
                                var_27 = (~(((((/* implicit */int) (_Bool)0)) >> (((arr_22 [i_9] [i_8]) + (1973265775))))));
                                arr_32 [i_6] [i_7] [i_8] [i_6] = ((((/* implicit */_Bool) (((_Bool)1) ? (arr_16 [i_0 - 3]) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_30 [i_0] [13ULL] [i_0]))))))) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : ((+(((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_28 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_27 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [8] [i_0 - 1] [i_0 - 1])))))) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [0])));
                    /* LoopNest 2 */
                    for (short i_10 = 3; i_10 < 13; i_10 += 2) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            {
                                arr_38 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_24 [i_10 + 1] [i_0 + 1])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_4)) >> (((var_6) - (2850038984U)))))));
                                arr_39 [i_0] [i_6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [4U])) || (((/* implicit */_Bool) var_6)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_0)))) ? (arr_25 [i_10 - 3] [7] [i_10] [7] [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 3]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_20 [i_0 - 3] [i_0])) : (((/* implicit */int) arr_8 [i_0 - 3] [i_0 + 2] [i_0 + 1] [i_0 - 1]))))) <= (var_2)));
    }
    var_30 = ((/* implicit */signed char) var_13);
}
