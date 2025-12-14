/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10586
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((9902845904952253192ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92)))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] [(short)12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))))))) & (((min((2ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))) - (((/* implicit */unsigned long long int) 702174971))))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (unsigned short)32736))) >> (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)8488)) : (arr_0 [i_1]))) - (8479)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)54058)) == (((/* implicit */int) arr_1 [i_1]))))) : (var_5)));
        arr_10 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) == (((/* implicit */int) arr_1 [i_1])))))));
        arr_11 [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_3))));
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        arr_16 [(unsigned char)12] = ((/* implicit */int) (((!(((/* implicit */_Bool) (short)-8469)))) || (((/* implicit */_Bool) var_2))));
        arr_17 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1832046199U)) ? ((-(((/* implicit */int) (unsigned short)32210)))) : ((-(((/* implicit */int) var_0))))));
    }
    for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
    {
        arr_21 [i_3] [i_3 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) min((24ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_3]))))))))));
        arr_22 [i_3] = ((/* implicit */int) var_11);
        arr_23 [i_3] = var_10;
        /* LoopNest 3 */
        for (unsigned char i_4 = 3; i_4 < 14; i_4 += 3) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (unsigned short i_6 = 1; i_6 < 17; i_6 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 1; i_7 < 16; i_7 += 1) 
                        {
                            arr_33 [i_5] [i_5] [i_6] [i_4 + 2] [i_7] = ((/* implicit */int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7523))) : (min((2ULL), (((/* implicit */unsigned long long int) (short)2225)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) var_0))))))));
                            arr_34 [i_3] [i_3] [i_6] [2] = ((/* implicit */short) ((unsigned long long int) ((arr_32 [i_6] [i_6 + 1] [i_6] [i_6] [i_7] [i_7]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_32 [i_6] [i_6 + 1] [i_6] [i_6] [8U] [i_6])))));
                            arr_35 [i_3] [i_4 - 1] [i_6] [i_7] = ((/* implicit */signed char) (+(232253738)));
                            arr_36 [i_3] [i_6] [i_5] [i_7] [i_7 + 1] = ((/* implicit */unsigned int) min((min((18446744073709551615ULL), (arr_30 [i_7] [i_7] [i_7] [i_7 + 1] [i_7 + 1]))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)106))))));
                            arr_37 [i_6] [i_4] [i_6] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)64018)) + (((/* implicit */int) arr_20 [i_4 + 3]))))) ? (((((/* implicit */int) arr_20 [i_7 + 2])) - (((/* implicit */int) arr_20 [i_3 - 1])))) : (((/* implicit */int) arr_20 [i_6 + 1]))));
                        }
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            arr_40 [i_6] [i_6] [i_3] [i_3] [i_6] = arr_12 [i_4 + 1];
                            arr_41 [i_3 - 2] [i_5] [i_5] [i_5] [i_8] [i_3] [14] = ((/* implicit */short) ((((/* implicit */_Bool) (((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((9902845904952253192ULL) - (9902845904952253192ULL))))) >> (((8543898168757298412ULL) - (8543898168757298383ULL)))))) || ((((-(2462921117U))) < (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-2219)))))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_12 = ((/* implicit */signed char) var_11);
    /* LoopNest 3 */
    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
    {
        for (short i_10 = 1; i_10 < 13; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                {
                    arr_51 [i_9] [(signed char)10] [i_9] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)62852)) ? (((/* implicit */int) arr_5 [i_9] [i_9])) : (((/* implicit */int) (signed char)22)))) + (((/* implicit */int) (signed char)9)))))));
                    arr_52 [i_11] [i_11] &= ((/* implicit */unsigned long long int) arr_0 [i_11]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) var_11);
}
