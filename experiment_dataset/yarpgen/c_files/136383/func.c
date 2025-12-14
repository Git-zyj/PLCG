/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136383
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (2854848743U)));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_19 |= ((/* implicit */_Bool) max((((((/* implicit */int) arr_0 [i_0 - 3])) ^ (((/* implicit */int) arr_0 [i_0 + 2])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
        var_20 += ((/* implicit */short) (-(((arr_1 [i_0]) + (max((arr_1 [i_0]), (arr_1 [i_0])))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) var_1);
            var_22 &= ((((/* implicit */_Bool) (unsigned short)27739)) ? (arr_3 [i_0] [i_1 + 2] [9]) : (((/* implicit */int) (short)-10007)));
        }
        for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0])) : (((/* implicit */int) var_1))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0])))))) ? (var_14) : (((/* implicit */int) arr_7 [i_0] [i_0])));
            var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_5 [i_0 - 3] [i_2 - 1] [i_2 + 1])) - (var_4)))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((arr_2 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) != (((/* implicit */unsigned int) arr_3 [i_0] [i_0 - 1] [i_0 - 3]))));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                var_26 = ((unsigned short) arr_12 [(unsigned short)11] [i_3] [i_4]);
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    var_27 = ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
                    var_28 = ((/* implicit */int) arr_14 [i_0] [i_3] [i_4] [i_5] [i_4]);
                }
            }
            for (int i_6 = 1; i_6 < 22; i_6 += 4) 
            {
                var_29 &= ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_14)) : (4165293880563069514ULL))) * (((/* implicit */unsigned long long int) arr_13 [i_0 - 3] [i_0 - 3] [i_0 - 3]))));
                var_30 |= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_17 [(_Bool)1] [i_3] [i_0])))))) : (((unsigned int) (_Bool)1))));
            }
            var_31 = ((/* implicit */_Bool) var_6);
        }
        var_32 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (arr_15 [i_0] [i_0 - 2] [i_0] [i_0 + 2] [i_0]) : (arr_15 [i_0] [i_0 + 1] [i_0] [i_0 - 2] [i_0 - 3]))) == (((/* implicit */long long int) (-(((((/* implicit */_Bool) 7U)) ? (arr_18 [i_0] [i_0] [i_0] [i_0]) : (arr_1 [i_0]))))))));
    }
    for (int i_7 = 4; i_7 < 21; i_7 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) arr_5 [(_Bool)1] [i_7 - 3] [i_7])))));
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_14 [(short)3] [(short)3] [i_7] [i_7] [(short)3])) ^ (((/* implicit */int) arr_4 [i_7])))), (((/* implicit */int) arr_8 [i_7 - 2] [i_7 - 2]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-22039))))) : (max((var_8), (((/* implicit */unsigned int) (unsigned char)255))))));
        var_35 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) -367228960)), (arr_2 [i_7])));
    }
}
