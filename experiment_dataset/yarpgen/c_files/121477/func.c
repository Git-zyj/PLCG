/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121477
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_17 |= ((/* implicit */unsigned int) max(((+((+(((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1))));
        var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [(unsigned char)0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11)))), (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 7; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 *= ((/* implicit */_Bool) (+(max(((+(((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned short)7] [i_0])))), (((/* implicit */int) max((arr_6 [i_0]), (var_8))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (unsigned short)29031))));
                                var_21 -= (unsigned short)36505;
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(arr_11 [i_4] [(_Bool)1] [i_2] [i_1] [(unsigned short)5]))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) arr_6 [i_0]);
                    var_24 += ((/* implicit */int) ((long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29031))) <= (var_15)))) >> (((((unsigned int) arr_12 [i_1] [i_1])) - (21433U))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_12 [i_6] [i_0])))))));
                    var_26 += ((/* implicit */int) arr_1 [i_0]);
                    var_27 *= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_5] [i_0]))) + (((((/* implicit */_Bool) arr_7 [i_6] [i_5] [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_6] [i_6] [2U]))))))), (((/* implicit */unsigned long long int) (((+(1303017343U))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_5]))))))))));
                }
            } 
        } 
    }
    for (unsigned int i_7 = 3; i_7 < 16; i_7 += 4) 
    {
        var_28 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max(((unsigned char)18), (((/* implicit */unsigned char) arr_19 [i_7]))))) ? (arr_20 [2] [i_7]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0)))))))));
        var_29 &= min((((/* implicit */int) (unsigned short)12507)), ((-(((/* implicit */int) arr_19 [(_Bool)1])))));
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (unsigned char)255))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 3; i_8 < 16; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                {
                    var_31 *= ((/* implicit */_Bool) arr_22 [i_9] [i_8]);
                    /* LoopNest 2 */
                    for (short i_10 = 2; i_10 < 16; i_10 += 4) 
                    {
                        for (long long int i_11 = 1; i_11 < 13; i_11 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) * ((-(((/* implicit */int) arr_21 [i_10] [i_8 - 1]))))))) - (max((max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_26 [i_10]))), (((/* implicit */unsigned long long int) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) arr_28 [(unsigned short)14] [i_8] [i_10] [i_10] [i_11 + 2])))))))))))));
                                var_33 += ((/* implicit */_Bool) (-(((arr_23 [i_7 - 3] [i_8] [i_8] [i_10]) ? (((/* implicit */int) arr_23 [i_7 - 3] [i_8] [i_9] [i_9])) : (((/* implicit */int) arr_23 [i_7 + 1] [i_7 + 1] [14LL] [i_9]))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) arr_28 [i_7] [i_7] [i_9] [i_7] [i_7]))));
                }
            } 
        } 
        var_35 *= ((/* implicit */_Bool) arr_26 [(unsigned short)16]);
    }
    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
    {
        var_36 -= ((/* implicit */unsigned short) min(((-((-(var_14))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_31 [i_12]))) & (((/* implicit */int) ((unsigned char) var_5))))))));
        var_37 = ((/* implicit */int) (unsigned char)88);
    }
    var_38 *= ((/* implicit */unsigned long long int) (-(((min((((/* implicit */long long int) var_2)), (var_13))) | (((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned char) (_Bool)0))))))))));
}
