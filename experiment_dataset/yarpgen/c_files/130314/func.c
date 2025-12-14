/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130314
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (var_8)));
    var_18 = var_4;
    var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) 480390858)) : (var_16))) >> (((((/* implicit */int) var_8)) - (167)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || ((!(((/* implicit */_Bool) 27ULL))))))) : (var_15)));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)106))))) ? (((((/* implicit */_Bool) (unsigned short)38997)) ? (((/* implicit */long long int) arr_1 [i_0] [16LL])) : (var_4))) : (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)5])) ? (arr_1 [i_0] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0]))))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_23 = ((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 + 1])) ? (arr_1 [i_1 - 2] [i_1]) : (arr_1 [i_1 - 2] [(unsigned short)4]));
        var_24 &= ((/* implicit */unsigned int) arr_0 [i_1] [6ULL]);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
    {
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_5 [i_2 + 1]) / (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */unsigned int) var_15)) & (var_16))) : (((((/* implicit */_Bool) (unsigned short)32076)) ? (arr_6 [i_2]) : (3711685582U)))));
        arr_8 [i_2] = ((/* implicit */long long int) ((int) var_1));
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            for (long long int i_4 = 2; i_4 < 11; i_4 += 1) 
            {
                {
                    arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(arr_13 [i_4] [i_3] [i_3 - 1])));
                    arr_16 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_3])) ? (arr_6 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 + 1] [i_2] [i_2])))))) && (((/* implicit */_Bool) var_1))));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((0LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)207)))));
                        arr_21 [i_2 + 2] [i_2] [i_2 - 1] [(unsigned short)6] [i_2 - 1] = ((/* implicit */unsigned short) var_6);
                        var_27 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)82))));
                    }
                    for (int i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 2; i_7 < 11; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_7 - 1])) ? (var_10) : (((/* implicit */int) arr_14 [i_4 - 2]))));
                            var_29 = ((/* implicit */unsigned char) arr_7 [i_7 + 1] [i_7 - 1]);
                        }
                        var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_3 - 1])) ? (((/* implicit */unsigned int) var_6)) : (arr_24 [i_4 + 1] [i_3 + 1] [i_2 - 1] [i_6])));
                        arr_29 [0] = ((/* implicit */unsigned short) ((7ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)16266)) / (arr_20 [i_2] [i_2]))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 9; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 11; i_9 += 2) 
                        {
                            {
                                arr_35 [i_8 + 2] [(unsigned char)7] [i_8 + 2] [2U] [i_3] [i_2] = ((/* implicit */unsigned short) ((unsigned int) 2940480648705647518LL));
                                var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_8 + 2] [i_3 - 1] [i_2 + 1]))) == ((-(arr_28 [i_8 + 3] [0] [i_4] [i_8]))))))));
                                var_32 = ((/* implicit */unsigned short) ((3711685600U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_3 + 1] [i_4 - 1] [i_9 - 2])))));
                                var_33 = ((/* implicit */unsigned long long int) -879296232);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_34 = ((arr_11 [i_2 + 1] [i_2 + 2] [i_2 + 2]) / (((/* implicit */int) var_14)));
        var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((var_6) | (((/* implicit */int) (unsigned short)33469))))) > (arr_24 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2 + 2])));
    }
    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        arr_38 [i_10] [3] = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((arr_36 [(unsigned char)1]) ^ (var_1)))) ^ ((~(arr_3 [i_10])))))));
        /* LoopSeq 1 */
        for (int i_11 = 2; i_11 < 17; i_11 += 4) 
        {
            arr_42 [i_11] [i_11 - 2] [(unsigned short)6] = ((/* implicit */int) var_2);
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 18; i_13 += 4) 
                {
                    {
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (~(2940480648705647521LL))))));
                        arr_51 [i_12] [i_12] [9ULL] [i_10] [i_12] = ((/* implicit */unsigned int) 9191262659736264348ULL);
                        var_37 = var_13;
                        var_38 = ((/* implicit */unsigned int) (+(((arr_43 [i_13] [i_11] [i_10]) & (((/* implicit */int) (unsigned short)21))))));
                    }
                } 
            } 
            var_39 = arr_1 [i_11 - 1] [i_11];
        }
        var_40 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) max(((unsigned short)32078), (((/* implicit */unsigned short) (unsigned char)190))))));
        var_41 = var_16;
    }
}
