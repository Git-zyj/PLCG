/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170539
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (-(400785084U))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0]))) : (3894182212U)))) ? (((3894182195U) & (3894182231U))) : ((~(4277127107U))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2013265920U)) || (((/* implicit */_Bool) (unsigned char)0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 7449606358353827162ULL)) || (((/* implicit */_Bool) 1285703707U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_16 += ((/* implicit */short) 3894182212U);
                                arr_15 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) arr_9 [i_0 + 2] [i_1] [i_2 + 1] [i_3]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        arr_20 [i_0] [i_0] [i_1] [i_2] [i_5] = ((/* implicit */signed char) (((~(((/* implicit */int) (short)-16751)))) < ((~(((/* implicit */int) var_0))))));
                        arr_21 [i_0] [i_1] = ((long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (-1783294324)));
                    }
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        arr_25 [i_0] [i_1] = ((/* implicit */unsigned int) (unsigned char)133);
                        arr_26 [i_0] [i_1] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_10 [i_2 - 1] [i_0 + 1] [i_0] [i_6])))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_7 = 4; i_7 < 16; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            {
                                arr_33 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_2] [i_7] [i_8])))), (((/* implicit */int) max(((unsigned char)136), ((unsigned char)134)))))))));
                                var_17 += ((((/* implicit */_Bool) min((arr_19 [i_0] [i_0 - 1] [i_7 - 1] [i_8] [i_8] [i_8]), (((/* implicit */short) var_6))))) ? (((unsigned int) arr_19 [i_0] [i_0 - 1] [i_7 - 3] [i_8] [i_8] [i_8])) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_0] [i_0 + 1] [i_7 - 3] [i_7] [i_7] [i_8])) / (((/* implicit */int) var_10))))));
                                var_18 = ((/* implicit */unsigned char) (signed char)37);
                            }
                        } 
                    } 
                    arr_34 [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) -1783294324))) % ((-(((/* implicit */int) var_10))))))), ((+(var_1)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_9 = 1; i_9 < 16; i_9 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) ^ (arr_5 [i_9] [i_9 - 1] [i_9 + 1])));
        arr_37 [i_9] = ((/* implicit */unsigned long long int) var_7);
        var_20 = ((/* implicit */unsigned long long int) (short)-32761);
        /* LoopNest 2 */
        for (unsigned int i_10 = 3; i_10 < 14; i_10 += 1) 
        {
            for (signed char i_11 = 3; i_11 < 16; i_11 += 2) 
            {
                {
                    var_21 = (short)18990;
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            {
                                arr_49 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) ((arr_10 [i_12] [i_11 - 2] [i_10] [i_10]) - (arr_10 [i_12] [i_11 - 3] [i_11] [i_10])));
                                arr_50 [i_9] [i_9] [i_11] [i_12] [i_9] [i_13] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)141)) + (((/* implicit */int) (short)-1559))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (-1338616046094985377LL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) == (10997137715355724453ULL)))) : (var_12)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_14 = 1; i_14 < 16; i_14 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_15 = 4; i_15 < 17; i_15 += 3) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 2) 
            {
                {
                    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)124))));
                    var_24 = (unsigned char)134;
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_29 [i_14] [i_14] [i_14] [i_14] [i_14]))) ? (((/* implicit */int) arr_56 [i_14] [i_14 - 1] [i_14] [i_14 + 1])) : ((~(((/* implicit */int) (unsigned char)136))))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_10 [i_14 + 2] [i_14 + 2] [i_14] [i_14])) > (var_3)));
        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((7655572896462957385ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))))))));
        arr_59 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)136)) << (((((/* implicit */int) var_7)) - (29413)))));
    }
}
