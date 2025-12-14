/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157581
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
    var_16 = var_9;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_6)) > (((((/* implicit */int) arr_0 [(unsigned short)9])) << (((((/* implicit */int) arr_10 [i_0] [i_1] [(signed char)14] [i_3])) + (109)))))))) + (((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [(signed char)13]))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned char) ((signed char) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_13)))))))));
                    }
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) max((((/* implicit */int) arr_9 [i_4] [i_2] [4] [i_0] [i_0])), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))));
                        arr_14 [(unsigned char)13] [i_1] [i_1] [i_2] [i_4] = ((/* implicit */int) arr_6 [i_0] [i_1]);
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                    {
                        var_20 ^= ((/* implicit */signed char) ((((var_13) ? (((/* implicit */int) arr_4 [4])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [(unsigned char)10])))) != (((/* implicit */int) ((unsigned short) (short)0)))));
                        arr_17 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_4 [i_1])))))));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            var_21 *= ((/* implicit */unsigned char) ((int) var_15));
                            arr_21 [(_Bool)1] [i_1] [i_2] [i_1] [(_Bool)1] [i_2] [i_5] |= (-(((/* implicit */int) var_15)));
                            arr_22 [i_0] [i_1] [i_2] [i_5] [(unsigned char)5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_3)) : (var_12))) != (((/* implicit */long long int) arr_1 [i_1] [i_5]))));
                        }
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            arr_27 [i_2] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned short)4] [i_5] [i_7]))) ^ (var_8)))));
                            var_22 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [16LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_12))) <= (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (arr_1 [i_0] [i_0]))))));
                            var_23 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [(unsigned short)5])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) || (((((/* implicit */int) arr_25 [i_0] [i_5] [(_Bool)1] [i_5] [(_Bool)1] [(signed char)6] [i_7])) >= (var_0)))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (var_0)))) ? (((/* implicit */int) arr_4 [i_1])) : ((~(((/* implicit */int) (short)9))))));
                        }
                        /* LoopSeq 4 */
                        for (signed char i_8 = 1; i_8 < 17; i_8 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_3) << (((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_5] [i_8])))))));
                            arr_32 [i_1] = ((/* implicit */signed char) arr_0 [i_8 + 1]);
                        }
                        for (signed char i_9 = 1; i_9 < 17; i_9 += 3) /* same iter space */
                        {
                            arr_37 [i_0] [i_1] = ((/* implicit */long long int) arr_15 [i_5] [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_9 + 1]);
                            var_26 ^= ((/* implicit */long long int) arr_33 [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 + 1]);
                            var_27 += ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
                            arr_38 [i_0] [i_2] [i_2] [i_1] [i_9] = ((/* implicit */long long int) arr_1 [i_0] [i_9]);
                        }
                        for (signed char i_10 = 1; i_10 < 17; i_10 += 3) /* same iter space */
                        {
                            var_28 &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_39 [(signed char)2] [i_0] [(signed char)2] [(signed char)2] [(_Bool)1] [(unsigned char)6])) && (arr_35 [i_0] [i_1] [i_2] [i_5] [16U])))) == ((+(((/* implicit */int) arr_12 [i_5] [i_2] [i_0] [i_0]))))));
                            arr_41 [i_1] = ((/* implicit */_Bool) ((unsigned char) var_12));
                            arr_42 [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_6)))));
                            var_29 = ((/* implicit */signed char) ((_Bool) var_15));
                            arr_43 [i_1] [i_1] [i_10 - 1] [i_1] [i_10] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-6)) ? (((/* implicit */int) (short)19)) : (((/* implicit */int) (unsigned char)107)))) != (((arr_26 [4LL] [(unsigned char)13] [i_5] [i_10]) ? (((/* implicit */int) arr_30 [i_0] [2] [i_2] [i_5] [i_10] [i_0] [i_2])) : (((/* implicit */int) arr_39 [i_0] [i_0] [(_Bool)1] [i_0] [i_1] [i_0]))))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_46 [i_1] = ((/* implicit */long long int) arr_5 [i_5] [i_11]);
                            var_30 = ((/* implicit */_Bool) ((int) arr_6 [(_Bool)1] [i_1]));
                        }
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_49 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_23 [i_0] [i_1] [(signed char)4] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) max((var_15), (((/* implicit */short) var_14))))) : (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) arr_28 [(short)2] [i_1] [i_1] [(short)2] [7U] [i_1] [(short)2])))))))));
                        var_31 ^= ((/* implicit */_Bool) ((max((((var_12) <= (((/* implicit */long long int) ((/* implicit */int) arr_47 [(_Bool)1] [i_1]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [(_Bool)1] [i_2] [i_12] [(signed char)2] [i_0] [i_1]))) != (var_12))))) ? (min((((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_2])), (((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [(signed char)10] [i_0] [i_0] [i_2] [(signed char)14] [i_12]))) : (var_8))))) : (((/* implicit */unsigned int) ((int) ((signed char) var_7))))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_12))) << (((max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) min(((signed char)-37), (((/* implicit */signed char) (_Bool)0))))))) + (56))))))));
                    }
                    for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (-((+(var_10))))))));
                        var_34 += ((/* implicit */_Bool) arr_4 [16]);
                    }
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) /* same iter space */
                    {
                        arr_55 [i_1] [i_1] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_2 [i_0] [i_0] [i_14])))) | (((/* implicit */int) ((signed char) arr_54 [i_14] [i_0])))));
                        arr_56 [(_Bool)1] [i_0] |= ((/* implicit */unsigned int) var_14);
                    }
                    for (unsigned char i_15 = 0; i_15 < 18; i_15 += 3) /* same iter space */
                    {
                        arr_61 [i_0] [i_0] [i_1] [(signed char)15] [(_Bool)1] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)170)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21095)))));
                        var_35 = ((/* implicit */signed char) var_5);
                    }
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 18; i_16 += 1) 
                    {
                        for (int i_17 = 0; i_17 < 18; i_17 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned short) arr_59 [i_17] [i_2] [(_Bool)1]);
                                var_37 = ((/* implicit */unsigned char) ((var_13) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_11 [i_0] [1] [i_2] [i_0] [i_17])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13)))), (var_3))))));
                                var_38 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_6))))))) / (((unsigned int) arr_3 [14U]))));
                                var_39 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_58 [i_1])))) <= (var_12)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
