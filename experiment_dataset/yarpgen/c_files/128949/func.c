/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128949
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_10 += (((-(arr_6 [i_2 + 1] [i_2] [i_2 - 2]))) & (((/* implicit */unsigned long long int) var_1)));
                    var_11 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)40162)) + (((((/* implicit */int) var_7)) / (((/* implicit */int) arr_0 [(unsigned char)19])))))) ^ (((/* implicit */int) ((4294967295U) == (0U))))));
                    arr_9 [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) var_5);
                    arr_10 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (short)0)), (((((/* implicit */_Bool) 1632150030U)) ? (arr_6 [i_0] [i_1] [0U]) : (((/* implicit */unsigned long long int) 127701188U)))))), (((unsigned long long int) arr_5 [i_2 + 1] [i_2 - 2] [i_2 + 1]))));
                }
            } 
        } 
        arr_11 [i_0] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2727738892737319238ULL)) ? (25U) : (4294967284U)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)2])) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1))))))));
    }
    var_12 -= ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_1))));
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                {
                    var_13 += var_3;
                    arr_19 [i_5] [i_3] [9ULL] [i_5] = (~(((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) (signed char)-22))))) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_3] [i_4])) <= (arr_12 [i_5]))))))));
                    arr_20 [i_3] [i_4] [i_3] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_12 [i_5])), (var_6)));
                }
            } 
        } 
    } 
    var_14 = (!(((/* implicit */_Bool) max((((((((/* implicit */int) var_0)) + (2147483647))) << (((var_1) - (4242346704U))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
}
