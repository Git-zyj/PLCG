/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108279
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_3)) & (var_10)));
    var_12 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) ? (var_7) : (((/* implicit */int) ((var_8) >= (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) (~(arr_7 [i_1] [(unsigned short)8] [i_2] [i_2] [i_4 - 1] [i_0])));
                                var_14 = ((/* implicit */unsigned short) ((arr_7 [i_1] [i_4 + 2] [i_1] [i_3] [i_1] [i_1]) >= (-14)));
                                var_15 = ((/* implicit */int) var_6);
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_6 [i_0] [i_2])));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] [i_1] [(unsigned char)12] = ((/* implicit */unsigned long long int) ((unsigned short) arr_11 [i_1]));
                }
            } 
        } 
    }
    for (int i_5 = 1; i_5 < 19; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_14 [i_7])) ? (((/* implicit */int) (unsigned short)37631)) : (arr_17 [i_5] [2] [i_7])))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(var_3)))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_6] [i_6])))))))))));
                    arr_21 [(unsigned short)20] [11LL] [i_5] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5]))) == (arr_18 [i_5] [i_5 + 1])))) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) arr_20 [i_5 + 1])))) - (10904)))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            {
                                arr_29 [i_5] [0LL] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_2)) ? (arr_14 [i_5]) : (arr_14 [i_5])))));
                                var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_5 + 2] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_5 + 1] [i_5] [i_5 + 3])))))));
                                var_19 = ((/* implicit */unsigned char) var_1);
                                var_20 = max((((/* implicit */unsigned int) arr_15 [i_5] [i_5])), (((((14937692422371105906ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57634))))) ? (var_3) : (((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9] [i_8] [i_5] [i_5]))))))));
                                var_21 = arr_23 [i_8] [i_8] [i_7] [i_8] [i_9];
                            }
                        } 
                    } 
                    arr_30 [i_5 + 2] [i_5 - 1] [i_5] [i_5 + 3] = ((/* implicit */int) (+(var_3)));
                    var_22 = ((/* implicit */unsigned short) ((arr_28 [i_5 + 3] [i_6] [i_7] [i_7] [i_7]) - (((((/* implicit */unsigned long long int) ((var_8) + (((/* implicit */int) var_9))))) - (arr_28 [i_5] [i_5 + 4] [i_5 + 2] [i_5] [(unsigned short)21])))));
                }
            } 
        } 
        var_23 ^= var_6;
    }
}
