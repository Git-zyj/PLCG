/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119954
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_10))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned int) ((unsigned char) max((arr_5 [i_0 - 2]), (arr_5 [i_0 - 1]))));
            arr_6 [i_1] &= ((/* implicit */long long int) (!(((max((arr_4 [i_0 - 1] [i_1] [i_0 - 2]), (((/* implicit */unsigned int) var_8)))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (signed char)-99)))))))));
            var_14 += ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_3 [i_0 - 1] [i_0 + 1]))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((arr_4 [i_1] [i_1] [i_0 - 2]) - (1094868260U)))))) < ((~(arr_3 [i_0 - 2] [i_1]))))))));
        }
        var_15 += max((((arr_4 [i_0 + 1] [i_0 - 2] [i_0 - 1]) * (var_5))), (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_2 [i_0 - 2]), (var_11)))) - (((/* implicit */int) (signed char)-118))))));
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    var_16 *= ((/* implicit */short) ((((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-112)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_4] [i_4])))))))) / (((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? ((+(arr_4 [i_2] [i_3] [i_4]))) : (((unsigned int) var_7))))));
                    var_17 ^= ((/* implicit */short) (-(4480510174007987992ULL)));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((17LL), (((/* implicit */long long int) (short)30840)))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63135))) : (arr_5 [i_2])))) ? (((((/* implicit */_Bool) var_9)) ? (5098048623596841446LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))))) : (min((arr_5 [i_2]), (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) arr_1 [i_2] [i_2])))))));
        var_19 |= ((/* implicit */unsigned char) ((-10LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38615)))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((((/* implicit */int) var_10)) + (((/* implicit */int) var_10)))), (((/* implicit */int) arr_10 [i_2] [i_2]))))), (((arr_8 [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-5967))))))))));
        var_21 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((min((4202536727044175653LL), (((/* implicit */long long int) (unsigned char)234)))) + (((var_6) ? (3846538865537511574LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))), (max((((unsigned long long int) (unsigned short)38615)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        var_22 = ((/* implicit */long long int) ((arr_17 [i_5]) >= (((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_17 [i_5])))));
        var_23 = ((/* implicit */unsigned char) var_6);
    }
    var_24 |= ((/* implicit */unsigned short) var_2);
}
