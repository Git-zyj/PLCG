/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13151
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
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((!(((/* implicit */_Bool) var_9)))), ((((_Bool)1) || (((/* implicit */_Bool) (unsigned short)21186)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)50357))))) : ((((((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) var_10)))) ? (4796742491338851300ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (arr_1 [i_2] [i_1 - 1]) : (((/* implicit */int) (signed char)-46))))) ? (((((((/* implicit */unsigned long long int) arr_10 [i_0] [(signed char)0] [i_0] [3] [i_3] [(unsigned short)10])) <= (arr_8 [i_0] [i_1] [i_2] [i_0]))) ? (((/* implicit */unsigned int) var_8)) : (arr_11 [i_0] [i_0] [i_0] [(unsigned short)7] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) == (((/* implicit */int) ((_Bool) var_14)))))))));
                        var_20 = ((/* implicit */_Bool) (~(arr_9 [i_0] [i_0])));
                    }
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_4))))) != (((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */int) var_2))))))) < ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)(-127 - 1))), (var_10)))) * (arr_2 [i_1 + 1] [i_1 + 1])))));
                        var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1 + 1] [i_0] [i_4])) ? (((/* implicit */int) arr_13 [i_0] [i_2] [i_0])) : (((/* implicit */int) var_1)))) <= (((((/* implicit */int) (signed char)(-127 - 1))) - ((-2147483647 - 1))))));
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) arr_0 [i_1] [0ULL]))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) >= (var_7))) ? (max((arr_4 [(_Bool)1] [(_Bool)1]), (((/* implicit */long long int) arr_3 [i_0])))) : (((/* implicit */long long int) (-(arr_1 [i_2] [i_4])))))) : (((/* implicit */long long int) ((((/* implicit */int) ((arr_9 [i_0] [(unsigned short)2]) == (((/* implicit */int) var_6))))) << (((/* implicit */int) arr_5 [i_0] [3ULL]))))))))));
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_25 = ((/* implicit */int) min((((unsigned char) ((((/* implicit */_Bool) 1662988886)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))), (((/* implicit */unsigned char) (signed char)(-127 - 1)))));
                            arr_18 [i_0] [i_1] [i_2] [i_0] [i_4] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1 - 1])))))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) == ((+(((/* implicit */int) (_Bool)0))))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_9 [(short)0] [i_0]) * (((/* implicit */int) (_Bool)0)))) >> (((((((/* implicit */long long int) 1048575U)) % (arr_10 [(_Bool)1] [(_Bool)1] [i_0] [i_4] [i_5] [i_5]))) - (1048553LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */unsigned long long int) var_8)) * (arr_2 [i_0] [(unsigned char)9])))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_28 = ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) - (((/* implicit */unsigned int) ((arr_3 [i_2]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))));
                        var_29 |= ((/* implicit */int) arr_15 [4] [i_2] [i_1] [i_0]);
                        var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_2] [i_6]))));
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned int) var_10);
                            arr_27 [i_0] [i_0] [i_0] [4] = ((/* implicit */signed char) (-(((long long int) (+(arr_8 [i_0] [i_1] [(unsigned short)4] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
