/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108394
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 424491318)) : (var_3))) : (((/* implicit */unsigned long long int) -8581630936221586106LL))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_11 [i_1] [i_1] = ((/* implicit */long long int) 1217457801U);
                        arr_12 [i_1] [i_1] [i_2] [i_2] [i_3] = var_3;
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 19; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                {
                    arr_21 [i_4] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((8581630936221586105LL), (-8581630936221586086LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4]))) : (var_7))) >= (((/* implicit */unsigned long long int) arr_17 [i_4]))));
                    arr_22 [i_4] [i_5] [i_6] = ((/* implicit */int) max((min((min((((/* implicit */long long int) arr_20 [i_4])), (arr_18 [i_4] [i_4] [i_4]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)60))))))), (-8581630936221586105LL)));
                    arr_23 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (arr_15 [i_4 + 1] [i_4 + 1])))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)-22))) % (8581630936221586096LL))), (max((((/* implicit */long long int) arr_20 [i_4])), (8581630936221586085LL)))))) : (((((/* implicit */_Bool) arr_15 [i_5] [i_5 - 1])) ? (((/* implicit */unsigned long long int) arr_18 [i_4] [i_4] [i_4])) : (max((arr_16 [i_4]), (((/* implicit */unsigned long long int) var_4))))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            {
                                arr_30 [i_4] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */long long int) 2526881513265907893ULL);
                                var_10 ^= ((/* implicit */int) ((((/* implicit */_Bool) min((2564805048092240416ULL), (2564805048092240416ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_6] [i_5 + 2] [i_4] [i_6] [i_8] [i_6] [i_8]))) + (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_31 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */int) (unsigned short)28206))))) ? (arr_20 [i_4]) : (((/* implicit */unsigned int) ((int) var_3)))))) ? ((~(var_0))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))) - (3561644114U)))))));
    }
    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 3; i_10 < 19; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                {
                    arr_41 [i_9] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_10] [i_10 - 2] [i_10]))))), ((-(arr_19 [i_10] [i_10 - 3] [i_10])))));
                    var_11 = ((/* implicit */unsigned char) ((unsigned short) ((arr_26 [i_10 - 3] [i_10] [i_11]) ? (((/* implicit */long long int) -976584603)) : (var_4))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        var_12 ^= ((/* implicit */unsigned int) min((max((((unsigned long long int) arr_24 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_0))));
                        var_13 = ((/* implicit */unsigned int) ((var_4) >= ((-(max((((/* implicit */long long int) (signed char)75)), (arr_18 [i_10] [i_11] [i_10])))))));
                        arr_44 [i_9] [i_10] [i_11] [i_12] = arr_17 [i_12];
                        var_14 = ((/* implicit */long long int) arr_35 [i_11]);
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_45 [i_11] [i_11] [i_11] [i_13] [i_10])) + (min((((((/* implicit */_Bool) 3418081089530284501LL)) ? (arr_35 [i_11]) : (((/* implicit */unsigned long long int) 8581630936221586088LL)))), (max((var_3), (((/* implicit */unsigned long long int) arr_42 [i_9] [i_9]))))))));
                        arr_47 [i_10] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 6637720427355560257ULL))));
                        arr_48 [i_9] [i_10] [i_10] [i_9] [i_10] [i_13] = ((/* implicit */signed char) ((long long int) max((((/* implicit */long long int) (signed char)22)), (3418081089530284485LL))));
                        arr_49 [i_10] [i_10] = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) 1881679283)), (var_7))), (((/* implicit */unsigned long long int) min((-8581630936221586090LL), (((/* implicit */long long int) (signed char)-22)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9] [i_10] [i_9] [i_9] [i_13]))) : ((-(max((arr_18 [i_9] [i_9] [i_9]), (((/* implicit */long long int) var_5)))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((268431360), ((-(-1881679287))))))));
                                arr_54 [i_9] [i_9] [i_9] [i_9] [i_9] = (+(((4912246997959952722LL) << (((15881939025617311199ULL) - (15881939025617311199ULL))))));
                            }
                        } 
                    } 
                    arr_55 [i_9] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 11258081438710062009ULL))) ? (((/* implicit */unsigned long long int) 1610612736)) : (arr_39 [i_9] [i_11] [i_11]))))));
                }
            } 
        } 
        arr_56 [i_9] = ((/* implicit */unsigned long long int) arr_53 [i_9] [i_9] [i_9] [i_9] [i_9]);
        var_17 = ((/* implicit */unsigned long long int) var_1);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_0)) : (arr_13 [i_9])))) ? (((/* implicit */unsigned long long int) arr_34 [i_9])) : (18136714520972451745ULL)));
    }
    var_19 &= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)203))) : (var_6)))) ? (var_3) : (((/* implicit */unsigned long long int) var_0))))));
}
