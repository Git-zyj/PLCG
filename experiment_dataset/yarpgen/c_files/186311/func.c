/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186311
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned short) var_7)), ((unsigned short)27038)))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [i_1 + 2])) ? (0ULL) : (((/* implicit */unsigned long long int) var_11)))))));
                        var_18 *= ((unsigned int) (_Bool)0);
                    }
                    arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned int) (unsigned short)27043))), ((+(((((/* implicit */_Bool) (unsigned char)112)) ? (var_8) : (((/* implicit */long long int) var_15))))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 3; i_4 < 15; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-(min((arr_18 [i_0 + 1] [i_1 + 1] [i_5] [i_1 + 1] [i_4 - 3] [i_1 + 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_0] [i_5] [i_4] [i_0] [i_1] [i_0])) : (((/* implicit */int) var_7))))))))))));
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_0] [14U] = ((/* implicit */unsigned short) max(((((+(((/* implicit */int) (signed char)-110)))) * ((+(((/* implicit */int) (unsigned char)123)))))), ((~(((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4]))))));
                                arr_21 [i_5] [i_5] [i_0] [i_5] [i_0] |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)123))))), (max((((((/* implicit */_Bool) 17992051771954177985ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) : (17U))), (((686971480U) >> (((var_15) + (237057530)))))))));
                                arr_22 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */short) 6ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        arr_26 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_1 + 2] [i_0]))));
                        arr_27 [i_1] [i_1 + 2] [i_2] [(unsigned short)6] [(unsigned char)0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */long long int) arr_0 [14ULL])) : (373337998183609082LL)))) ? (((/* implicit */int) (unsigned short)22737)) : (((/* implicit */int) arr_24 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1]))));
                        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) var_13)))));
                        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_25 [i_0 + 2] [i_1])) : (((/* implicit */int) var_5))))) ? ((~(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4))))));
                    }
                    for (unsigned char i_7 = 1; i_7 < 15; i_7 += 3) 
                    {
                        arr_31 [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_3)), (min((var_1), (((/* implicit */unsigned long long int) arr_25 [i_1 + 2] [i_0 - 1]))))));
                        arr_32 [(unsigned char)14] [4U] [4U] [i_0] |= ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_1 + 2] [i_7 - 1] [i_7 - 1])))), ((~((-(((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [14U] [i_0] [i_0]))))))));
                        var_22 = ((/* implicit */int) var_2);
                        arr_33 [i_0] [i_0] [i_0] [i_2] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_13)), (var_15))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))))));
                        var_23 = ((/* implicit */int) ((unsigned int) max(((+(1993628986U))), (((/* implicit */unsigned int) arr_29 [i_7] [i_2] [9] [9] [9])))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 454692301755373630ULL)) ? (((/* implicit */unsigned long long int) var_11)) : (454692301755373631ULL)))))) != (((var_2) | (((/* implicit */long long int) 1379248047))))));
}
