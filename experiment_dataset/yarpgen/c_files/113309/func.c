/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113309
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
    var_15 = ((/* implicit */unsigned char) var_13);
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) * (((/* implicit */int) var_6)))) - (((/* implicit */int) var_4))))) ? (max((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) % (((/* implicit */int) (unsigned short)25144))))))) : (2623857413U)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((short) (~(arr_2 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
        arr_5 [i_0] = ((/* implicit */signed char) (+((~(max((arr_2 [i_0] [i_0]), (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (16U) : (16383U)));
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            var_18 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(arr_2 [(short)6] [4ULL])))) ? ((~(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) / (((/* implicit */unsigned int) -1264056048))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (unsigned char i_4 = 2; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (min(((-(((/* implicit */int) var_11)))), ((-(((/* implicit */int) var_4))))))));
                        arr_21 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) arr_18 [i_1]);
                    }
                } 
            } 
        }
        var_20 += arr_11 [i_1 + 1] [(unsigned char)8] [i_1 - 1];
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_5))));
        var_22 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((4U), (((/* implicit */unsigned int) var_4))))) ? (((var_0) & (((/* implicit */long long int) ((/* implicit */int) arr_19 [(short)0] [i_1 + 1] [(short)0]))))) : (((/* implicit */long long int) ((arr_14 [i_1] [i_1] [(short)6] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1] [(unsigned char)6]))))))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 10; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_30 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58438))) / (4503599090499584ULL)))) ? (((/* implicit */long long int) ((unsigned int) var_6))) : (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_17 [i_5] [i_5] [i_7] [i_6])))));
                    arr_31 [i_6] [i_6] |= ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 1382901421U)) : (arr_16 [2ULL] [i_6] [i_6]))) == (((/* implicit */unsigned long long int) arr_2 [i_6] [i_5 + 1]))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_13))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            {
                                arr_36 [i_5] [i_9] [i_5] = ((/* implicit */_Bool) ((arr_17 [i_5] [i_5 - 1] [i_6 - 1] [i_9]) ^ (arr_17 [i_5] [i_5 - 1] [i_6 - 2] [i_9])));
                                var_24 = ((/* implicit */unsigned long long int) ((long long int) arr_15 [i_5] [i_6] [i_9]));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 12; i_10 += 4) 
        {
            for (int i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_25 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_11]))));
                                var_26 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) arr_18 [i_12])) : (((/* implicit */int) arr_18 [i_11]))));
                            }
                        } 
                    } 
                    var_27 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_11] [i_5 + 1] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_5 + 1]))) : (var_0)));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 10U)) % (arr_16 [i_5 - 1] [i_10] [i_11]))))));
                }
            } 
        } 
    }
}
