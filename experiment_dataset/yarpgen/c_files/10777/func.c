/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10777
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)3)) ? (min((18124255231248320251ULL), (((/* implicit */unsigned long long int) 4331099031007637289LL)))) : (((/* implicit */unsigned long long int) 1742096133U))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)158)), (-8316750262217042067LL))))));
                    arr_8 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)158))));
                    var_13 = ((/* implicit */int) arr_3 [i_0 - 2]);
                }
            } 
        } 
    } 
    var_14 = var_7;
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 11; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) arr_6 [i_3] [i_4] [i_5] [i_4]);
                            /* LoopSeq 2 */
                            for (signed char i_7 = 2; i_7 < 11; i_7 += 3) 
                            {
                                var_16 = min((((long long int) arr_15 [i_3] [i_4 + 1] [i_4 + 1] [i_6] [i_7] [i_4])), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)125))))));
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned int) min((((unsigned long long int) (unsigned char)49)), (((/* implicit */unsigned long long int) arr_20 [i_7] [i_7] [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 2] [i_7]))))))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((_Bool) max((-1), (2147483646)))))));
                            }
                            for (unsigned long long int i_8 = 4; i_8 < 11; i_8 += 1) 
                            {
                                var_19 ^= ((/* implicit */unsigned int) arr_5 [i_3] [i_5]);
                                arr_24 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_4 + 1] [i_4])) & (arr_18 [i_4 + 1] [i_6] [i_4 + 1] [i_6] [i_8])))) ? (min((8316750262217042067LL), (((/* implicit */long long int) (unsigned char)8)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_3 - 1] [i_4 + 1] [i_4 + 1] [i_8 - 4])), (arr_0 [i_3 - 1])))))));
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_4 [i_3]))));
                                var_21 = ((/* implicit */unsigned int) ((signed char) ((long long int) min((((/* implicit */unsigned short) arr_14 [i_4])), ((unsigned short)26943)))));
                            }
                            arr_25 [i_3] [i_3] [i_4 + 1] [i_5] [i_4] [i_3] = ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned char)3)));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_5 [i_4] [i_6]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_9 = 1; i_9 < 11; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        {
                            arr_32 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_29 [i_3] [i_4] [i_3] [i_3] [i_10] [i_9]))) ? ((+(arr_12 [i_3 + 1] [i_4 + 1] [i_4]))) : (2590799204U)));
                            var_23 ^= ((/* implicit */signed char) ((_Bool) ((_Bool) (_Bool)1)));
                            arr_33 [i_10] |= ((/* implicit */unsigned char) arr_13 [i_10] [i_10]);
                        }
                    } 
                } 
                arr_34 [i_3] [i_4] [i_4] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) arr_21 [i_3 - 1] [i_4] [i_4 + 1])), (min((arr_30 [i_3 - 1] [i_3] [i_3] [i_4]), (((/* implicit */unsigned long long int) 8U))))))));
                arr_35 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_3 - 1] [i_3 + 1] [i_4])) ? (arr_31 [i_3] [i_4]) : (((/* implicit */unsigned int) arr_28 [i_3] [i_3 + 1] [i_3 + 1]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_26 [i_3] [i_3] [i_4])), (((int) (unsigned short)13752))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_3 - 1] [i_3] [i_3] [i_4 + 1] [i_4 + 1]))) & (16481282818132527485ULL)))));
            }
        } 
    } 
}
