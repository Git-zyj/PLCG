/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105026
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
    var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) ((unsigned int) var_7)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_8)), (var_1))), (((/* implicit */unsigned int) (+(arr_10 [i_4] [i_3] [i_4] [3U] [i_0]))))));
                                var_12 = ((/* implicit */long long int) max((((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                                arr_12 [i_0] [i_3] |= ((/* implicit */signed char) ((((/* implicit */int) var_4)) & ((~(((/* implicit */int) arr_11 [i_4] [i_2] [i_2] [(unsigned char)16] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1903842270) & (((/* implicit */int) var_9))))) ? ((+(min((arr_7 [i_2] [i_0]), (((/* implicit */long long int) var_4)))))) : (((((arr_4 [i_1] [i_1] [i_1] [i_0]) / (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_2] [i_0] [i_1])))) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [16U])) && (((/* implicit */_Bool) var_1))))), (min((arr_8 [i_0] [i_5]), (arr_8 [i_0] [i_1]))))))));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) min((var_5), (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_7 [i_6] [i_2]))))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_22 [i_0] [i_0] [(signed char)8] [i_5] [i_5 + 2] [2LL] = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_17 [(_Bool)1] [i_7 + 1] [i_5 - 1] [i_0]), (arr_17 [i_0] [i_7 + 1] [i_5 + 1] [i_5])))), ((~((-2147483647 - 1))))));
                            var_16 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_8)) + (2147483647))) << (((((arr_5 [i_0] [i_0] [i_5 - 1] [i_7 + 1]) + (7291654695598816103LL))) - (20LL))))) <= ((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_5 + 2] [i_7 + 1] [i_7 + 1] [i_7]))))));
                            arr_23 [i_0] [i_0] [i_0] [(unsigned short)11] [i_0] = ((/* implicit */_Bool) -1903842271);
                        }
                        var_17 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (1162668990U))) >= (((/* implicit */unsigned int) min((((/* implicit */int) (short)9884)), (((arr_10 [8LL] [i_1] [i_2] [i_2] [i_5]) + (((/* implicit */int) var_9)))))))));
                    }
                }
                for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_9 = 2; i_9 < 19; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) var_6);
                        arr_29 [i_0] [i_1] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_9 - 2] [i_9 - 1] [i_9 - 2] [i_8])) <= ((-(((/* implicit */int) arr_13 [i_9] [i_9 - 2] [i_9 - 2] [i_8]))))));
                        arr_30 [i_8] [i_8] [i_8] [i_9] = ((((arr_14 [i_9] [i_1] [(_Bool)1] [i_9 - 2]) ? (var_2) : (((/* implicit */long long int) var_1)))) / (((/* implicit */long long int) ((/* implicit */int) min((arr_14 [i_0] [i_0] [(_Bool)1] [i_9 - 1]), (arr_14 [i_0] [i_1] [i_0] [i_9 + 1]))))));
                    }
                    arr_31 [i_8] = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)2306)) : (((/* implicit */int) arr_13 [(_Bool)1] [11LL] [4U] [4U]))))), (((((/* implicit */_Bool) var_2)) ? (arr_5 [2U] [i_1] [17U] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_8)), (var_1))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [1] [i_0] [i_1] [i_1] [i_0] [i_0]))))))));
                }
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) arr_2 [i_1] [3U] [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_20 [5] [i_0] [i_0] [5] [i_1] [i_1])) == (arr_15 [i_0] [i_1] [i_1] [i_0])))))))));
                var_20 = ((/* implicit */short) min((min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) ((1903842270) - (((/* implicit */int) var_8))))))), (((/* implicit */long long int) ((short) max((((/* implicit */unsigned int) -1903842271)), (arr_26 [i_0] [12LL] [(unsigned short)12])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_0))));
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((var_1) & (1162668995U))))));
}
