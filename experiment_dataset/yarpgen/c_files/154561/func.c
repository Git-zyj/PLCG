/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154561
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
    var_13 += (-(((((/* implicit */unsigned long long int) (-(var_11)))) - (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) var_4)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)91)))))))) << (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))) - (40997)))));
        var_15 += (unsigned char)91;
        var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))) ^ (var_0)))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)189))))))));
        var_17 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)0])) ? (var_7) : (((/* implicit */unsigned long long int) 1508156617)))))))), (max((arr_1 [i_0]), (max((var_11), (((/* implicit */long long int) var_3))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (4089925103630707735ULL)));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        arr_13 [i_4] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)41626)) ? (4089925103630707735ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_19 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_4] [13]))) : (var_11))))));
                        var_20 = ((/* implicit */short) arr_1 [i_1]);
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_21 |= ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_1]))));
                        /* LoopSeq 2 */
                        for (signed char i_6 = 1; i_6 < 11; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)60)) ? (arr_10 [i_3 + 1] [i_5 - 1] [i_5 - 1]) : (((/* implicit */unsigned long long int) arr_1 [i_3 + 2]))));
                            var_23 += ((/* implicit */signed char) (-(((/* implicit */int) arr_19 [i_1] [i_2] [i_5] [i_5 - 1] [i_6 + 1]))));
                            arr_20 [i_1] [i_2] [i_2] [i_3 - 1] [i_5] [i_5] [i_2] = ((/* implicit */unsigned char) (-(((arr_14 [i_1] [i_1] [i_1] [i_1]) >> (((var_7) - (12308526750739885407ULL)))))));
                            var_24 = ((/* implicit */int) (unsigned char)189);
                        }
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1]))));
                            arr_24 [i_1] [i_2] [7LL] [i_5 - 1] [i_1] [4LL] [2LL] = ((((/* implicit */_Bool) arr_12 [i_1] [i_7] [i_5 - 1])) ? (arr_12 [i_1] [i_2] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [(unsigned char)12] [i_3] [i_5 - 1] [i_3 - 1] [i_3 + 2]))));
                        }
                        arr_25 [i_1] [i_2] [i_3] [9ULL] |= var_12;
                    }
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3 + 1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_3 + 3])))));
                    var_27 = ((/* implicit */signed char) (+(arr_14 [i_1] [i_3 + 1] [i_1] [i_1])));
                }
            } 
        } 
        var_28 = ((/* implicit */long long int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])))));
        arr_26 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]))) : (var_6)))) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_1])) : ((+(((/* implicit */int) arr_0 [i_1]))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(8208185219539447456LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9] [i_9] [i_10]))) : (((arr_30 [i_9] [(unsigned char)13] [8ULL]) ? (arr_28 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9] [2LL])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            {
                                arr_39 [(unsigned short)8] [i_10] [(unsigned short)8] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_32 [i_10 + 1] [i_9] [i_10 - 1] [i_10 - 1]), (arr_32 [i_10 + 1] [i_9] [i_10 - 1] [i_10 - 1]))))));
                                var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_9] [i_9]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 *= ((/* implicit */unsigned char) (-(((arr_33 [i_8]) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_8])))))));
        var_32 = ((/* implicit */unsigned int) min((min((8208185219539447456LL), (((/* implicit */long long int) arr_38 [i_8] [5ULL] [i_8] [i_8] [i_8] [i_8] [i_8])))), ((-(var_10)))));
        arr_40 [i_8] [i_8] = ((/* implicit */int) arr_28 [(_Bool)1]);
        arr_41 [8U] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_27 [i_8] [i_8])), (((arr_30 [i_8] [i_8] [i_8]) ? (((/* implicit */long long int) arr_28 [i_8])) : (var_10))))))));
    }
    var_33 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) var_5)), (var_6)))))), (((((var_7) > (((/* implicit */unsigned long long int) var_4)))) ? (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) min((var_11), (var_8))))))));
}
