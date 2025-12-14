/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160515
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    arr_7 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_2] = ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (var_6));
                    arr_8 [i_2] [0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (short)1))));
                }
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
                {
                    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_0)) ? (arr_9 [10LL] [10LL] [10LL] [(unsigned short)6]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(_Bool)1] [3LL] [5LL] [(short)5]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */long long int) arr_10 [(signed char)2] [(signed char)2] [(unsigned short)3] [(signed char)2])), (var_16))) >= (((/* implicit */long long int) ((/* implicit */int) max(((short)21656), ((short)0))))))))) : (((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))));
                    var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_3] [i_3]))) : (4318429284425304161LL)))));
                    var_21 ^= ((/* implicit */_Bool) arr_1 [i_0]);
                    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)8] [i_0]))) <= (max((((/* implicit */long long int) arr_3 [i_1] [(unsigned char)1])), (var_2))))))));
                    arr_11 [(signed char)7] [(unsigned short)4] [i_0] [i_0] = ((/* implicit */_Bool) -16130736740423853LL);
                }
                for (short i_4 = 2; i_4 < 11; i_4 += 1) 
                {
                    var_23 *= ((/* implicit */unsigned char) arr_9 [(unsigned char)11] [(unsigned char)11] [(unsigned char)11] [(unsigned char)11]);
                    arr_16 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8323743703512621277LL)) ? ((-(var_0))) : (((((/* implicit */_Bool) max((arr_14 [(unsigned char)9] [(unsigned char)9]), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (var_2)))));
                }
                for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    arr_20 [4LL] [4LL] [4LL] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (signed char)-19)))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (short)-4)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_1 [i_0])));
                }
                var_25 = ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */unsigned long long int) arr_18 [(signed char)8])) * (var_13))))));
                var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-19419)), (-4318429284425304162LL)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_15)))))) : (((arr_12 [i_0] [(unsigned char)6] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1]))) : (70368744177663LL)))));
                arr_21 [10] [11LL] [(signed char)9] = ((/* implicit */unsigned long long int) ((((_Bool) (~(((/* implicit */int) arr_6 [(unsigned char)9] [(unsigned char)9] [(unsigned char)9]))))) ? (max((((/* implicit */long long int) arr_5 [i_0] [i_0] [9LL] [i_1])), (min((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0] [i_0])), (var_1))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_16))))));
            }
        } 
    } 
    var_27 -= ((/* implicit */unsigned char) max((((long long int) (unsigned char)138)), (var_17)));
    var_28 += ((/* implicit */short) (!(((/* implicit */_Bool) max((min((1360503759902892809LL), (((/* implicit */long long int) (short)-1)))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)49506))))))))));
    var_29 = max((((/* implicit */long long int) ((short) var_2))), (var_0));
}
