/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178540
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
    var_12 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)15186))))) ^ (max((((/* implicit */unsigned long long int) var_6)), (var_8))))));
    var_13 ^= ((/* implicit */short) (-(536854528U)));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3758112774U)) ? (536854515U) : (536854513U)))) ? (536854535U) : (536854500U)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) max((max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))), ((+(arr_0 [i_0 - 1])))));
        var_14 *= ((/* implicit */short) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))) ^ (((var_0) << (((((/* implicit */int) (unsigned short)63882)) - (63852))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7690)))));
        var_16 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))));
        var_17 ^= ((/* implicit */signed char) 3758112766U);
        var_18 = (+(arr_1 [4ULL]));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_2 = 2; i_2 < 7; i_2 += 1) 
        {
            arr_9 [6ULL] [8U] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_0 [(short)7]) == (((/* implicit */long long int) ((/* implicit */int) (short)-9558)))))) * (((int) var_8))));
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5))))));
            arr_10 [(unsigned short)4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1])) <= (((/* implicit */int) ((_Bool) (unsigned short)51321)))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((arr_7 [i_2 + 2]) ^ (((/* implicit */int) arr_5 [i_2 - 2])))))));
            arr_11 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2 - 2] [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_2])) : (((/* implicit */int) arr_8 [i_2 + 1] [i_1]))));
        }
        for (signed char i_3 = 1; i_3 < 6; i_3 += 1) 
        {
            var_21 -= ((/* implicit */unsigned short) arr_13 [i_3 + 2] [i_3 - 1] [i_3 + 2]);
            var_22 ^= ((/* implicit */short) 1ULL);
            var_23 = ((/* implicit */unsigned char) ((max((((var_8) ^ (arr_13 [i_3] [i_3 - 1] [i_1]))), ((-(var_4))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_3] [(unsigned short)9])))));
        }
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            var_24 = ((/* implicit */short) (((+(var_4))) ^ (((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_1])))));
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 3758112760U)) || (((/* implicit */_Bool) min((3758112742U), (3758112773U))))))))));
            var_26 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((signed char) 14021245465488290641ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12737))) : (arr_14 [i_1])))));
        }
    }
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
    {
        var_27 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((arr_7 [i_5]) + (2147483647))) << (((var_0) - (284533671U)))))) || (((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_7))))))))) ^ (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) (unsigned char)91))))) ? ((+(-30042742))) : (((((/* implicit */int) var_7)) >> (((/* implicit */int) (_Bool)1))))))));
        var_28 = ((/* implicit */_Bool) var_11);
        arr_20 [i_5] = ((/* implicit */short) ((((((/* implicit */int) arr_12 [i_5] [i_5] [i_5])) + (2147483647))) << ((((((((-2147483647 - 1)) - (-2147483621))) + (47))) - (20)))));
    }
}
