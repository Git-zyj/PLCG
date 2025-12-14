/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164421
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) -2147483641)) : (var_5)))), ((~(var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_8) == ((~(((/* implicit */int) (unsigned char)231)))))))) : (((((/* implicit */_Bool) var_18)) ? (min((((/* implicit */long long int) var_15)), (var_7))) : (((/* implicit */long long int) (+(((/* implicit */int) var_16)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = 1756857509U;
                    arr_9 [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned char)238))))));
                    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (((~(((/* implicit */int) var_9)))) ^ (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_16)))))))), (((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))) : (arr_5 [0ULL] [(unsigned char)0] [i_2])))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6646197273248578146ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (18446744073709551615ULL)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        var_22 = arr_10 [16U];
        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(arr_11 [i_3] [i_3])))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)8)) ? (var_8) : (((/* implicit */int) (unsigned char)243))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)243))))) : (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_10 [i_3])))))));
    }
    for (unsigned char i_4 = 2; i_4 < 13; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            for (unsigned int i_6 = 3; i_6 < 14; i_6 += 3) 
            {
                {
                    var_23 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_14 [i_4 + 3])) ? (((((/* implicit */_Bool) 4255028997U)) ? (((/* implicit */unsigned long long int) 4255028997U)) : (18446744073709551593ULL))) : (var_17)))));
                    var_24 ^= ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_17 [i_4] [14] [i_6 + 1]))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_16 [i_4 + 2])) ? (arr_14 [i_4 + 2]) : (((/* implicit */unsigned long long int) ((var_5) << (((((/* implicit */int) (unsigned char)255)) - (232)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_17 [i_4] [i_4 + 1] [i_4]))))) ? (((((/* implicit */_Bool) arr_16 [4U])) ? (arr_19 [i_4] [i_4] [i_4 + 3] [i_4]) : (((/* implicit */unsigned long long int) var_8)))) : (arr_14 [i_4 + 2])))));
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)247)))) ? (((unsigned long long int) ((arr_10 [i_4]) >= (arr_20 [i_4])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) : (547608330240ULL)))) ? ((-(((/* implicit */int) arr_16 [i_4])))) : (((((/* implicit */_Bool) arr_21 [i_4])) ? (((/* implicit */int) arr_21 [3ULL])) : (((/* implicit */int) var_14))))))))))));
    }
}
