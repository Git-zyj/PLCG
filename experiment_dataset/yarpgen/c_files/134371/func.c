/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134371
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) var_10);
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((int) (unsigned char)98)))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_4 [(short)6]))));
        var_23 |= ((/* implicit */unsigned char) ((((unsigned int) (short)-3821)) << (((((unsigned int) var_11)) - (681608317U)))));
        arr_8 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-3807)) | (((/* implicit */int) (short)-3812))));
    }
    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 3) 
    {
        arr_12 [i_3] |= (short)-3821;
        arr_13 [i_3] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_10 [i_3] [i_3 + 3]))))));
    }
    for (int i_4 = 1; i_4 < 7; i_4 += 2) 
    {
        var_24 = ((/* implicit */long long int) var_10);
        arr_18 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_15 [i_4]), (arr_15 [i_4]))))) & (((unsigned long long int) var_4))));
        arr_19 [0U] &= ((/* implicit */unsigned int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3815))) : (max((975242558U), (var_7))))))));
        /* LoopSeq 2 */
        for (unsigned int i_5 = 2; i_5 < 8; i_5 += 4) 
        {
            var_25 ^= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) min(((short)3821), (arr_11 [i_4])))) ? (max((((/* implicit */unsigned int) var_12)), (var_19))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) arr_0 [i_4] [7]))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                arr_25 [i_6] [i_6] |= ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                /* LoopSeq 4 */
                for (short i_7 = 1; i_7 < 10; i_7 += 1) 
                {
                    arr_30 [i_4] [i_4] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (short)3820)) << (((/* implicit */int) (_Bool)1))));
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (12062361357203751972ULL) : (((/* implicit */unsigned long long int) arr_23 [i_4])))))));
                    arr_31 [i_4] [i_5] [i_5] = ((/* implicit */short) ((arr_1 [i_4 + 2]) < (((/* implicit */int) (signed char)23))));
                    var_27 = ((/* implicit */short) ((((/* implicit */int) (signed char)0)) > (((/* implicit */int) (_Bool)1))));
                    var_28 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (short)-10)) * (((/* implicit */int) (short)-29837)))));
                }
                for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    var_29 = ((/* implicit */unsigned short) var_6);
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_28 [i_4] [i_5] [i_6] [i_8]))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-24)) ^ (((/* implicit */int) (signed char)-24))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) (short)7426)) ? (1183614310) : (((/* implicit */int) (short)7426))))));
                }
                for (short i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    arr_37 [i_4] [i_6] [i_5] [i_9] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) arr_2 [i_6])) >> (((((/* implicit */int) (signed char)-30)) + (49))))) : (((/* implicit */int) arr_15 [i_4]))));
                    var_32 |= ((/* implicit */short) ((arr_17 [i_4 + 1]) >> (((((((/* implicit */_Bool) arr_1 [i_9])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1)))) + (107)))));
                }
                for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 2) 
                {
                    var_33 = ((/* implicit */short) var_0);
                    arr_41 [i_4] = ((/* implicit */unsigned short) var_19);
                }
            }
            var_34 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) (short)(-32767 - 1)))));
        }
        for (short i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            var_35 = ((/* implicit */int) var_4);
            arr_44 [i_4] [i_11] [i_11] = ((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))));
        }
    }
    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
    {
        var_36 = ((/* implicit */unsigned short) arr_5 [i_12]);
        var_37 = ((/* implicit */signed char) 3536952110U);
        arr_47 [i_12] = ((/* implicit */short) max((-1183614314), (((/* implicit */int) (short)3821))));
        var_38 = ((/* implicit */short) (((~(var_19))) << (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_15))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */unsigned int) arr_3 [i_12])) < (var_7))))))));
    }
    var_39 *= ((/* implicit */unsigned char) ((((unsigned long long int) ((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_40 = ((/* implicit */unsigned short) var_3);
    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) ((short) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_18)), (var_12))))) : ((~(var_8)))));
}
