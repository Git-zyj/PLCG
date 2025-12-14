/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116227
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
    for (int i_0 = 3; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_14 &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [(unsigned short)18])), (arr_1 [i_0])))) != ((+(((/* implicit */int) arr_1 [4]))))))) > ((~(((/* implicit */int) arr_0 [(unsigned short)20]))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_0 [i_0])))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0]))) : (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))))));
            var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) -2040990572)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))), (-1711384856))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6583834630525352064LL)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_2]))))) ? (((((/* implicit */_Bool) (unsigned short)12140)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0 - 3])))) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0 + 1])));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((arr_7 [i_0 - 1] [i_0] [i_2]) + (arr_5 [i_0 + 2] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_2])))))));
        }
    }
    for (int i_3 = 3; i_3 < 19; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = min((((/* implicit */int) ((_Bool) arr_2 [i_3] [(unsigned short)10] [(_Bool)1]))), (((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (_Bool)1)))));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 2064637058)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3] [(unsigned short)10] [i_3 + 1]))) : (arr_8 [i_3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [i_3 + 3])), (arr_8 [i_3])))) ? (((/* implicit */int) ((signed char) arr_1 [i_3]))) : (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_11 [i_3 + 3])) : (((/* implicit */int) arr_10 [i_3] [i_3])))))))));
        /* LoopNest 3 */
        for (short i_4 = 2; i_4 < 20; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    {
                        arr_25 [i_3] [i_4 + 2] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (unsigned char)19))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned short) arr_20 [i_3] [i_4]);
                            var_19 &= ((/* implicit */_Bool) min((max((max((((/* implicit */long long int) arr_22 [i_3] [i_4] [i_4])), (arr_21 [i_4]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_3 - 1] [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_3 [i_3] [i_4] [i_5])) : (((/* implicit */int) arr_16 [i_3 - 2] [i_3 - 2]))))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_5 [i_7] [i_4 - 1])))) ? (((/* implicit */int) arr_23 [i_3 + 2] [i_3])) : (((/* implicit */int) arr_11 [i_4 + 1])))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_3 [i_3 + 1] [i_4] [12])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48169))) : (arr_8 [i_3]))))) ? (min(((+(((/* implicit */int) (unsigned char)125)))), (((((/* implicit */_Bool) arr_19 [i_4] [i_5])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_24 [i_3] [i_5] [i_3])))))) : (((/* implicit */int) arr_1 [i_3]))));
                            var_21 = ((arr_2 [i_7] [i_4] [i_4]) ? (((((/* implicit */long long int) min((((/* implicit */int) (short)19987)), (arr_22 [i_4] [i_5] [i_7])))) | (arr_5 [i_4 - 2] [i_4 - 1]))) : (((((/* implicit */_Bool) arr_7 [i_4 - 1] [i_4] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)130))) : (arr_7 [4] [i_4] [i_7]))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_4 - 1])) ? (((((/* implicit */int) arr_9 [i_4 + 1])) % (((/* implicit */int) arr_9 [i_4 + 2])))) : ((+(((/* implicit */int) arr_9 [i_4 - 1]))))));
                            arr_30 [i_3] [i_4] [i_5] [i_6] [i_5] [i_6] [i_5] = ((/* implicit */long long int) ((min((arr_10 [i_3 - 3] [i_4 + 1]), (arr_10 [i_3 - 2] [i_4 + 2]))) ? (min((arr_14 [i_4] [i_4 - 1]), (((/* implicit */int) ((unsigned char) arr_21 [i_3]))))) : (((((/* implicit */_Bool) arr_19 [i_3] [i_3 - 1])) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (_Bool)1))))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_4 - 1])) ? ((-(((/* implicit */int) arr_29 [i_3] [i_3 - 3] [i_3 + 2] [i_3] [i_3] [i_3] [i_4 + 1])))) : (((/* implicit */int) min((arr_29 [i_3 + 2] [i_3] [i_3 - 3] [i_3] [i_4 - 1] [i_4 + 2] [i_4 + 1]), (arr_29 [i_3] [i_3] [i_3 + 1] [i_3 + 3] [i_3] [i_3] [i_4 - 2]))))));
                            arr_31 [i_8] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_3] [i_4] [i_3 + 1])) ? (((((/* implicit */_Bool) (unsigned char)19)) ? (8203114112502192665LL) : (((/* implicit */long long int) 1333317439U)))) : (max((min((((/* implicit */long long int) arr_22 [i_3] [17LL] [(unsigned char)16])), (arr_8 [i_3]))), (((/* implicit */long long int) min(((unsigned short)65521), (((/* implicit */unsigned short) arr_20 [i_5] [i_3 - 3])))))))));
                        }
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4 - 1])) ? (((((/* implicit */_Bool) arr_5 [i_4 + 1] [i_3 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19988))) : (arr_28 [i_4] [i_4 - 2] [i_4] [i_4 - 1] [i_4 + 1]))) : (((((/* implicit */_Bool) arr_28 [i_4] [i_4 + 2] [i_4] [i_4 + 2] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))) : (arr_5 [i_4 + 2] [i_3 - 1])))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 3) 
    {
        arr_35 [i_9] [i_9 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_9] [i_9 + 1])) ? (((/* implicit */int) arr_16 [i_9 - 1] [i_9 + 1])) : (((/* implicit */int) arr_16 [i_9 - 1] [i_9 + 1]))));
        var_25 = ((/* implicit */unsigned char) ((int) (unsigned char)131));
    }
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 23; i_10 += 3) 
    {
        for (signed char i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            {
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_10])) ? (((/* implicit */int) arr_38 [i_10])) : (((/* implicit */int) arr_41 [i_10] [i_11] [i_11]))))) ? (min((((((/* implicit */int) arr_37 [i_10])) << (((((/* implicit */int) arr_36 [i_10])) + (7688))))), (((((/* implicit */_Bool) 15)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) arr_38 [i_10])))))) : (min(((+(((/* implicit */int) arr_37 [i_11])))), (((/* implicit */int) min((((/* implicit */short) arr_39 [i_10])), ((short)-10008))))))));
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_10])) * (((/* implicit */int) arr_41 [10LL] [i_11] [i_11]))))) ? (((((/* implicit */_Bool) arr_36 [i_11])) ? (((/* implicit */int) arr_41 [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_41 [i_10] [i_10] [i_10])))) : (((/* implicit */int) min((arr_36 [i_11]), (arr_41 [i_10] [i_11] [17]))))));
            }
        } 
    } 
}
