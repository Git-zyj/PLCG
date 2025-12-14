/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120014
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
    /* LoopSeq 4 */
    for (int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) arr_1 [i_0]))))) ? (max(((-(((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */int) arr_0 [i_0 - 2] [9U])) / (((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((/* implicit */int) arr_1 [(unsigned short)5]))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_2 [i_0] [i_0]))))))));
    }
    for (short i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */short) max((max((((((/* implicit */_Bool) arr_6 [i_1 + 2])) ? (((/* implicit */int) arr_5 [(unsigned short)11] [i_1])) : (((/* implicit */int) (unsigned char)254)))), (((((/* implicit */_Bool) (signed char)44)) ? (var_2) : (((/* implicit */int) arr_6 [(short)12])))))), (var_2)));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) (unsigned short)21791)))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((int) arr_1 [i_1 + 1])), (var_2)))) ? (((/* implicit */int) arr_5 [i_1 + 2] [(short)10])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1]))))))))));
    }
    for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) arr_10 [i_2]);
        var_22 = ((/* implicit */short) arr_10 [i_2]);
    }
    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 4) 
        {
            for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 4; i_7 < 22; i_7 += 4) 
                        {
                            {
                                arr_24 [i_3] [i_3] [i_7] = max((((((/* implicit */_Bool) (+(2424113649510667926ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_7]))))) : (((((/* implicit */_Bool) arr_14 [i_4 - 1])) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) var_12)))))), (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)100)), (var_10)))));
                                arr_25 [i_3] [(_Bool)1] &= arr_9 [i_7 - 2] [i_5];
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) arr_17 [i_3] [i_3] [i_3]);
                    var_24 = ((/* implicit */unsigned char) max((((int) var_3)), ((~(((/* implicit */int) max((((/* implicit */short) arr_23 [i_5] [14ULL] [i_5] [i_3] [i_3] [i_3])), (var_11))))))));
                    var_25 = ((/* implicit */signed char) arr_23 [i_4 + 1] [i_3] [i_5] [i_3] [i_5] [i_3]);
                }
            } 
        } 
        arr_26 [i_3] = ((/* implicit */signed char) (+(arr_9 [i_3] [i_3])));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 4; i_8 < 22; i_8 += 3) 
    {
        for (short i_9 = 2; i_9 < 22; i_9 += 4) 
        {
            {
                var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                var_27 = ((/* implicit */_Bool) arr_31 [i_8] [i_8]);
            }
        } 
    } 
}
