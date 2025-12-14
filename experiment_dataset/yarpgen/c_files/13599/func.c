/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13599
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
    var_19 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((long long int) (~(1153701741)))))));
                                var_21 = ((/* implicit */signed char) var_0);
                                var_22 = ((/* implicit */unsigned short) 2147483640);
                                var_23 *= ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((unsigned long long int) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0]))))));
                        var_25 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18266))) : (arr_13 [i_0 + 1] [i_1] [i_2] [i_0 + 1])))), (var_16))) >> (((max((var_15), (((/* implicit */unsigned int) var_12)))) - (1970377404U)))));
                        var_26 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0])), (max((var_3), (((/* implicit */unsigned long long int) var_11))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_7 = 1; i_7 < 14; i_7 += 2) 
            {
                for (unsigned char i_8 = 3; i_8 < 15; i_8 += 4) 
                {
                    for (unsigned char i_9 = 4; i_9 < 15; i_9 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */int) ((unsigned int) (short)18281));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) max((arr_6 [i_0] [i_6] [i_9]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_25 [(_Bool)1] [i_9 + 1]))))))))));
                            var_29 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned char) 11252364614832596519ULL))), (11252364614832596524ULL)));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) -1153701740)), (var_3))), (((/* implicit */unsigned long long int) arr_24 [i_0] [i_6] [i_7 + 1] [i_0] [i_9]))))) ? (((((/* implicit */_Bool) arr_9 [i_8] [i_9 + 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_6] [i_7] [i_0] [i_8] [i_9] [i_9 - 4]))) + (var_16))) : (((/* implicit */unsigned long long int) arr_7 [i_8] [i_6] [i_6] [i_0])))) : (max((((/* implicit */unsigned long long int) var_18)), (min((((/* implicit */unsigned long long int) var_9)), (arr_1 [i_0])))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_10 = 1; i_10 < 14; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_0 + 1] [i_0 + 1] [i_10] [i_11 - 1] [i_10 - 1])), (arr_13 [i_0 + 1] [i_6] [i_11] [i_11])))) ? (((/* implicit */unsigned int) max((arr_8 [i_0 + 1] [i_6] [i_6] [i_11] [i_10 + 1]), (arr_17 [i_0 + 1] [i_11 - 2] [i_10])))) : (min((((/* implicit */unsigned int) (short)-18265)), (arr_13 [i_0 + 1] [i_6] [i_10] [i_11])))));
                            var_32 = ((/* implicit */unsigned short) var_12);
                        }
                    } 
                } 
            } 
        }
        var_33 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0 + 1])))));
    }
    var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-18269)) - (((/* implicit */int) (short)-18269))));
}
