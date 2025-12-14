/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109870
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
    var_11 *= ((/* implicit */unsigned int) var_5);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_12 += ((/* implicit */long long int) (_Bool)1);
            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (short)1024))));
        }
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_3 = 3; i_3 < 23; i_3 += 4) 
            {
                arr_9 [i_3] [(_Bool)1] [i_3 - 2] = ((/* implicit */signed char) var_2);
                arr_10 [i_3] [i_2] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_14 = (+(((/* implicit */int) var_10)));
                arr_11 [i_0] [i_0] [i_3] &= ((/* implicit */long long int) var_6);
                arr_12 [i_3] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((((((/* implicit */long long int) var_2)) % (var_9))) + (1488105268LL)))));
            }
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        {
                            arr_20 [i_0] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */unsigned char) min((((((2596868705U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)99))))) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [(unsigned short)12] [(unsigned short)12] [(unsigned short)12]))))))), ((-((-(((/* implicit */int) arr_13 [(signed char)2]))))))));
                            arr_21 [i_0] [i_2] [i_4] [i_5] [i_6] = ((/* implicit */short) var_9);
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_24 [i_0] [i_7] [(unsigned short)20] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((arr_18 [i_0] [11LL] [11LL] [i_0] [i_0] [i_7 - 1]), (max(((short)-1025), (((/* implicit */short) var_7))))))), (((((((/* implicit */_Bool) (signed char)99)) ? (831793953820325885ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6902))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (var_6)))))))));
            arr_25 [i_0] &= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_7 - 1])))))));
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_29 [i_8] = ((/* implicit */unsigned int) var_9);
            arr_30 [i_8] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)218), (((/* implicit */unsigned char) (signed char)-99)))))) & (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)16))))));
        }
        arr_31 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 4138502123U))));
        var_15 = ((/* implicit */_Bool) (-(min((-1209079386), (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_8)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 1; i_10 < 24; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    {
                        arr_41 [(signed char)7] [i_9] [i_10] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)7680), (((/* implicit */unsigned short) arr_23 [i_10 - 1] [i_10 + 1] [i_10 - 1]))))) && ((!(((/* implicit */_Bool) ((arr_14 [i_0] [i_9] [i_10]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [(short)22] [(signed char)6]))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                        {
                            arr_45 [i_9] [i_12] [i_11] [i_10 - 1] [i_10] [i_9] [i_0] = ((((6829925) % (((/* implicit */int) (signed char)98)))) == (((/* implicit */int) (short)1024)));
                            arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [i_0] [(unsigned short)11] [i_10] [i_11])))))));
                            arr_47 [i_10] [9LL] [i_12] &= ((/* implicit */unsigned long long int) var_1);
                            arr_48 [i_0] = (-(((/* implicit */int) var_4)));
                        }
                        arr_49 [i_0] [3ULL] [3ULL] [3ULL] &= ((/* implicit */_Bool) arr_3 [i_9] [i_10] [i_10]);
                    }
                } 
            } 
            var_16 &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_34 [i_9] [i_0] [i_0] [i_0])), (arr_22 [i_0])))), (((2569945815U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0] [i_9] [i_0] [i_0])))))));
            arr_50 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_37 [22ULL] [i_0] [15LL] [i_9]))) ? (((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [2])) : (((arr_37 [i_0] [i_0] [11U] [i_0]) ? (((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_37 [i_0] [i_9] [i_0] [i_9]))))));
        }
    }
    var_17 = ((/* implicit */short) min((((((((/* implicit */_Bool) var_4)) ? (4026531840U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) >> ((((+(-2123268956))) + (2123268973))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)35465)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))));
}
