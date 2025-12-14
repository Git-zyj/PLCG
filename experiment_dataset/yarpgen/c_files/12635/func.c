/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12635
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 17042430230528ULL)) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = var_9;
                arr_6 [i_0] = ((/* implicit */int) var_6);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (min((((/* implicit */long long int) var_8)), (min((((/* implicit */long long int) (_Bool)1)), (var_9)))))));
                    arr_9 [i_0] = ((/* implicit */short) (_Bool)1);
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_1])))) && (((/* implicit */_Bool) arr_2 [i_0] [i_1]))))) : ((+(((/* implicit */int) (signed char)(-127 - 1)))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_15 = arr_2 [i_1] [i_3];
                    arr_13 [i_0] [i_0] = var_0;
                    arr_14 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (403741881U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_1])))));
                }
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    var_16 = ((/* implicit */short) var_2);
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) ((((/* implicit */int) arr_17 [i_0] [i_1] [i_4])) > (((/* implicit */int) (signed char)46))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 14; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_5 - 1]))))) ? (((/* implicit */int) ((_Bool) arr_22 [i_5 - 1]))) : (((/* implicit */int) max((arr_22 [i_5 - 1]), (arr_22 [i_5 - 1]))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 1; i_7 < 14; i_7 += 2) 
                {
                    for (short i_8 = 1; i_8 < 14; i_8 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_15 [i_8] [i_7 + 1] [i_7] [i_8]))))) ? (((arr_23 [i_5 + 1] [i_6] [i_7]) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)102)))))) : ((-(var_8)))));
                            arr_29 [i_5] [i_5] [i_8] [i_5 - 1] = ((/* implicit */short) (-((-(arr_18 [i_5 + 1] [i_5])))));
                            /* LoopSeq 2 */
                            for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
                            {
                                var_20 = ((/* implicit */int) 4930177320138251295ULL);
                                arr_33 [i_8] [i_8] [i_7] [i_8 - 1] [i_6] [i_5 - 1] [i_7] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 2147483647)))));
                                var_21 = ((((/* implicit */int) arr_1 [i_5])) / ((-(((/* implicit */int) (unsigned char)102)))));
                            }
                            for (int i_10 = 1; i_10 < 13; i_10 += 4) 
                            {
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_1 [i_5 - 1])))), ((-(((/* implicit */int) arr_1 [i_5 + 1])))))))));
                                var_23 = ((/* implicit */short) ((((arr_7 [i_5 + 1] [i_8 + 1] [i_7 - 1]) * (arr_7 [i_5 + 1] [i_8 + 1] [i_7 + 1]))) / (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_15 [i_8] [i_6] [i_6] [i_7])), (arr_4 [i_6] [i_7 + 1] [i_7 + 1])))))));
                            }
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16263851988757829997ULL)) ? (((/* implicit */int) arr_17 [i_5 - 1] [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) arr_17 [i_5 + 1] [i_5 + 1] [i_5 - 1]))))) ? (((((/* implicit */_Bool) arr_17 [i_5 + 1] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (549755805696ULL))) : (var_2)));
                var_25 = min(((-(((/* implicit */int) var_5)))), ((-(-451231466))));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */int) min((((/* implicit */unsigned int) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_11] [i_5 - 1] [i_5 - 1] [i_11])))))), (((403741869U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_5 + 1])))))));
                            var_27 = ((/* implicit */int) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
}
