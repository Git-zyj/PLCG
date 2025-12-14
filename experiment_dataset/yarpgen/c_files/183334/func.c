/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183334
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_2 - 1] [i_2 + 3]))));
                    var_15 = ((/* implicit */unsigned int) arr_0 [i_1]);
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) && (((/* implicit */_Bool) var_3))));
                }
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((arr_7 [i_0]), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_14))))) : ((~(2U))))), (((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_5 [i_0] [i_0] [i_1] [i_3]), (((/* implicit */short) var_13))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) var_4);
                                arr_15 [i_5] [i_4] [i_4] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_3] [i_4 + 1] [i_4 + 1])) ? (arr_14 [i_0] [i_0] [i_4] [i_4 + 1] [i_4]) : (var_10))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (arr_3 [i_4 + 1]))))));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0])) ? (14608276461109644042ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23571)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((unsigned char) (unsigned char)233));
    /* LoopSeq 2 */
    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
    {
        var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_14))) == (arr_16 [i_6]))) ? (((((/* implicit */_Bool) arr_17 [i_6])) ? (arr_17 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) min((((/* implicit */int) var_9)), (2087006485))))))) && ((!(((/* implicit */_Bool) max((arr_17 [i_6]), (((/* implicit */long long int) var_6)))))))));
        arr_18 [i_6] = ((var_2) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2087006478)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (unsigned char)240))))));
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 1) 
            {
                for (unsigned short i_9 = 2; i_9 < 22; i_9 += 1) 
                {
                    {
                        arr_26 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_25 [i_6]), (arr_25 [i_9 - 2]))))) | (((((/* implicit */_Bool) max((arr_23 [i_6]), (((/* implicit */short) var_12))))) ? (((/* implicit */unsigned long long int) (+(arr_17 [i_6])))) : (((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7] [i_7])))))))));
                        arr_27 [i_9] [i_8] [i_9] [i_9] [i_9] = ((/* implicit */int) var_4);
                        var_22 = ((/* implicit */unsigned short) arr_17 [i_8 + 1]);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
        {
            for (signed char i_12 = 2; i_12 < 23; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_40 [i_11] [i_10] [i_11] = ((/* implicit */unsigned char) min((-2087006486), (((/* implicit */int) (unsigned short)13))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_14] [i_11])) >= (((((/* implicit */int) var_8)) * (((/* implicit */int) arr_28 [i_13]))))));
                                var_24 = ((/* implicit */signed char) var_12);
                                arr_41 [i_11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(-2087006489)))) / (min((var_0), (((/* implicit */unsigned long long int) arr_30 [i_14]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) var_2)))));
                    arr_42 [i_11] [i_10] [i_11] = ((/* implicit */unsigned short) var_5);
                    var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((max((9079838229616196966LL), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) arr_22 [i_10] [i_10] [i_12 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_10] [i_12] [i_12] [i_12] [i_12 - 2] [i_12] [i_12])) || (((/* implicit */_Bool) var_14)))))) : (((((/* implicit */_Bool) 2087006485)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) arr_23 [i_11])) ? (arr_17 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 2; i_15 < 21; i_15 += 1) 
                    {
                        for (long long int i_16 = 1; i_16 < 22; i_16 += 3) 
                        {
                            {
                                var_27 &= ((/* implicit */unsigned short) ((unsigned long long int) 14212336308783559690ULL));
                                arr_48 [i_11] [i_11] = ((/* implicit */short) ((unsigned int) var_14));
                                var_28 = ((/* implicit */signed char) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_49 [i_10] [i_10] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_21 [i_10] [i_10] [i_10] [i_10])) >> (((((/* implicit */int) max((((/* implicit */unsigned short) arr_34 [i_10] [i_10])), (var_3)))) - (65181))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))));
        var_29 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_34 [i_10] [i_10])) & (((/* implicit */int) arr_29 [i_10] [i_10]))))));
    }
    var_30 = ((/* implicit */short) (~(var_10)));
}
