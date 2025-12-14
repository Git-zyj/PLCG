/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10368
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-8840516681706487114LL), (((/* implicit */long long int) arr_1 [i_1]))))) ? ((~(arr_1 [i_0]))) : (((/* implicit */int) ((signed char) var_3)))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 ^= ((/* implicit */unsigned long long int) min((min((min((((/* implicit */long long int) -16777216)), (var_10))), (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (var_7)))))), (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_9 [(unsigned short)2] [i_2] [i_1] [(unsigned short)2]))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))));
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((max((arr_5 [i_1]), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (((/* implicit */short) arr_7 [(_Bool)1] [i_2] [i_3])))))) : (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) (unsigned short)53555)), (var_2)))))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) min((var_9), (((/* implicit */int) var_1))))) : (((long long int) (_Bool)1))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) (~(arr_8 [i_0] [i_0])));
                        var_17 = ((/* implicit */unsigned char) (+(var_7)));
                        var_18 = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                    }
                    var_19 = ((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) (~(max((var_7), (var_9))))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */short) max((var_2), (((((/* implicit */_Bool) var_0)) ? ((-(var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 2) 
    {
        for (unsigned short i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            {
                var_21 = ((/* implicit */short) var_7);
                var_22 = (i_6 % 2 == 0) ? (((/* implicit */short) ((((((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */int) arr_17 [i_6])) : (((/* implicit */int) arr_17 [i_6])))) + (2147483647))) << (((((/* implicit */int) ((unsigned char) arr_17 [i_6]))) - (103)))))) : (((/* implicit */short) ((((((((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */int) arr_17 [i_6])) : (((/* implicit */int) arr_17 [i_6])))) - (2147483647))) + (2147483647))) << (((((((/* implicit */int) ((unsigned char) arr_17 [i_6]))) - (103))) + (49))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            {
                var_23 -= ((/* implicit */_Bool) max((arr_13 [i_7]), (max((((/* implicit */unsigned long long int) var_5)), (arr_13 [i_7])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 3; i_9 < 20; i_9 += 3) 
                {
                    var_24 &= ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))) ? (max((var_2), (((/* implicit */unsigned long long int) arr_17 [(unsigned short)2])))) : (((var_2) / (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) 2147483647)), (arr_13 [i_7])))))));
                    arr_25 [i_7] [i_7] [(_Bool)1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */unsigned long long int) var_6)) : (arr_13 [i_9]))) << (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_6)))))))) ? (((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */unsigned long long int) (+(var_9)))) : (((arr_18 [i_9]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7]))) : (arr_13 [i_9 - 1]))))) : (max((((/* implicit */unsigned long long int) (~(2041172103)))), (((((/* implicit */_Bool) 4881673904504456777LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2)))))));
                    arr_26 [i_7] [i_8] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_8])) << (((((/* implicit */int) var_4)) + (4502)))))) ? (((/* implicit */unsigned long long int) ((4881673904504456786LL) >> (((var_12) - (7980022891247266265ULL)))))) : (min((arr_13 [i_7]), (((/* implicit */unsigned long long int) (unsigned char)250)))))) | (max((min((((/* implicit */unsigned long long int) var_9)), (arr_13 [i_9]))), (((/* implicit */unsigned long long int) arr_16 [(_Bool)1] [i_8] [i_9]))))));
                }
                var_25 = ((/* implicit */short) arr_23 [i_8] [i_8] [i_8] [i_8]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 21; i_10 += 1) 
    {
        for (unsigned short i_11 = 1; i_11 < 19; i_11 += 2) 
        {
            {
                arr_31 [i_10] = ((/* implicit */int) ((long long int) min((max((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_18 [i_11])))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_22 [(short)8])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) % (var_2)));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (signed char i_14 = 1; i_14 < 18; i_14 += 4) /* same iter space */
                            {
                                var_27 = ((/* implicit */signed char) (+(var_9)));
                                var_28 = ((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_12] [i_13])) / (((/* implicit */int) arr_22 [i_14 + 1]))));
                                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_14 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11 + 2] [i_13] [i_11 + 2] [i_11 + 2]))) : (arr_36 [i_14 + 2] [i_13] [i_13] [i_14 + 3])));
                                var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) <= (2089280006))) && (((/* implicit */_Bool) arr_19 [i_11 + 2] [i_11 + 1]))));
                            }
                            for (signed char i_15 = 1; i_15 < 18; i_15 += 4) /* same iter space */
                            {
                                var_31 &= max(((-(((/* implicit */int) arr_24 [i_10] [i_15])))), ((+(((/* implicit */int) var_4)))));
                                var_32 ^= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (arr_14 [(_Bool)1] [i_15 + 3]) : (arr_14 [i_12] [i_15 + 3]))));
                            }
                            for (signed char i_16 = 1; i_16 < 18; i_16 += 4) /* same iter space */
                            {
                                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_41 [i_16] [i_16 - 1] [i_16 + 1] [i_16 + 2] [(unsigned char)4] [i_11 + 1] [i_10])), (arr_39 [i_10] [i_16 + 1] [i_11 + 1] [i_13] [i_16 + 1] [i_11 + 1])))) && (((((/* implicit */int) arr_43 [i_16 + 1])) <= (((/* implicit */int) arr_41 [(_Bool)1] [i_16 + 2] [i_16 - 1] [i_16 + 3] [(_Bool)1] [i_11 + 1] [i_10]))))));
                                var_34 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((var_7), (((/* implicit */int) var_1))))) ? (var_6) : (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-27)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_41 [i_16 + 3] [i_16 - 1] [i_10] [i_12] [i_12] [i_11 + 2] [i_10])) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_39 [i_10] [i_11 + 1] [i_11 + 1] [i_12] [i_11 + 1] [i_12])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)8706)))))))));
                                var_35 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (var_5))), (((/* implicit */long long int) max((arr_29 [i_16 + 2] [i_11 + 2]), (arr_29 [i_16 + 1] [i_11 + 1]))))));
                            }
                        }
                    } 
                } 
                var_36 = min((((((/* implicit */_Bool) arr_21 [i_11 + 2] [i_11 + 1])) ? (((/* implicit */int) arr_34 [i_11 + 1] [i_11 + 2])) : (((/* implicit */int) var_4)))), (max((arr_21 [i_11 - 1] [i_11 + 1]), (var_7))));
            }
        } 
    } 
}
