/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177174
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (unsigned char)165)))))) ? (((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) (unsigned char)224)))) : (((/* implicit */int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) var_1))))) && (((/* implicit */_Bool) var_10)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)224)), (345932355639794758ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) * (arr_1 [(unsigned short)0])))))) ? (min((((/* implicit */long long int) (unsigned short)65514)), (5065630536057675874LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 - 1])) * ((-(((/* implicit */int) (signed char)0)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_13)) ? (arr_5 [i_1]) : (((/* implicit */long long int) 4294967295U)))))))));
            var_22 = ((2147483647) >> (((arr_5 [i_1]) - (6811108370785481012LL))));
            var_23 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) arr_0 [(unsigned short)16] [i_1])))) && (((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_4 [i_0 + 3] [i_1]))))));
        }
        for (unsigned char i_2 = 1; i_2 < 23; i_2 += 1) 
        {
            var_24 = ((/* implicit */int) max((var_24), ((+(((/* implicit */int) ((max((345932355639794758ULL), (((/* implicit */unsigned long long int) (unsigned short)22)))) < (((/* implicit */unsigned long long int) 3460236788U)))))))));
            var_25 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 3628127659409327048LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2)))), (((((/* implicit */int) (signed char)-1)) & (((/* implicit */int) var_18))))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_1))))))) : (((arr_7 [i_2] [i_0 + 3] [i_0 + 3]) | (((/* implicit */long long int) var_6)))));
            var_26 = (~(min((var_13), ((-(((/* implicit */int) arr_2 [i_2 + 1])))))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_2 [i_0 + 2]))))) + (max((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_4 [i_0] [i_0]))))))), (((((/* implicit */_Bool) min((18446744073709551610ULL), (18100811718069756858ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) (unsigned char)177)) ? (345932355639794758ULL) : (((/* implicit */unsigned long long int) -3628127659409327049LL))))))));
        var_27 = ((/* implicit */short) var_5);
    }
    for (int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        var_28 -= ((/* implicit */short) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) arr_3 [i_3])))), ((-(((/* implicit */int) arr_3 [i_3]))))));
        var_29 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 18100811718069756855ULL)) || (((/* implicit */_Bool) (signed char)54)))) || (((/* implicit */_Bool) arr_11 [i_3])))) && ((((!(((/* implicit */_Bool) (unsigned char)18)))) || (((/* implicit */_Bool) (unsigned char)229))))));
    }
    for (int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */signed char) max((var_1), (arr_4 [i_4] [i_4])));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((345932355639794729ULL), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) (unsigned short)65506)) : (((((/* implicit */_Bool) -1543952601)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) arr_2 [i_4]))))));
        arr_17 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (arr_1 [i_4]))))))) | (max((((arr_11 [(unsigned char)12]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))))), (((/* implicit */unsigned int) max(((unsigned char)109), (arr_14 [i_4]))))))));
        var_31 = ((/* implicit */unsigned long long int) ((-3628127659409327049LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254)))));
    }
    var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) ^ (((((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35)))))) % (((/* implicit */int) min((var_11), (((/* implicit */short) var_16)))))))));
}
