/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149751
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
    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) var_19))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] &= ((/* implicit */int) min((((((/* implicit */_Bool) max((((/* implicit */short) var_19)), (arr_1 [i_2] [i_0])))) ? ((-(1152921504604749824LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_16))))))), ((~(min((((/* implicit */long long int) arr_1 [i_2] [i_0])), (arr_0 [i_2])))))));
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) 1);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_6 = 2; i_6 < 21; i_6 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_7 = 2; i_7 < 21; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) (-(-2437468056560493171LL)));
                            var_22 = ((/* implicit */int) arr_11 [i_7]);
                            var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((-1152921504604749825LL) + (9223372036854775807LL))) << (((/* implicit */int) var_5))))) ? (arr_14 [i_6] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -1152921504604749812LL)) ? (-1) : (((/* implicit */int) arr_24 [i_5]))))));
                            arr_26 [i_3] [i_5] [i_5] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_6 + 1] [i_3]))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            arr_30 [i_5] [i_6] [i_5] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_9] [i_6] [i_6] [i_6] [i_6 - 1])) ? (-1605383739) : (((/* implicit */int) arr_29 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_6 + 1]))));
                            arr_31 [i_6] [i_5] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_25 [i_9] [i_6] [(unsigned short)2] [(signed char)13] [i_4] [(signed char)13])) > (((/* implicit */int) arr_10 [i_6] [i_5])))))));
                            var_25 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [i_6 - 2] [i_6 - 1] [i_6] [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_6 + 1]))));
                        }
                        arr_32 [i_6 - 2] [i_6] [i_5] [i_5] [i_3] [i_3] = ((/* implicit */short) arr_29 [i_6 - 2] [i_6] [5LL] [i_6] [i_6] [i_6 - 1] [i_4]);
                        var_26 += 4;
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_35 [i_10] [i_5] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) min((arr_16 [i_5] [i_4]), (((/* implicit */unsigned short) (_Bool)1)))))));
                        var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)21110))))), (max(((+(181703903U))), (((/* implicit */unsigned int) ((var_15) == (arr_18 [i_10] [i_5] [i_5] [i_4] [i_4] [i_3]))))))));
                    }
                    for (int i_11 = 4; i_11 < 20; i_11 += 2) 
                    {
                        var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((arr_17 [i_11 + 1] [i_5] [(signed char)4] [i_3]) * (((/* implicit */unsigned long long int) -5)))))) ? (((/* implicit */int) arr_29 [i_11] [16ULL] [i_3] [i_5] [i_5] [i_3] [i_3])) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) (_Bool)1))))))));
                        arr_38 [i_11 - 2] [i_5] [i_3] [i_3] = ((/* implicit */long long int) (+(8064)));
                        arr_39 [i_11 - 4] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((short) arr_14 [i_5] [i_4]));
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((unsigned short) ((max((((/* implicit */unsigned long long int) var_6)), (arr_17 [i_11 + 1] [i_5] [i_3] [i_3]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                    }
                    arr_40 [i_5] [i_4] [i_3] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_5]))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_12 [i_5] [i_3])))), (((/* implicit */int) ((unsigned char) arr_15 [(signed char)8] [i_4] [i_3] [i_3])))));
                    arr_41 [i_5] [i_5] [i_4] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((arr_37 [i_4] [i_3]) > (arr_37 [i_4] [i_3])))), (min((arr_37 [i_4] [i_3]), (((/* implicit */long long int) arr_12 [i_5] [i_4]))))));
                }
            } 
        } 
    } 
    var_30 &= ((/* implicit */long long int) var_3);
}
