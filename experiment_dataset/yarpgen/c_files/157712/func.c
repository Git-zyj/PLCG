/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157712
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
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((var_0) || (((/* implicit */_Bool) var_5)))))))));
    var_19 = ((/* implicit */unsigned short) (((-(min((1006986247102282079ULL), (((/* implicit */unsigned long long int) var_15)))))) ^ (((/* implicit */unsigned long long int) ((unsigned int) var_4)))));
    var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) 0)) ? ((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))))) : (((int) 12266187685005944006ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)53)) ? (((3662813066895378085ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((unsigned long long int) var_9))))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1 - 1]))) ^ (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [2ULL]))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [(unsigned char)0])))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) var_0);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((unsigned long long int) arr_4 [i_0 - 3] [i_3])))));
                        arr_10 [i_0 + 3] [i_0] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [(signed char)14] [i_1 + 3])) & (((/* implicit */int) arr_8 [i_2 + 1] [i_0] [i_0] [i_0]))));
                    }
                    var_24 = ((/* implicit */_Bool) 10416350716132778353ULL);
                    arr_11 [(unsigned char)9] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39))) < (18446744073709551612ULL)));
                }
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned short)64818)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24145))) : (7405236955789993992ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64819))))))))));
                    var_26 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_4] [14U] [(signed char)6])) ? (arr_14 [14U]) : (((/* implicit */unsigned long long int) var_10))))) ? (var_7) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)120)))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) 8030393357576773262ULL))) : (((((/* implicit */_Bool) arr_3 [i_1 + 3])) ? (10416350716132778353ULL) : (min((((/* implicit */unsigned long long int) arr_12 [i_0] [(unsigned short)8] [i_4])), (18446744073709551610ULL)))))));
                }
                /* vectorizable */
                for (long long int i_5 = 2; i_5 < 14; i_5 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5] [i_7])) ? (-4807490906059996777LL) : (((/* implicit */long long int) arr_24 [i_7]))))) ? (((/* implicit */int) arr_4 [(unsigned char)1] [i_1])) : ((~(((/* implicit */int) var_11)))))))));
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned short)0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_1] [i_0] [i_5] [i_6] [i_7])))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)202))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)21))) >= (var_15))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 3] [i_1 + 3] [i_0])) ? (-4807490906059996763LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                    var_29 = ((/* implicit */unsigned long long int) ((int) 3ULL));
                }
                for (long long int i_8 = 2; i_8 < 14; i_8 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 3; i_10 < 15; i_10 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_8 - 2] [(unsigned char)2] [i_8] [i_8] [i_8 + 2] [i_8 + 2])) + (((/* implicit */int) (unsigned char)230))))) ? (((/* implicit */int) ((signed char) 2907788250U))) : (((/* implicit */int) max((arr_20 [i_8] [0LL] [i_8] [i_8 + 2] [i_8 + 1] [i_8 - 2]), (arr_20 [i_8] [12] [i_8] [i_8] [i_8 + 2] [i_8 - 1])))))))));
                                var_31 -= ((/* implicit */signed char) (~(((((2907788250U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 3] [(_Bool)1] [(_Bool)1] [i_10]))))) ? (min((1387179030U), (((/* implicit */unsigned int) (unsigned char)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)21713)))))));
                            }
                        } 
                    } 
                    arr_33 [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) arr_0 [i_0]);
                }
                var_32 = ((/* implicit */unsigned short) var_11);
                var_33 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [(unsigned short)4] [i_1] [i_1 + 3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [(unsigned short)12]))))) ? ((-(((/* implicit */int) var_12)))) : (1008398107))), (((/* implicit */int) ((unsigned short) min((arr_28 [(unsigned char)4]), (((/* implicit */unsigned char) arr_21 [6LL]))))))));
            }
        } 
    } 
}
