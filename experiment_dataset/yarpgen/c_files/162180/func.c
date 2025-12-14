/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162180
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
    for (signed char i_0 = 3; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)93)), (((((((/* implicit */unsigned long long int) arr_1 [(unsigned short)9])) - (arr_0 [i_0] [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (max((var_9), (max((var_12), (arr_3 [i_1] [i_0])))))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_0] [i_1] = max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (unsigned char)162)))))) * (var_12))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) | (arr_8 [i_0 - 3] [i_0] [i_0 - 3])))) ? (((/* implicit */long long int) ((int) arr_8 [i_0 - 3] [i_0 - 3] [i_0 - 3]))) : (arr_8 [i_0 - 3] [i_0 - 2] [i_0 - 3])));
                        var_19 = ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_2] [i_3]);
                        var_20 = ((/* implicit */unsigned long long int) ((int) var_11));
                    }
                } 
            } 
        }
        for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) (unsigned char)158))))), (max((((/* implicit */unsigned long long int) (unsigned char)151)), (5729409995144686899ULL))))) <= (((var_3) / (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
            arr_17 [i_0] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 + 1] [i_0] [i_0 + 1]))) - (var_11))), (((unsigned long long int) arr_7 [i_4] [i_4] [i_4 - 1])));
        }
    }
    for (signed char i_5 = 3; i_5 < 16; i_5 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238)))))));
        arr_20 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5 - 2] [i_5])) : (((arr_11 [i_5] [i_5] [i_5] [i_5] [i_5 - 2] [12LL]) << (((var_6) - (1099291157694889104ULL)))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min((min((((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (max((6621608471398995029ULL), (((/* implicit */unsigned long long int) (unsigned char)240)))))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5 - 2] [i_5 - 2] [i_5 - 2]))) == (var_9))))))))));
        var_24 = ((unsigned long long int) ((unsigned long long int) arr_18 [i_5] [i_5 - 2]));
        arr_21 [i_5] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)95)))) || (((/* implicit */_Bool) var_9)))))) / (((arr_16 [i_5] [i_5]) + (((/* implicit */unsigned long long int) arr_5 [i_5 - 1])))));
    }
    /* vectorizable */
    for (signed char i_6 = 3; i_6 < 16; i_6 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_6] [i_6 - 3])) ? (((/* implicit */unsigned int) ((var_4) - (arr_31 [(signed char)13])))) : (arr_23 [i_6])));
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            var_26 = ((/* implicit */long long int) ((signed char) ((unsigned long long int) var_10)));
                            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */unsigned int) arr_26 [i_8] [i_8])) : (arr_23 [i_6]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_10] [i_7] [i_8] [i_7])))));
                            var_28 ^= ((arr_3 [i_6 - 3] [i_6 - 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_6 - 3]))));
                            var_29 = ((var_14) * (((/* implicit */unsigned long long int) arr_22 [i_9])));
                        }
                        for (unsigned char i_11 = 4; i_11 < 15; i_11 += 1) 
                        {
                            arr_41 [(unsigned short)9] [i_6] [i_8] [i_6] [i_6] = ((/* implicit */unsigned char) arr_30 [i_11 - 2] [i_11 + 1] [i_6 - 1] [i_11 + 2] [i_6 - 1]);
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_0 [i_11] [i_7]))))))));
                            var_31 ^= ((/* implicit */unsigned short) ((unsigned char) var_16));
                        }
                        for (signed char i_12 = 0; i_12 < 17; i_12 += 2) 
                        {
                            var_32 = ((/* implicit */int) max((var_32), (-171228015)));
                            var_33 -= ((/* implicit */unsigned short) var_7);
                        }
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) arr_32 [i_6] [i_7] [8ULL]))));
                        var_35 = ((/* implicit */int) min((var_35), (((arr_25 [i_6 - 1] [i_7] [i_6 - 2]) & (((/* implicit */int) (unsigned char)10))))));
                        arr_45 [i_9] [i_6] [i_8] [i_8] [i_6] [i_6 + 1] = ((unsigned long long int) (~(var_3)));
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */unsigned long long int) ((unsigned char) arr_27 [i_6] [i_6 + 1]));
    }
    var_37 = var_16;
}
