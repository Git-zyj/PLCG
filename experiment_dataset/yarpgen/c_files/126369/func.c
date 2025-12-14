/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126369
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
    var_12 = ((/* implicit */unsigned long long int) (+(var_4)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_13 *= ((/* implicit */short) ((((var_3) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1])))));
        var_14 = ((/* implicit */int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23951))) : (18446744073709551615ULL)));
    }
    for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (short i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            for (unsigned char i_3 = 2; i_3 < 20; i_3 += 2) 
            {
                for (unsigned short i_4 = 3; i_4 < 22; i_4 += 2) 
                {
                    {
                        var_15 *= ((/* implicit */unsigned char) (-(0LL)));
                        var_16 &= ((/* implicit */long long int) (+(((/* implicit */int) (((~(((/* implicit */int) var_8)))) > (((((/* implicit */_Bool) 9ULL)) ? (var_10) : (((/* implicit */int) arr_3 [i_1])))))))));
                        var_17 = ((((((/* implicit */long long int) ((/* implicit */int) var_8))) > (arr_5 [i_2 - 2]))) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_7)), (arr_11 [i_1] [i_3] [i_1] [i_2])))) ? (((/* implicit */int) ((arr_9 [i_1] [4ULL] [i_3]) >= (((/* implicit */unsigned long long int) var_6))))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_4] [i_2] [i_2])))))));
                    }
                } 
            } 
        } 
        arr_12 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_1] [(signed char)18])) : (((/* implicit */int) arr_10 [i_1 + 1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 + 1])) ? (arr_2 [i_1 + 1] [i_1 + 1]) : (var_9)))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))) : ((~(14116776057685793171ULL)))))));
    }
    for (long long int i_5 = 1; i_5 < 7; i_5 += 1) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)18])))))) ? (max((var_6), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5 - 1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (max((((((/* implicit */int) arr_3 [i_5])) * (((/* implicit */int) arr_1 [14LL])))), (var_10))))))));
        var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_13 [i_5 + 3])))) ? (arr_13 [i_5]) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) >= (17688883142761690707ULL))))));
    }
}
