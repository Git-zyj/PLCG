/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180731
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */unsigned char) min((((/* implicit */int) ((min((1695947191461423596LL), (((/* implicit */long long int) (unsigned char)149)))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (arr_2 [i_0])))))))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_4 [i_0] [i_0]) : (((/* implicit */int) arr_6 [(short)4] [i_0]))))));
                    var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 2] [i_2 - 2])))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 2] [4] [i_2 - 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3] [i_3]);
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max(((~(var_8))), (arr_9 [i_5]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) max((arr_20 [i_3]), (((/* implicit */unsigned short) (signed char)-123))))) * (((/* implicit */int) (unsigned char)167)))), (((int) var_16))));
                                var_22 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_13 [i_3] [i_5] [i_6]), ((unsigned char)223))))) % (arr_10 [i_3] [i_3] [(short)13])))) ? ((~(var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */long long int) max((arr_9 [i_3]), (((/* implicit */unsigned int) var_3))))) : (((long long int) var_7))))));
                                var_23 = ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_11 [i_3])), (var_1))) >> ((((~(((/* implicit */int) arr_15 [i_6] [i_6] [i_6 + 3] [i_6])))) - (21344)))));
                                arr_22 [(signed char)2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_4]))))) ? (((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) arr_8 [i_5]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (3039029961333027464LL)))) : (max((arr_19 [i_3]), (((/* implicit */unsigned long long int) 1546240595U)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-124)) & (((/* implicit */int) (unsigned short)11917))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (var_9)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11917))) : (var_0)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) (+(((unsigned int) var_7))));
                    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)131)))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [15U])) : (((/* implicit */int) (_Bool)1))))));
                }
                arr_25 [13LL] [i_3] [i_4] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) max((arr_16 [i_4] [i_4] [i_4] [i_3] [i_3]), (((/* implicit */long long int) 1446842816))))) ? (((((/* implicit */unsigned long long int) arr_18 [i_3] [8ULL] [i_4] [i_4])) / (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_4] [i_4]))))));
                arr_26 [12U] [12U] [i_3] = ((/* implicit */short) arr_16 [i_3] [i_3] [i_3] [i_3] [i_4]);
                var_26 = arr_23 [i_3] [(unsigned short)13] [i_3] [i_3];
            }
        } 
    } 
}
