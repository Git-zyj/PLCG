/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185882
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 35184304979968LL)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_8)), (arr_1 [i_0]))))) : ((~(-9161211946431699650LL)))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [10LL] [(signed char)0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_2 - 1]))) : (var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned char) (short)-21))))) : (min(((~(3701794830221237272LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_8))))))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) ((long long int) ((_Bool) min((((/* implicit */long long int) (short)21)), (arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4])))));
                            var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_8 [i_0] [(signed char)14] [i_2 - 1] [i_1 + 1])) * (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 1] [i_1 - 2])))) < (((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 2] [i_2 - 1] [i_1 - 2])) ? (((/* implicit */int) arr_13 [i_0] [i_1 - 2] [i_1 - 1] [i_1] [i_0] [i_0])) : (((/* implicit */int) (short)21))))));
                            arr_16 [i_0] = min(((+(3575180905U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-21))) | (var_15))))))));
                            arr_17 [i_0] [i_1] [(unsigned short)2] [i_3] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 35184304979993LL)) && (((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-103)), (var_1)))))))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 14; i_5 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */signed char) min((((long long int) ((arr_7 [i_0] [i_1] [i_3] [i_5]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_3]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_3]))))) : (7686962387422250223LL)))));
                            var_20 = ((/* implicit */_Bool) min((((/* implicit */int) min((min((((/* implicit */unsigned char) (signed char)21)), (arr_20 [9LL]))), (((/* implicit */unsigned char) var_14))))), ((+(((/* implicit */int) arr_18 [i_0] [i_3] [i_3] [i_5] [i_5] [i_5 + 1]))))));
                            arr_21 [(_Bool)1] [(_Bool)1] [i_1 + 1] [i_2 - 1] [i_3] [i_0] = ((/* implicit */signed char) (~(var_9)));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 1; i_6 < 14; i_6 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_12 [i_0] [i_3] [i_2] [i_0] [i_0])) : (((/* implicit */int) var_6))))) ? (arr_15 [i_0] [i_1 + 1] [i_1 + 1] [i_1] [i_0] [i_3]) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)46)))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_0] [10U] [i_1 + 1] [i_1 - 1] [i_6] [i_0] [i_6 + 1])) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_1 + 1] [i_2] [i_3] [i_0] [i_3])) : (((/* implicit */int) (signed char)-123))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2 - 1])) ? (((/* implicit */int) arr_6 [(signed char)13] [i_0] [i_2 - 1])) : (((/* implicit */int) (short)32767))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 3; i_7 < 14; i_7 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_24 [i_0] [i_7]), (((/* implicit */short) var_8))))) ? (((long long int) var_9)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)39)))))) && (((((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_0] [i_0])) <= (((/* implicit */int) ((unsigned short) arr_14 [i_7] [i_0] [i_2 - 1] [i_2 - 1] [i_1 + 1] [i_0] [i_0])))))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((((/* implicit */long long int) var_2)), (min((((long long int) var_14)), (((/* implicit */long long int) var_6)))))))));
                            var_26 = ((/* implicit */signed char) min((min((((unsigned char) var_2)), (((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1])) != (((/* implicit */int) (short)-26))))))), (((/* implicit */unsigned char) ((_Bool) arr_1 [i_0])))));
                        }
                        for (unsigned char i_8 = 3; i_8 < 14; i_8 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned char) 0LL);
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) var_8))));
                            arr_30 [i_0] = ((/* implicit */long long int) (short)0);
                        }
                        arr_31 [0LL] [i_0] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -35184304979969LL)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) : (3575180905U)));
                        var_29 = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */long long int) (-(arr_9 [i_0] [i_0])))), (min((7778876404644729023LL), (0LL))))));
                    }
                    for (short i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */_Bool) min((min((((/* implicit */int) (short)-18)), (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) arr_12 [i_0] [i_1 + 1] [i_2] [i_9] [i_0])))))), (((((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (signed char)-119))))) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (149)))))));
                        var_31 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_19 [i_2] [i_0] [2LL] [i_2] [i_2 - 1] [i_2 - 1] [i_2])))), (((((/* implicit */_Bool) -7749767075843011074LL)) ? (((/* implicit */int) arr_19 [i_2] [i_0] [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_27 [i_2] [i_0] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
                    {
                        arr_39 [i_0] [i_10] [i_2 - 1] [i_1] [i_1] [i_0] = ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) ^ (3688346679645404117LL))) != (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0]))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_1 - 2] [i_0] [i_10] [i_0]))) : (((((/* implicit */_Bool) 158873010U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_2] [i_10]))) : (var_13)))));
                    }
                    for (short i_11 = 0; i_11 < 15; i_11 += 4) /* same iter space */
                    {
                        var_33 = ((_Bool) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_2 - 1] [i_11])) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) (!(arr_3 [i_0]))))));
                        arr_42 [i_0] [i_1] [i_0] [i_11] = ((/* implicit */signed char) (+(min((((/* implicit */long long int) arr_33 [i_2 - 1] [i_0] [i_0] [i_0])), (((long long int) var_3))))));
                    }
                }
            } 
        } 
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_7)))) : (min(((~(var_5))), (var_13)))));
    }
    var_35 = var_3;
}
