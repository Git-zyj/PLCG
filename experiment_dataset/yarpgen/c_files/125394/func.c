/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125394
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
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((unsigned int) (short)-11519)) << (((((/* implicit */int) var_1)) + (13375))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_17 *= ((/* implicit */unsigned short) min(((!((!(((/* implicit */_Bool) arr_2 [i_0])))))), ((!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_13))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((-856293157) < (((/* implicit */int) arr_1 [i_0])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) max((var_10), (((/* implicit */short) var_4)))))))) : (arr_2 [i_0])));
        var_18 = ((/* implicit */int) (((((~(var_0))) ^ (arr_2 [i_0]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */int) var_1);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 2; i_3 < 16; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_7 [(unsigned short)17]))));
                        arr_14 [i_2] [(unsigned short)11] [i_3] = ((/* implicit */int) ((unsigned short) ((max((var_13), (((/* implicit */unsigned long long int) var_14)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4]))))));
                        arr_15 [i_1] [i_2] [i_2] [i_3 - 2] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((2147483647), (arr_10 [i_2] [i_3 - 1] [i_3 - 1] [i_3 + 2])))) ? (((/* implicit */int) ((signed char) arr_10 [i_2] [i_3 + 1] [i_3 - 2] [i_3 - 2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3 - 2] [i_3 + 2] [i_3 + 1] [i_3 + 1])))))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) ((unsigned short) arr_13 [i_3 - 2]));
                        var_22 = ((/* implicit */unsigned short) ((var_3) ? (arr_10 [i_2] [i_3 - 2] [i_3 + 1] [i_3 + 1]) : (arr_10 [i_2] [i_3 + 1] [i_3 + 1] [i_2])));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                        {
                            var_23 = ((((/* implicit */_Bool) 14236001567695843066ULL)) ? (6696463525335710356LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_3 - 1] [i_3 + 1] [i_2]))));
                            arr_23 [i_3] [i_2] = ((/* implicit */int) arr_9 [i_3 - 1]);
                        }
                        for (int i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_3 - 2])) ? (((/* implicit */int) arr_22 [i_3 - 2] [i_3 + 1] [i_2])) : (((/* implicit */int) ((var_3) || (((/* implicit */_Bool) arr_11 [i_5] [i_3])))))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((signed char) arr_26 [i_3 + 2] [(unsigned char)2] [i_3 - 2] [i_3 + 2] [i_3] [i_3] [(unsigned char)12])))));
                        }
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_20 [i_3 + 1] [i_3] [16U] [i_3] [i_3 + 2]))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            var_27 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_27 [i_2] [i_2] [i_8])) == (((/* implicit */int) arr_22 [i_1] [i_2] [i_2]))))) == ((~(((/* implicit */int) arr_27 [0ULL] [8] [i_3])))))));
                            arr_33 [i_2] [(unsigned char)15] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [i_3 + 1] [i_9])) : ((~(((/* implicit */int) arr_22 [i_3] [i_8] [i_2]))))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [(signed char)6] [i_3 - 2])) ? (arr_8 [i_3] [i_3 - 1] [i_3 + 1]) : (arr_8 [i_9] [i_2] [i_3 - 2]))) : ((~(((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_1] [(unsigned short)3] [i_2] [i_9])))))))));
                            var_28 = ((/* implicit */int) arr_25 [i_3 + 1] [i_3 + 1] [i_3] [i_2] [i_3 + 1]);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_22 [i_3 + 2] [i_3 + 2] [i_2]))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-11500)) : (((/* implicit */int) arr_22 [i_3 + 2] [i_3 + 1] [i_2])))) : (((((/* implicit */_Bool) arr_22 [i_3 + 2] [i_3 + 1] [i_2])) ? (((/* implicit */int) arr_22 [i_3 - 1] [i_3 + 2] [i_2])) : (((/* implicit */int) arr_22 [i_3 - 1] [i_3 + 1] [i_2]))))));
                            var_30 = ((/* implicit */unsigned short) var_11);
                            var_31 *= ((/* implicit */unsigned long long int) ((((arr_18 [i_3] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3]) < (arr_18 [(unsigned short)17] [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3] [i_3 + 1]))) ? (1072693248U) : (((/* implicit */unsigned int) arr_24 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1]))));
                            arr_38 [i_1] [i_2] [i_3] [i_8] [i_10] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_37 [0U] [i_3 + 1] [0U] [i_3 + 1] [i_3 + 1] [i_10] [i_10])))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? ((-(((/* implicit */int) arr_16 [i_10] [i_2] [i_3 - 2] [i_2] [i_2] [i_1])))) : (min((((/* implicit */int) arr_22 [i_1] [i_2] [i_2])), (arr_12 [11U] [i_2] [i_2] [4LL]))))) : (((((var_9) < (((/* implicit */int) (short)11519)))) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) var_11))))))));
                        }
                        var_32 = ((/* implicit */unsigned char) -988095397435379955LL);
                        arr_39 [i_8] [2LL] [i_2] [i_2] [12ULL] [i_1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [i_2] [i_3 + 1])))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_13 [i_8]))))) ? (((/* implicit */int) ((short) arr_35 [i_1] [i_1]))) : (((/* implicit */int) arr_19 [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3] [i_3]))))));
                    }
                    arr_40 [i_2] [i_2] [i_2] = ((/* implicit */int) ((arr_24 [i_3] [i_3 - 2] [i_3 - 2] [i_2] [i_3 - 1]) != (((/* implicit */int) arr_35 [i_3 - 1] [i_1]))));
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_35 [i_1] [i_1])) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_7)))))))));
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
    {
        var_34 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-99))))) ? (6988730051845509872ULL) : (((/* implicit */unsigned long long int) arr_18 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))));
        var_35 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [12LL] [i_11]))) <= (arr_8 [i_11] [4] [(unsigned short)17])));
        var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_11] [i_11] [i_11] [i_11] [i_11])) % (((((/* implicit */_Bool) (unsigned char)114)) ? (arr_30 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) : (((/* implicit */int) (unsigned short)15))))));
    }
    var_37 = var_6;
}
