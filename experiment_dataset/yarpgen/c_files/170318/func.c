/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170318
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
    var_10 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
        {
            var_11 |= ((/* implicit */long long int) arr_5 [i_0] [i_1]);
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-275047599)))) ? (((/* implicit */int) var_9)) : (arr_0 [i_0])));
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3 - 2] [i_0] [i_3] = ((/* implicit */long long int) ((arr_8 [i_1 + 1] [i_1 + 1] [i_2]) ? (arr_7 [i_0] [i_1]) : ((+(arr_1 [i_3])))));
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 2] [i_1]))) % (arr_10 [i_2] [i_2] [i_2] [i_1 - 1] [i_3 + 1])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            var_14 -= ((/* implicit */short) 275047594);
                            var_15 = ((/* implicit */_Bool) max((var_15), (arr_8 [i_1 - 1] [i_1 - 1] [i_3])));
                        }
                        var_16 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]);
                    }
                } 
            } 
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_0] [i_1] [i_1])) ? (2110962782) : (((/* implicit */int) arr_8 [14ULL] [i_1 - 1] [14ULL]))));
            arr_14 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 275047591)) || (((/* implicit */_Bool) 1508736414))));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 17; i_5 += 2) /* same iter space */
        {
            arr_19 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_13 [i_5] [i_5 + 1] [i_5] [i_5] [i_5] [i_5] [i_5 - 1]))));
            var_18 = ((/* implicit */unsigned long long int) arr_9 [12]);
            var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (arr_3 [i_5 - 1]) : (arr_3 [i_0])));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_23 [i_0] [i_6] = ((/* implicit */unsigned long long int) (unsigned short)9546);
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6 - 1] [i_6])) ? (arr_7 [i_6 - 1] [i_6 - 1]) : (arr_7 [i_6 - 1] [i_0])))) ? (((arr_7 [i_6 - 1] [i_0]) >> (((var_4) - (1841681571220729242LL))))) : (max((arr_7 [i_6 - 1] [i_0]), (arr_7 [i_6 - 1] [i_6])))));
            var_21 = ((/* implicit */int) arr_10 [(unsigned char)10] [i_6] [14] [i_0] [(unsigned char)10]);
        }
        var_22 = var_3;
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) != (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))))));
        var_24 = ((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)31109)) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)111)) == (((/* implicit */int) (_Bool)1))))))));
        var_25 = (((-(((/* implicit */int) arr_13 [i_0] [(signed char)15] [i_0] [i_0] [i_0] [i_0] [i_0])))) | (((/* implicit */int) var_9)));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 2) 
    {
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_4 [i_7 + 2] [i_7] [15ULL]))));
        var_27 = ((unsigned long long int) arr_3 [i_7]);
    }
    for (unsigned char i_8 = 2; i_8 < 14; i_8 += 2) 
    {
        var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_20 [i_8 + 1] [i_8] [i_8])), (min((((/* implicit */unsigned long long int) arr_8 [i_8 + 1] [i_8 - 1] [i_8])), (max((((/* implicit */unsigned long long int) 1736927417)), (var_5)))))));
        var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_8] [(short)3] [i_8] [i_8] [7LL] [1ULL] [(short)3])) ? (arr_1 [i_8 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_8 + 2] [i_8] [i_8])) != (((/* implicit */int) arr_6 [i_8 + 1] [i_8]))))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 2) 
    {
        arr_30 [i_9] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_20 [i_9] [i_9] [i_9])) : (((/* implicit */int) var_0)))));
        arr_31 [i_9] |= ((/* implicit */_Bool) arr_17 [(short)11] [i_9]);
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 15; i_10 += 2) 
        {
            arr_35 [(short)7] = ((/* implicit */long long int) ((int) arr_6 [i_9] [(short)9]));
            var_30 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_10] [i_10] [i_10] [4LL] [i_10])) ? (arr_10 [i_9] [i_10] [i_9] [i_10] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_9] [i_10] [i_10])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_9] [i_10] [i_10]))) : (arr_10 [i_10] [i_9] [i_9] [i_10] [i_10])));
            var_31 = ((/* implicit */signed char) arr_15 [(unsigned short)3]);
            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) max((max((arr_15 [i_9]), (((/* implicit */unsigned long long int) arr_8 [i_9] [i_9] [i_9])))), (((((/* implicit */_Bool) var_2)) ? (arr_34 [i_9] [i_10]) : (((/* implicit */unsigned long long int) arr_27 [i_10] [i_10])))))))));
        }
        var_33 = arr_28 [i_9] [i_9];
    }
    var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) var_6))));
}
