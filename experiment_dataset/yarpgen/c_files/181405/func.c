/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181405
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        arr_4 [2ULL] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (var_7)));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & ((~(((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_2)) - (245)))))) ? (((var_4) ^ (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)52292)) ? (((/* implicit */int) (unsigned short)52292)) : (((/* implicit */int) (unsigned short)63083))))))) : (((/* implicit */unsigned int) ((var_6) ? (((((/* implicit */int) var_2)) << (((var_7) - (10776198576872402504ULL))))) : (var_8))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_9 [6ULL] [i_1] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))) << (((((/* implicit */int) var_9)) - (6627)))));
        var_14 = var_12;
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        arr_13 [i_2] = ((/* implicit */long long int) (-(((var_7) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned int) var_0);
        var_15 = ((/* implicit */unsigned short) min((var_15), (var_0)));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 3; i_3 < 16; i_3 += 2) 
        {
            var_16 += ((/* implicit */unsigned short) var_1);
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            arr_26 [i_3] [i_5] [12U] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) != (((((/* implicit */int) var_9)) * (((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_5)) > (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_12)) : (var_10)))))) : (((((/* implicit */int) var_9)) ^ ((~(((/* implicit */int) var_3))))))));
                            arr_27 [i_3] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) && (((/* implicit */_Bool) (~(var_4))))));
                            arr_28 [i_2] [7LL] [i_3] [i_2] [i_2] [7U] = ((/* implicit */signed char) (~(((((((/* implicit */int) var_0)) >> (((var_1) - (2431484977U))))) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))))));
                            var_17 += ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                            var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) var_12))))));
                        }
                    } 
                } 
                arr_29 [14U] [(unsigned short)6] [i_4] |= ((/* implicit */unsigned int) var_0);
            }
            for (int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                var_19 -= ((/* implicit */unsigned short) (+(((((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_2)))) : (((/* implicit */int) var_11))))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_4)) ? (var_5) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))));
                arr_32 [i_2] [i_3] [i_3 - 1] [i_2] &= ((((((/* implicit */int) (signed char)-54)) + (2147483647))) << (((((/* implicit */int) (unsigned short)63085)) - (63085))));
            }
        }
    }
    var_21 = ((/* implicit */unsigned short) var_8);
}
