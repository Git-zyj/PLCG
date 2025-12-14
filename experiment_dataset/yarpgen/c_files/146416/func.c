/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146416
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) arr_0 [i_0]))));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_2)));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (arr_8 [i_1] [i_1]) : (((/* implicit */int) (short)0)))) ^ ((-(((/* implicit */int) (unsigned char)0))))));
            var_15 = (~(18446744073709551615ULL));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_2])) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [(short)7])) : (arr_8 [i_1] [i_1])))));
        }
        var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1]))))) >> (((((int) var_2)) + (1735584494)))))));
        var_18 = ((max((((/* implicit */int) arr_7 [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)32767)))))) % (((-1562280301) ^ (((/* implicit */int) (_Bool)1)))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    {
                        arr_19 [i_3] [i_3] [3U] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) && ((!(((/* implicit */_Bool) 6995664094262845779ULL))))));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) arr_3 [i_5] [i_5]);
                            var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_3] [i_4])) ? (((((/* implicit */unsigned long long int) var_11)) & (var_10))) : (((/* implicit */unsigned long long int) ((arr_21 [i_3] [i_3] [i_5] [i_6] [i_3] [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-78))) : (4601886557701633356LL))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */short) (+(((arr_21 [i_8] [i_8] [i_5] [i_5] [i_3] [i_3]) ? (780563067013469874ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8021)))))));
                            var_22 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [5U] [5U] [i_6])) ? (((/* implicit */int) arr_16 [i_3] [i_4] [i_3] [(signed char)6])) : (((/* implicit */int) arr_18 [i_3] [i_8])))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_27 [i_3] [i_9] [i_6] [i_6] [i_9] [i_4] = ((/* implicit */int) arr_12 [i_6]);
                            var_23 += ((/* implicit */signed char) arr_13 [(unsigned short)4]);
                            arr_28 [5U] [(_Bool)1] = ((/* implicit */unsigned int) ((short) arr_8 [i_3] [i_9]));
                            arr_29 [i_4] [i_4] [i_4] [i_9] [i_4] = ((((/* implicit */_Bool) arr_7 [i_5] [i_6] [i_9])) ? (arr_8 [i_9] [i_5]) : (arr_22 [i_3] [i_3] [i_5]));
                            arr_30 [i_3] [i_4] [(signed char)7] [i_4] [i_9] [i_6] = ((/* implicit */unsigned long long int) arr_3 [i_5] [i_5]);
                        }
                    }
                } 
            } 
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) 2199023254528ULL)) ? (var_8) : (((/* implicit */long long int) arr_25 [i_3])))))));
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1)))))));
                var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-15522)) : (((/* implicit */int) (short)-15684))))) || (((/* implicit */_Bool) ((unsigned long long int) var_3)))));
            }
            var_27 = ((/* implicit */unsigned short) (_Bool)1);
        }
        var_28 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
        arr_34 [i_3] = ((/* implicit */unsigned long long int) 7579856245571085543LL);
    }
    for (int i_11 = 0; i_11 < 15; i_11 += 4) 
    {
        var_29 = ((/* implicit */short) 16640097332762623851ULL);
        var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_11])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((var_6), (arr_36 [i_11]))))));
    }
    var_31 *= ((/* implicit */_Bool) var_0);
    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1832754344)) ? (((/* implicit */int) (short)-30105)) : (((/* implicit */int) (_Bool)1))));
}
