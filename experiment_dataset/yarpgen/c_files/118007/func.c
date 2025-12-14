/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118007
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_17 = var_1;
        var_18 = ((/* implicit */unsigned long long int) (-(arr_0 [i_0])));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */int) var_13))))));
                    var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1]))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_1 + 1] [i_0]) : (arr_1 [i_1 + 1] [i_1 - 1])));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned long long int) (~(arr_9 [i_3] [(short)15])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                {
                    arr_16 [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 + 3])) ? (((/* implicit */int) arr_2 [i_3 + 3])) : (((/* implicit */int) arr_7 [i_3 + 3])))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                    {
                        arr_20 [i_6] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_3 + 2])) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_3 + 2] [i_3 + 2])))))));
                        var_22 = ((/* implicit */long long int) (-(((((((/* implicit */int) arr_7 [i_3])) << (((var_9) - (1950259584))))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (-((~(arr_17 [i_3 - 1] [i_3 - 2]))))))));
                        var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) arr_8 [i_5])) ? (((/* implicit */int) arr_8 [i_5])) : (((((/* implicit */_Bool) arr_8 [i_3 - 1])) ? (((/* implicit */int) arr_8 [i_6])) : (((/* implicit */int) var_11))))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */int) var_11);
                        var_26 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_17 [i_3 + 2] [i_3 - 1])) ? (arr_17 [i_3 - 1] [i_3 - 2]) : (((/* implicit */unsigned long long int) var_12))))));
                        var_27 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)47649)) ? (((/* implicit */int) (unsigned short)17887)) : (((/* implicit */int) (unsigned char)50))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                        var_29 = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) arr_7 [i_3 - 2])), (arr_14 [i_5] [i_3 + 1] [i_3 + 3])))));
                        var_30 = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned char)60)) << (((((/* implicit */int) (unsigned char)46)) - (31))))), (((/* implicit */int) (unsigned short)47656))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */signed char) arr_26 [i_3 + 3] [2ULL] [i_5] [4LL] [i_9] [i_5]);
                        arr_28 [i_3 + 2] [i_4] [i_5] [i_9] = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) min((arr_27 [i_4] [1ULL] [i_4] [i_4] [i_3 - 2] [i_3 - 2]), (((/* implicit */unsigned short) arr_10 [i_5]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_9]))) / (arr_19 [i_9] [i_5] [i_3])))))));
                        var_32 = ((/* implicit */long long int) (~(max((min((arr_22 [i_3 + 1] [i_4] [i_3 + 1] [i_9]), (((/* implicit */unsigned long long int) arr_21 [i_3] [i_3 + 3] [i_3] [i_3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */int) var_2)))))))));
                        var_33 = ((/* implicit */unsigned short) (-((-(min((arr_6 [i_4] [i_4] [i_4] [(unsigned short)2]), (((/* implicit */int) var_11))))))));
                    }
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [i_3 + 3] [8ULL] [i_3 + 2]))));
    }
    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            for (long long int i_12 = 2; i_12 < 23; i_12 += 1) 
            {
                {
                    var_35 = ((/* implicit */short) ((((/* implicit */int) (signed char)127)) | (((/* implicit */int) (unsigned short)27832))));
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_5)) : (((((/* implicit */_Bool) arr_34 [i_10] [i_12 - 1] [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)206)) || (((/* implicit */_Bool) (unsigned char)199)))))) : (((((/* implicit */_Bool) var_10)) ? (arr_1 [i_10] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
                    arr_36 [i_10] [i_12] = (+(((((/* implicit */_Bool) arr_31 [i_10] [i_11])) ? (var_8) : (((/* implicit */int) arr_31 [i_10] [i_10])))));
                    var_37 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_12 + 1])) ? (arr_6 [i_10] [i_11] [i_12 - 1] [i_10]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1780982194)) ? (-12LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56)))))) ? (((((/* implicit */int) arr_32 [i_10])) / (arr_0 [i_12]))) : (((/* implicit */int) arr_31 [i_12 + 1] [i_12 - 2]))))));
                }
            } 
        } 
        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) min((arr_1 [i_10] [i_10]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_10]))) : (var_14))))))))))));
    }
    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)16686)) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) (unsigned short)47670))));
    var_40 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)44902)) : (((/* implicit */int) var_13))))) == (min((12LL), (((/* implicit */long long int) (unsigned char)49))))));
    /* LoopNest 2 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 4) 
        {
            {
                var_41 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_23 [i_13] [i_13] [i_14] [i_13])))) > (((/* implicit */int) ((var_16) && (arr_23 [i_13] [i_13] [i_14] [i_14]))))));
                arr_41 [i_13] [i_14] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1029098779)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137))) : (11LL)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_13])));
            }
        } 
    } 
}
