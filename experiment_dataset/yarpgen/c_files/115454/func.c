/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115454
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
    var_20 = ((/* implicit */unsigned char) ((unsigned long long int) var_2));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) ((unsigned char) var_7)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_22 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0])))))));
        var_23 *= ((/* implicit */_Bool) ((long long int) ((min((((/* implicit */unsigned int) (short)-3607)), (1989945486U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -648947246)) < (8341478839515885494ULL))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4462669036304184323LL)) ? (2305021809U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((543684588U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)23209)))))) ? ((+(((unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned short) (short)-3608))), (((((/* implicit */_Bool) 543684588U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) : (2305021808U)))))))))));
        var_25 += 1989945509U;
    }
    for (short i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        var_26 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 + 1]))))) ? (((max((1989945503U), (((/* implicit */unsigned int) (unsigned short)54492)))) >> (((min((var_10), (((/* implicit */long long int) var_13)))) + (5148624506902187233LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 3])))));
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) 197376019))));
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_28 &= ((/* implicit */short) (!(((/* implicit */_Bool) min((1254827363), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (2018318438U)))))))));
                    var_29 = (unsigned short)50316;
                }
            } 
        } 
        arr_13 [i_1 + 1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 3])) ? (4439812329219823299ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 3])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1]))) * (3275090411U))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_12 [i_1] [i_1] [(unsigned short)4])), (((arr_9 [(signed char)4]) - (arr_9 [(unsigned short)10]))))))));
    }
}
