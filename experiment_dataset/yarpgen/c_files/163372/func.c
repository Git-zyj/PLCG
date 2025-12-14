/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163372
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))))) || (((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))), ((-(((/* implicit */int) arr_4 [i_1])))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_4 = 4; i_4 < 18; i_4 += 2) 
                            {
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-22272))))) || (((/* implicit */_Bool) (-(6844637267419330238LL))))))))))));
                                var_17 = ((/* implicit */short) max((((((/* implicit */int) var_11)) != (((/* implicit */int) var_10)))), (arr_10 [i_3 + 3] [i_1 + 3] [i_0] [i_3 + 1])));
                                arr_13 [i_0] [(short)8] [i_0] [i_3] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-28840))));
                            }
                            for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0 - 1] [i_2 - 2] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_15 [i_0 + 1] [i_1 - 1] [i_2] [i_2 + 1] [i_2] [i_0 - 1]))))) ? (((/* implicit */int) max((var_12), (((/* implicit */short) arr_15 [i_0] [i_1] [i_1] [i_2 - 2] [i_2 - 2] [i_0 - 1]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [(unsigned short)8] [i_0] [i_0 - 1]))) < (var_9))))));
                                arr_17 [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0 + 1])))) : (((/* implicit */int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1]))))));
                            }
                            var_19 *= ((/* implicit */short) (-(((/* implicit */int) var_10))));
                            /* LoopSeq 1 */
                            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)39199)) ? (((/* implicit */int) (short)13011)) : (((/* implicit */int) (short)-30671))));
                                var_21 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) (unsigned short)49878)))));
                            }
                            var_22 = ((((((-6844637267419330235LL) + (((/* implicit */long long int) 3420413021U)))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)24719), (((/* implicit */unsigned short) var_6))))) ? (max((((/* implicit */unsigned int) var_5)), (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28829)) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_3 - 1] [i_3] [i_3])) : (((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_7 = 4; i_7 < 18; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_10)))));
                            arr_26 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)35335))))) ? ((~((-(((/* implicit */int) var_2)))))) : (((((/* implicit */int) arr_3 [i_8] [i_7] [i_0])) ^ (((((/* implicit */_Bool) (short)16130)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_0] [i_0] [i_8] [i_8])) : (((/* implicit */int) (short)-28840))))))));
                            arr_27 [i_8] [i_7 - 1] [i_8] [i_8] [i_0] [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                            var_24 *= ((/* implicit */unsigned int) max((((((unsigned long long int) var_13)) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)28840)))))))), (((/* implicit */unsigned long long int) (-((-(-6844637267419330253LL))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_12 [(_Bool)1] [(signed char)3] [(unsigned short)11] [i_1 + 2] [i_1 - 2]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_9 = 1; i_9 < 17; i_9 += 4) 
    {
        for (unsigned long long int i_10 = 4; i_10 < 17; i_10 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) (+(((/* implicit */int) max((arr_39 [i_9]), (arr_39 [i_9]))))));
                            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)12462)) : (((/* implicit */int) (short)30671)))))))));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_29 [i_10]) * (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_10])))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    for (signed char i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        {
                            arr_46 [(short)10] [i_9] [i_9] [i_9] = ((/* implicit */short) max((((/* implicit */unsigned int) max((max((var_13), (((/* implicit */unsigned short) (short)426)))), (var_0)))), (((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-6844637267419330231LL) < (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (arr_32 [i_14] [i_13])))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_15 = 0; i_15 < 20; i_15 += 2) 
                            {
                                arr_49 [i_9] [i_9] [i_9] [i_14] [i_15] [(_Bool)0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
                                var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_44 [i_9 + 1] [i_9 + 1] [i_9] [i_9]))));
                            }
                            for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 4) 
                            {
                                var_30 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (_Bool)0))))));
                                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((var_14) ? (((/* implicit */int) (short)-7533)) : (((/* implicit */int) arr_41 [i_9] [i_9 + 2] [i_9] [i_9 - 1]))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-8))))) | (arr_51 [i_9] [i_16 + 3] [(_Bool)1] [i_14] [i_10 + 1] [i_9 + 2]))))))));
                                var_32 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) min((var_7), (((/* implicit */signed char) (_Bool)1))))))), (((/* implicit */int) ((_Bool) arr_42 [i_9 + 1] [i_9 + 1] [i_10])))));
                            }
                        }
                    } 
                } 
                arr_52 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_3)))) ? (((((/* implicit */_Bool) arr_44 [i_10] [i_9 + 3] [i_10 - 2] [i_9 + 3])) ? (2334129137U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_39 [i_9])))))));
                arr_53 [i_10] |= ((/* implicit */signed char) (unsigned short)43111);
            }
        } 
    } 
}
