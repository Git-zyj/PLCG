/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17662
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
    var_11 = ((/* implicit */unsigned int) min((((var_7) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (unsigned char)117)))))))), (((/* implicit */long long int) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) (signed char)64)))))))));
    var_12 = min((((/* implicit */unsigned int) (~(((((/* implicit */int) var_9)) & (((/* implicit */int) (signed char)-64))))))), (var_2));
    var_13 ^= ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 23; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */int) (_Bool)0)), (-2012601283)))) >= (arr_2 [i_0] [i_2 - 1])));
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-64)))))));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) (short)-8003)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (0U))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2])) > (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_2 [i_0] [i_2 - 2])))))))));
                                arr_17 [i_4] [i_3] [i_3] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0] [i_3] [i_2])) ? (659975779U) : (var_2))) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_0]))))))) ? (8331655105801108760LL) : (max((((((/* implicit */_Bool) 1276065284)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_7))), (var_7)))));
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (534773760U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-64)), ((unsigned char)192)))) : (((/* implicit */int) ((short) 4294967295U)))))) ? (max((((/* implicit */unsigned long long int) arr_8 [i_4] [i_3] [i_1])), (arr_1 [i_2 - 3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) 8331655105801108760LL)) || ((_Bool)1)))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)124))))))))))));
                            }
                            for (unsigned char i_5 = 2; i_5 < 23; i_5 += 2) 
                            {
                                var_16 ^= ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) arr_14 [i_5] [i_3] [i_2 - 3] [i_2] [i_1] [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24466))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-24474)))))))))));
                                arr_21 [i_0] [i_3] [i_2 + 2] [i_1] [i_0] = ((/* implicit */_Bool) arr_3 [i_3] [i_0]);
                                var_17 += ((/* implicit */unsigned short) 3760193547U);
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (signed char)64)))), (((/* implicit */int) ((arr_2 [i_0] [i_8]) > (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-125)), (arr_10 [i_0] [i_0] [i_0] [i_0])))))))));
                                arr_29 [i_0] [i_7] [i_6] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (short)-27250)) ? (arr_10 [i_8] [i_8] [i_0] [i_8]) : (3058412520U)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_11 [i_7] [i_7] [i_7]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((0ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0])))))))))) : (min((((((/* implicit */_Bool) var_4)) ? (arr_18 [i_6] [i_1] [i_6] [i_7] [i_8]) : (arr_3 [i_0] [i_0]))), ((+(((/* implicit */int) var_8))))))));
                                arr_30 [i_0] [i_0] [i_1] [i_6] [i_6] [i_0] [i_8] = ((((/* implicit */int) max((max((((/* implicit */signed char) arr_12 [i_8] [i_7] [i_7] [i_6] [i_1] [i_0])), ((signed char)122))), (((/* implicit */signed char) ((arr_3 [i_0] [i_0]) <= (var_5))))))) <= (((/* implicit */int) arr_7 [i_0] [i_7])));
                                var_19 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((arr_3 [i_6] [i_7]) + (916954669))) - (31)))))) ? (((((/* implicit */_Bool) arr_27 [i_6] [i_0] [i_0] [i_0] [i_0])) ? (6251593202665707886ULL) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) arr_0 [i_7])))) / (((/* implicit */unsigned long long int) var_7))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_11 = 2; i_11 < 23; i_11 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)192)))) * (((/* implicit */int) (unsigned char)14))));
                                var_21 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((arr_4 [i_11 - 1]) << (((((/* implicit */int) (unsigned char)192)) - (163)))))), (((((/* implicit */_Bool) arr_6 [i_11 - 1] [i_9] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_10))))) | (min((((((/* implicit */_Bool) arr_23 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_10]))) : (var_10))), (max((((/* implicit */long long int) arr_5 [i_0])), (var_10)))))));
                                var_22 = ((/* implicit */long long int) arr_5 [i_0]);
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) arr_19 [i_10] [i_10] [i_9] [i_10] [i_11 + 1] [i_9])))) < (((/* implicit */int) ((((/* implicit */int) arr_27 [i_0] [i_10] [i_9] [i_1] [i_0])) == (((/* implicit */int) var_9))))))))) != (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_37 [i_11 - 1] [i_10] [i_9])) : (1518760997)))) ? (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_11 - 2] [i_11 + 2] [i_0] [i_11 + 2] [i_11] [i_11])))))));
                            }
                            for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                            {
                                var_24 = ((/* implicit */int) 4294967292U);
                                arr_42 [i_0] [i_0] [i_9] [i_10] [i_10] [i_10] [i_12] = var_3;
                            }
                            arr_43 [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((7953278228590523158LL), (((/* implicit */long long int) (unsigned char)64))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) (+(4294967292U)))) ? (((/* implicit */long long int) (+(1976271687U)))) : (((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_9] [i_10])) ? (arr_35 [i_0] [i_1] [i_9] [i_10]) : (((/* implicit */long long int) arr_5 [i_0]))))))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_5))));
                            var_26 += ((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((((/* implicit */_Bool) ((276509472) / (arr_28 [i_0] [i_1] [i_9] [i_10])))) ? ((+(3812540152021716604LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_9]))))) - (172LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
