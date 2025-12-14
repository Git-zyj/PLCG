/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182048
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = max((arr_1 [23LL] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)32402)));
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(min((arr_1 [i_0] [i_0]), (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (unsigned short)65535))));
            var_21 *= ((/* implicit */signed char) ((unsigned long long int) var_15));
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_8 [i_1] [i_1]))));
            arr_9 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned short) arr_7 [i_2]))))) ? (((/* implicit */int) arr_7 [i_1])) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1]))))));
            var_23 = ((/* implicit */signed char) (unsigned short)1);
        }
        var_24 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 2749661206318919941ULL)) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) <= (((/* implicit */int) var_9))))) : (((((/* implicit */int) (unsigned short)31033)) * (((/* implicit */int) arr_8 [i_1] [(signed char)16]))))))));
        var_25 ^= ((/* implicit */unsigned short) (-(((((/* implicit */int) ((signed char) arr_1 [i_1] [i_1]))) / (((/* implicit */int) max(((short)120), (((/* implicit */short) arr_7 [i_1])))))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 19; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    arr_14 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned short) arr_11 [15ULL] [i_4]);
                    var_26 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_1])) ? (arr_10 [i_4] [i_3 - 2] [i_1]) : (arr_10 [i_1] [i_3 + 1] [i_4]))), (((((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_4] [5] [i_1])))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            for (unsigned char i_7 = 4; i_7 < 20; i_7 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned long long int) (unsigned short)36614);
                    var_28 = ((/* implicit */short) arr_18 [i_6] [i_6] [i_7]);
                    arr_23 [i_5] [i_5] [i_5] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((var_15) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5] [i_6])))))) ? (min((arr_15 [i_5] [i_5]), (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_21 [(unsigned short)3]), (((/* implicit */unsigned short) var_18)))))))), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153))) & (var_0)))))));
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) var_16))));
                    arr_24 [i_5] [i_6] [(short)7] [i_7] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [14] [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) 1927926452U)) : (((arr_22 [i_6] [i_5]) >> (((((/* implicit */int) var_1)) - (50))))))), (((/* implicit */unsigned long long int) max((1927926452U), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_9))))))))));
                }
            } 
        } 
        var_30 = ((/* implicit */short) ((((((18365688174078208938ULL) * (((/* implicit */unsigned long long int) arr_15 [i_5] [(short)5])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [11LL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_20 [i_5] [i_5] [i_5] [i_5])), (0ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [10]))) + (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-4096)) < (((/* implicit */int) var_6))))))))) : ((-(min((var_0), (((/* implicit */unsigned long long int) (unsigned char)31))))))));
    }
}
