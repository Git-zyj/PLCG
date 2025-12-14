/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115951
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) : (var_16))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_1])))))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])) == (((unsigned long long int) (unsigned short)65535))))) >> (((((/* implicit */_Bool) arr_7 [(short)12])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((var_0) <= (((/* implicit */int) var_7)))))))));
            arr_9 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_7 [i_1])) : ((+(((/* implicit */int) (unsigned char)127))))))) ? (((/* implicit */unsigned int) ((int) (short)-22738))) : (max((arr_3 [i_0]), (arr_3 [i_0])))));
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((((unsigned char) min((((/* implicit */unsigned short) (short)-22738)), ((unsigned short)65524)))), (((/* implicit */unsigned char) (signed char)97)))))));
        }
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((((((/* implicit */_Bool) arr_5 [7ULL] [(signed char)8])) ? (var_8) : (((/* implicit */int) var_5)))) > (((((/* implicit */_Bool) var_11)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) var_7)))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) arr_13 [i_0]);
            arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((((/* implicit */int) (short)-29218)) == (1842122397)))))) > (((/* implicit */int) max((var_17), (arr_4 [i_2]))))));
            arr_15 [i_0] = ((((/* implicit */_Bool) ((max((((/* implicit */int) var_3)), (553424450))) / ((~(546782929)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)14969)) : (((/* implicit */int) var_6))))) : (max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_17)) : (var_0)))))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */int) (short)29214)))) >= (((/* implicit */int) arr_2 [i_2] [i_2]))))) : (((/* implicit */int) (((~(var_10))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
        }
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3]))) * (((((/* implicit */_Bool) arr_4 [i_3])) ? (var_4) : (((/* implicit */unsigned long long int) arr_0 [i_3])))))))));
        arr_18 [i_3] &= ((/* implicit */unsigned char) arr_1 [i_3]);
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -86956658)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (unsigned char)2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)147)))) : (arr_19 [i_4])));
        var_25 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)-24355)) ? (var_14) : (var_15)))));
        var_26 += ((var_8) == (((/* implicit */int) arr_12 [i_4] [i_4] [i_4])));
    }
    var_27 = ((/* implicit */unsigned char) ((int) var_16));
}
