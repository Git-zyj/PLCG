/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188690
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_6)))) ? (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6))), (max((2097208849U), (((/* implicit */unsigned int) var_5)))))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */int) (unsigned char)8)) + (((/* implicit */int) var_8))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) (((-(min((((/* implicit */long long int) 1040187392U)), (arr_1 [i_0]))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_0])), (var_6)))) ? (arr_0 [i_0 - 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            var_12 = min((((int) ((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) var_0))))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)248)))))))));
            arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) << (((min((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) - (6527249621508639152LL))))) + (6527249621508638904LL)))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (-((+(min((3254779918U), (((/* implicit */unsigned int) var_5))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (int i_3 = 2; i_3 < 8; i_3 += 2) 
                {
                    {
                        arr_11 [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_0 [i_0]) + (2147483647))) >> (((2097208829U) - (2097208799U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_3])) ? (((/* implicit */long long int) arr_3 [i_0] [i_3])) : (68685922304LL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_4 [i_1])), (2197758446U)))) : (min((arr_9 [i_3]), (arr_9 [i_3]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) -2010448558))) ? (((/* implicit */int) arr_2 [i_0])) : (min((var_5), (((/* implicit */int) arr_7 [i_0] [i_2])))))))));
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (~(arr_1 [i_2])))) ? ((~(((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])))) : ((~(((/* implicit */int) arr_8 [i_0] [i_2] [i_3])))))))))));
                        arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(arr_1 [i_3])));
                        arr_13 [i_3] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_1] [i_2]) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned char)249))))) ? (((((/* implicit */int) arr_7 [i_2] [i_0])) >> (((((/* implicit */int) arr_2 [i_0])) - (81))))) : (((/* implicit */int) arr_7 [i_0 + 1] [i_1 + 2]))))) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (0LL) : (((/* implicit */long long int) max((var_6), (((/* implicit */unsigned int) arr_2 [i_0]))))))) : (((/* implicit */long long int) (~(min((((/* implicit */int) arr_7 [i_0] [i_1])), (1863380274))))))));
                        arr_14 [i_0] [i_1] = ((/* implicit */int) arr_4 [i_3]);
                    }
                } 
            } 
        }
        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((arr_1 [i_4]), (((/* implicit */long long int) 3254779918U)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_4])))))))) ? ((+(((/* implicit */int) arr_2 [i_0 + 1])))) : (((/* implicit */int) ((((((/* implicit */int) arr_8 [i_0] [i_4] [i_4])) >> (((((/* implicit */int) arr_10 [i_0] [i_4] [i_4] [i_4])) - (46036))))) == (((((/* implicit */int) var_2)) | (arr_0 [i_0]))))))));
            arr_17 [i_0] [i_0] = 12582912;
        }
        arr_18 [i_0] [i_0] = arr_7 [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5] [i_5]))))) == (arr_19 [i_5] [i_5])));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 3; i_6 < 17; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    arr_25 [i_6] [i_6] = arr_23 [i_5] [i_6] [i_7];
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (1073737728) : (((/* implicit */int) arr_22 [i_6] [i_6]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) arr_19 [i_6] [i_7])) : (arr_24 [i_5] [i_5] [i_7]))) : (((/* implicit */unsigned int) (~(arr_19 [i_6] [i_5]))))));
                    arr_26 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_23 [i_6] [i_7] [i_7]) + (((/* implicit */unsigned long long int) -303230468))))) ? (arr_24 [i_5] [i_6] [i_7]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_5] [i_6])) + (((/* implicit */int) arr_22 [i_5] [i_6])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            {
                                arr_32 [i_5] [i_5] [i_7] [i_8] [i_9] [i_9] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_29 [i_5] [i_6]))) ? (((int) arr_24 [i_5] [i_5] [i_7])) : ((~(arr_31 [i_5] [i_6] [i_5] [i_8] [i_9])))));
                                var_17 = ((/* implicit */unsigned char) arr_24 [i_5] [i_8] [i_7]);
                                arr_33 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_31 [i_5] [i_6] [i_6] [i_8] [i_9])) : (arr_21 [i_5])))) ? (((/* implicit */unsigned long long int) (~(arr_31 [i_9] [i_8] [i_6] [i_6] [i_5])))) : (((((/* implicit */_Bool) arr_20 [i_7] [i_9])) ? (9700815469693411887ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_5] [i_7])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 1; i_10 < 17; i_10 += 2) 
                    {
                        for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                        {
                            {
                                arr_40 [i_6] [i_6] [i_7] [i_10] [i_11] = ((/* implicit */unsigned short) ((unsigned int) ((arr_37 [i_11] [i_10] [i_7] [i_6] [i_5]) <= (((/* implicit */unsigned int) arr_19 [i_7] [i_6])))));
                                arr_41 [i_6] [i_11] = ((/* implicit */unsigned short) ((((-68685922305LL) != (((/* implicit */long long int) arr_19 [i_10] [i_10])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)27538))))) : (arr_21 [i_5])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_44 [i_12] &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1905953972)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_42 [i_12]))))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) var_4))))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_9))));
        var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_42 [i_12]))))) ? ((-(((/* implicit */int) arr_43 [i_12] [i_12])))) : ((~(((/* implicit */int) arr_43 [i_12] [i_12]))))))));
    }
}
