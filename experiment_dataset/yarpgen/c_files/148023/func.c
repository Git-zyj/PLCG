/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148023
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0] [3]);
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned short)29922);
                    arr_14 [13ULL] [i_0] = ((/* implicit */unsigned char) arr_12 [(unsigned short)0] [i_0] [7ULL]);
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)23104))));
                    var_13 = min((((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_6 [i_0] [i_4]))), ((+(((/* implicit */int) arr_3 [i_0])))));
                    arr_16 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_11 [i_0] [(unsigned short)14]))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_4 [i_0] [(unsigned short)8] [5] [i_0])) : (((/* implicit */int) var_12)))) != (((/* implicit */int) ((short) var_5)))))) : (((/* implicit */int) ((unsigned short) arr_2 [i_0])))));
                }
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    var_14 ^= ((/* implicit */short) var_5);
                    arr_21 [i_0] [i_0] [i_1] [i_1] = ((short) max(((+(((/* implicit */int) (short)7465)))), (((/* implicit */int) arr_3 [i_0]))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 14; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            {
                                arr_30 [i_0] [i_1] [(short)13] [(short)13] [(unsigned short)8] = ((/* implicit */long long int) (-(max((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_25 [i_0] [(unsigned short)2] [i_0] [i_0] [(unsigned short)2]))), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
                                arr_31 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-3)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */long long int) (~((+(((/* implicit */int) arr_11 [i_0] [i_0]))))))) : (9223372036854775788LL)));
                                arr_32 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)6382))))) ? (9223372036854775807LL) : (-9223372036854775807LL))) / (((/* implicit */long long int) (-((+(var_4))))))));
                            }
                        } 
                    } 
                    arr_33 [i_0] [i_0] [i_0] = ((/* implicit */short) min((arr_22 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]))));
                }
                for (int i_9 = 1; i_9 < 14; i_9 += 1) 
                {
                    var_15 = ((/* implicit */short) (-((((!(((/* implicit */_Bool) arr_28 [6ULL] [i_0] [(short)14] [(_Bool)1] [(_Bool)1] [6ULL] [i_0])))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_24 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) arr_28 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [(unsigned short)7] [(_Bool)1] [(_Bool)1]);
                                arr_41 [i_0] [i_1] [i_9] [i_0] [10LL] [10LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((-(arr_39 [(unsigned short)11] [i_0] [i_9] [(short)2] [i_9] [i_9]))), (((arr_27 [i_11] [i_0] [(short)7] [(short)7] [i_0] [(short)7]) ? (arr_34 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [(_Bool)1] [(_Bool)1] [i_0]))))))))));
                            }
                        } 
                    } 
                    arr_42 [i_0] = ((/* implicit */long long int) arr_40 [i_9] [i_0] [i_9] [i_1] [i_9] [i_0] [i_9]);
                }
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)0)), ((~((-(((/* implicit */int) var_8))))))));
}
