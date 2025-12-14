/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176512
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) (~(var_6)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_2] [10] = ((/* implicit */long long int) ((_Bool) ((int) (_Bool)1)));
                        arr_11 [i_2] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_6 [i_2] [i_2] [i_0])))) * (((/* implicit */int) (((-2147483647 - 1)) >= (2147483647))))));
                    }
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_18 [i_4] [i_5] = ((/* implicit */_Bool) (-2147483647 - 1));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_6 = 1; i_6 < 11; i_6 += 3) 
                {
                    var_14 = ((((/* implicit */_Bool) (-(arr_13 [i_6])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) (unsigned short)2032))))) : ((~((-2147483647 - 1)))));
                    arr_23 [i_4] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2098754466)) ? (-1) : (((/* implicit */int) (_Bool)0)))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_32 [i_4] [i_4] [i_8] [i_4] [i_9] |= ((/* implicit */int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)28220)), (arr_16 [i_7] [i_5] [i_4]))))))) ? (((/* implicit */unsigned int) (~(max((arr_26 [i_4] [i_5] [i_8]), (((/* implicit */int) var_11))))))) : (((((/* implicit */_Bool) arr_22 [i_8])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_4])) ? (1073741824U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                                var_15 *= ((/* implicit */unsigned short) (_Bool)1);
                                arr_33 [i_4] [i_5] [i_5] [(short)13] [i_8] [i_8] [i_9] = ((/* implicit */short) max((min((((/* implicit */int) min((((/* implicit */unsigned char) arr_27 [i_5] [i_7] [i_8])), (arr_29 [i_4] [i_5] [i_7] [i_8] [i_7] [i_7])))), (((((/* implicit */int) arr_15 [i_4])) << (((-2199023255552LL) + (2199023255561LL))))))), (arr_13 [i_5])));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */int) arr_16 [i_7] [i_7] [i_7]);
                    arr_34 [i_5] [i_4] [i_4] = ((/* implicit */short) min(((-((-(0U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)248))))))))));
                }
                for (long long int i_10 = 2; i_10 < 11; i_10 += 1) 
                {
                    arr_37 [i_5] = ((/* implicit */int) max((((/* implicit */unsigned int) (+(((int) (unsigned short)65533))))), (((unsigned int) ((((/* implicit */int) arr_36 [i_4] [i_5] [(_Bool)1])) * (((/* implicit */int) var_11)))))));
                    var_17 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [(unsigned char)2]))));
                }
                arr_38 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_36 [i_5] [i_4] [i_4]), (arr_27 [i_4] [i_4] [i_5])))) << ((((+(((unsigned int) arr_12 [i_5])))) - (4067810993U)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_11 = 2; i_11 < 18; i_11 += 3) 
    {
        var_18 |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_11])) ? (((/* implicit */int) arr_39 [i_11 + 1])) : (((/* implicit */int) (_Bool)1))))), (((arr_41 [i_11]) << (((/* implicit */int) (_Bool)0))))))));
        arr_42 [(_Bool)1] |= (+(((min((((/* implicit */int) (unsigned char)255)), (200478835))) << (((/* implicit */int) (_Bool)1)))));
        arr_43 [i_11] [i_11] = ((/* implicit */short) (unsigned short)28337);
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (unsigned short)21))))) && (((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) arr_39 [i_11]))))))))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_47 [i_12] [i_12] = ((/* implicit */short) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4094)) ? (arr_13 [(unsigned short)12]) : (((/* implicit */int) (short)-25726))))), (arr_25 [i_12] [i_12]))), (((/* implicit */unsigned int) (+(((int) arr_15 [i_12])))))));
        var_20 = (((~(-9223372036854775797LL))) == (((/* implicit */long long int) arr_40 [i_12])));
    }
}
