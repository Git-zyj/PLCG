/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103044
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_4))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min((((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) var_10)))))))), (((/* implicit */unsigned int) max(((short)32746), (((/* implicit */short) (unsigned char)53)))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            var_16 = ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0]))) ? (((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_0])))) : (((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_0])))));
            arr_7 [i_0] [8LL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_7)))))))) + (max((arr_5 [i_1 + 1] [i_1] [(short)9]), (((/* implicit */long long int) arr_6 [i_1 - 3]))))));
            arr_8 [(unsigned short)0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_1 - 3])))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 2])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_1 - 4]))))));
        }
        for (int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_12 [i_0] [0] [i_2] &= ((/* implicit */unsigned short) (((-(arr_1 [i_2]))) - (((/* implicit */long long int) ((/* implicit */int) min((min((var_14), (((/* implicit */unsigned short) arr_0 [i_2] [i_2])))), (((/* implicit */unsigned short) var_13))))))));
            arr_13 [i_0] = ((/* implicit */short) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_9 [i_0]))))) / (((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */long long int) var_4)) : (var_1)))))));
        }
        arr_14 [i_0] = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) 0LL)) * (0ULL)))));
        var_17 = ((/* implicit */signed char) var_0);
    }
    for (short i_3 = 3; i_3 < 9; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (int i_5 = 2; i_5 < 11; i_5 += 2) 
            {
                {
                    arr_21 [i_4] = ((/* implicit */int) max((arr_19 [i_3 + 2]), (((((/* implicit */int) arr_19 [i_3 + 2])) >= (((/* implicit */int) arr_19 [i_3 + 2]))))));
                    arr_22 [i_4] [i_4] [i_5 + 1] = ((/* implicit */long long int) (!(((arr_17 [i_5 - 2]) >= (((/* implicit */unsigned long long int) var_9))))));
                    arr_23 [(short)3] [8ULL] [i_4] = ((/* implicit */long long int) arr_6 [i_4]);
                }
            } 
        } 
        arr_24 [i_3] [4ULL] &= ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_16 [i_3 + 2])), (arr_0 [12U] [12U])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(signed char)0] [(signed char)0])))))));
        var_18 += ((/* implicit */unsigned short) min((((/* implicit */short) arr_16 [i_3 + 3])), (arr_6 [i_3 + 2])));
        /* LoopNest 2 */
        for (unsigned short i_6 = 2; i_6 < 11; i_6 += 4) 
        {
            for (unsigned short i_7 = 1; i_7 < 10; i_7 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_25 [i_3 + 1] [i_7 + 1] [i_3 + 1]))))), ((((+(((/* implicit */int) arr_16 [i_3 + 2])))) * (((/* implicit */int) arr_6 [i_3 - 2]))))));
                    var_20 = ((/* implicit */long long int) min((var_20), (min((((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_3] [i_6] [2])) << (((((/* implicit */int) arr_27 [(unsigned short)3] [1] [i_7 + 1])) - (27563)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((var_4) - (681148332)))))) : (((arr_1 [i_3]) | (var_5))))), (max((arr_29 [i_3 - 3] [i_6 - 1]), (((/* implicit */long long int) (~(var_3))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((/* implicit */int) arr_27 [i_8] [i_6 + 1] [i_3 + 2])) ^ (((/* implicit */int) arr_27 [i_7] [i_7] [i_3 + 2])))) & ((~(((/* implicit */int) arr_27 [11U] [i_7] [i_3 + 3])))))))));
                        arr_32 [i_3] [i_6] [i_6 - 1] [i_7] [i_8] [i_7] = ((/* implicit */unsigned int) arr_20 [i_6 + 1] [i_7] [(short)3]);
                        arr_33 [i_3 + 2] [i_7] [6ULL] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_31 [i_3] [(short)2] [6U] [i_8])) ? (((/* implicit */int) arr_6 [7ULL])) : (((/* implicit */int) arr_30 [i_3] [i_6 - 2] [i_7] [3])))), (((/* implicit */int) var_2))))) ? (max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) var_8)) ? (arr_5 [i_3] [i_3] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_7]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_3 + 3] [i_7 + 1])))));
                        arr_34 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (arr_5 [i_3] [6LL] [i_3])))) ? (max((((/* implicit */long long int) arr_0 [i_7] [(_Bool)1])), (var_5))) : (((/* implicit */long long int) (+(((/* implicit */int) var_13)))))))) ? (((((/* implicit */_Bool) arr_1 [i_3 + 2])) ? (arr_1 [i_3 + 3]) : (arr_1 [i_3 + 1]))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)60)))))));
                    }
                    for (int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_22 -= ((/* implicit */short) var_13);
                        arr_39 [i_3 - 1] [(unsigned char)7] [i_7] [i_9] [(short)8] [i_7] = ((/* implicit */int) max((((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_26 [i_3] [i_7])))) && (((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) 0ULL))))))), (arr_27 [i_3] [1LL] [i_3])));
                        var_23 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_2 [i_6]) : (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((((_Bool)1) ? (min((10ULL), (18446744073709551614ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_40 [(short)11] [i_6] [i_7] [7ULL] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_7])))))));
                    }
                    arr_41 [i_3] [i_7] = ((/* implicit */unsigned int) arr_29 [i_6] [i_7]);
                }
            } 
        } 
    }
    for (short i_10 = 3; i_10 < 9; i_10 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                for (unsigned short i_13 = 3; i_13 < 10; i_13 += 2) 
                {
                    {
                        arr_52 [i_13] [i_12] [i_12] [i_10] [i_10] = ((/* implicit */unsigned short) arr_0 [i_12] [i_12]);
                        arr_53 [i_10] [i_11] [i_12] [i_10] [i_10] [i_13 - 3] = (i_12 % 2 == zero) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_12]))) : (arr_29 [i_11] [i_11]))) << (((((/* implicit */int) arr_3 [i_12])) - (7818)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_12]))) : (arr_29 [i_11] [i_11]))) << (((((((/* implicit */int) arr_3 [i_12])) - (7818))) - (38926))))));
                        arr_54 [i_12] [i_11] [i_11] = ((/* implicit */int) var_14);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_10] [i_10] [i_10] [i_10])) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_10] [i_10] [(unsigned short)0])) / (((/* implicit */int) arr_36 [(unsigned short)10] [i_10] [i_10] [i_10] [i_10 + 1] [i_10]))))) ? (((/* implicit */int) ((arr_1 [i_10]) != (((/* implicit */long long int) ((/* implicit */int) arr_20 [(signed char)0] [4LL] [i_10 + 2])))))) : (((/* implicit */int) arr_44 [i_10 + 1])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_9 [(unsigned short)4])) : (((/* implicit */int) max((arr_6 [i_10]), (((/* implicit */short) arr_25 [i_10] [i_10] [i_10]))))))))))));
        var_25 += ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_10 - 1] [i_10 - 3] [i_10 - 1]))))) != (((((/* implicit */_Bool) arr_25 [i_10 + 2] [i_10 - 2] [i_10 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_25 [i_10 - 2] [i_10 - 3] [i_10 + 2]))))));
    }
    var_26 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_1)) ? (var_11) : (var_9)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (var_4)))) : (var_1)))));
    var_27 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_14)))));
    var_28 = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */long long int) ((/* implicit */int) (short)32747))) + (-6194719999439120312LL))))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) min((var_14), (((/* implicit */unsigned short) var_12))))))))));
}
