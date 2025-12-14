/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150947
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) var_1);
                var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1 - 2] [(unsigned char)5])) * (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) && (((/* implicit */_Bool) var_0))))) : ((-(((/* implicit */int) (short)32767)))))), ((~(((/* implicit */int) (unsigned short)17837))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    arr_11 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_3] [i_4])) ? (((((/* implicit */_Bool) arr_7 [i_2] [(short)3] [i_4])) ? (arr_4 [i_3]) : (((/* implicit */unsigned long long int) arr_10 [i_4] [i_2] [i_2] [i_2])))) : (((/* implicit */unsigned long long int) (~(arr_5 [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_13 = ((((/* implicit */int) arr_12 [i_2] [i_2])) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_4 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((arr_9 [i_2] [i_5] [i_6]) < (((/* implicit */long long int) ((/* implicit */int) (short)8239)))))) : (((/* implicit */int) arr_12 [i_2] [i_2])))));
                                var_14 = ((/* implicit */int) ((short) max((var_9), (((/* implicit */unsigned long long int) arr_10 [i_2] [i_2] [i_2] [i_2])))));
                            }
                        } 
                    } 
                }
                for (short i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_2] [i_3])) : (((/* implicit */int) (unsigned short)11932)))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        arr_22 [i_3] = ((/* implicit */unsigned int) (-((-(((((/* implicit */int) var_6)) - (var_1)))))));
                        var_16 = ((/* implicit */short) var_6);
                    }
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        var_17 = ((/* implicit */long long int) ((((arr_6 [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12926))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11932)))));
                        var_18 = ((/* implicit */short) (+(arr_7 [i_2] [i_2] [i_2])));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_3] [i_7] [i_3]))) == (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (var_2))))));
                        var_20 = ((/* implicit */signed char) (+((+(((/* implicit */int) (unsigned short)11932))))));
                        var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_0))) > (arr_24 [i_3] [i_3] [i_3] [i_3] [i_3])))), (var_0)));
                    }
                    arr_25 [i_7] [i_7] [(short)12] [i_2] = var_5;
                }
                var_22 = ((/* implicit */_Bool) (+((((~(arr_7 [i_2] [(unsigned short)12] [i_2]))) ^ (((/* implicit */unsigned long long int) var_1))))));
            }
        } 
    } 
}
