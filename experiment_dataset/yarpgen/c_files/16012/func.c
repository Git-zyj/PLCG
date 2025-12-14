/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16012
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
    var_17 = ((/* implicit */signed char) ((min((var_16), (((/* implicit */unsigned long long int) var_8)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) <= (((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */unsigned int) var_0))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        arr_9 [i_3] = ((/* implicit */long long int) ((signed char) arr_6 [(signed char)3] [i_2 - 2] [i_3 - 1]));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_1] [i_1] [9ULL] [i_4] [i_1] [(signed char)10] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)88)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (min((3528411947103066845ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]))))));
                            var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_9)), ((-(((var_16) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                        }
                    }
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_6 = 2; i_6 < 8; i_6 += 2) 
                        {
                            var_19 = (-(((unsigned int) arr_7 [i_0])));
                            var_20 = ((/* implicit */unsigned int) var_0);
                        }
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            arr_23 [4LL] [i_1] [i_2] [i_5] [i_7] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_11 [i_7] [i_5] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (arr_16 [i_0] [i_2] [i_0] [i_0] [i_7])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_10 [(signed char)7] [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2 + 1] [i_2 + 1]))))) : (((((/* implicit */_Bool) arr_6 [i_7] [i_0] [i_2 - 1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) : ((~(var_16))))));
                            var_21 = ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_5] [(short)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (4013026427573230603ULL));
                            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) ((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */int) var_9))))))));
                        }
                        var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) != (((var_16) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190))))))))) + (((((/* implicit */_Bool) var_12)) ? ((-(var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (var_11)))) >> (((((11534671752019274558ULL) - (((/* implicit */unsigned long long int) 7864320U)))) - (11534671752011410215ULL))))) < (((/* implicit */int) (unsigned short)42150)))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
                    {
                        arr_26 [i_2] [i_2] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)176))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_5)) >> (((((/* implicit */int) (signed char)-21)) + (40)))))))) : (((arr_20 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_8] [i_8] [i_8]) % (var_16))));
                        arr_27 [i_8] [(unsigned char)2] [i_8] [i_8] [i_8] [i_8] = (-(((((/* implicit */_Bool) arr_2 [i_0] [i_2 + 1])) ? (arr_2 [i_8] [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 1; i_9 < 10; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 4; i_10 < 9; i_10 += 2) 
                        {
                            {
                                var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (1908506512U)))) : (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_10 - 4] [i_10 - 4] [i_2 - 1] [i_9 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_9] [i_9] [i_10 - 4] [i_1] [i_2 - 1] [i_9 - 1]))) : (var_4)))));
                                var_26 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_9] [i_10])))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_1)), ((unsigned char)79))))) : (min((((/* implicit */long long int) var_11)), (var_6))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_9])) ? ((-(var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? ((~(11534671752019274558ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) var_9))))) + (((/* implicit */unsigned long long int) var_4))));
    var_28 = ((/* implicit */signed char) (-((-(((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (_Bool)1)))))))));
}
