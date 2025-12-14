/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178530
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
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) ((short) var_4)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_10)))))) : (max((var_0), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_1))))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_10)), ((+(((((/* implicit */_Bool) arr_0 [i_0] [1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0] [19U]))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned short) ((_Bool) var_8))), (var_7))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) arr_4 [17U] [i_1]);
        var_15 = ((/* implicit */unsigned int) (-(-1)));
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_3 [i_1])) & ((+(var_11)))));
        var_16 *= ((/* implicit */unsigned char) ((arr_4 [i_1] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)3)) < (((/* implicit */int) var_1))))))));
    }
    for (int i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((unsigned int) arr_3 [i_2 + 1])) != (min((arr_1 [i_2] [i_2 + 2]), (((/* implicit */unsigned int) arr_8 [i_2 + 3])))))))));
        var_18 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned int) (signed char)30)), (var_0))) : (((/* implicit */unsigned int) -2)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_3))) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)-21228))))))))));
        arr_9 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9860))) ^ ((+(4294967295U)))));
    }
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_3]))))))))));
        arr_15 [i_3] [i_3] = ((/* implicit */signed char) (+(arr_3 [i_3])));
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    {
                        arr_22 [i_3] [i_4] [i_5] [i_3] [i_5] [i_4] = ((/* implicit */unsigned char) min((((max((((/* implicit */unsigned long long int) arr_11 [i_3] [i_3])), (arr_4 [i_6] [6U]))) > (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_3] [i_3] [i_5] [i_6]))) - (arr_20 [(unsigned short)9])))))), (((((/* implicit */_Bool) arr_16 [i_4] [i_4])) || (((/* implicit */_Bool) arr_17 [i_3]))))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(6152339208961042660ULL)))))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_16 [i_5] [i_5])) : (((/* implicit */int) arr_10 [i_5]))))))) ? ((-(466718420U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                    }
                } 
            } 
        } 
        arr_23 [i_3] [i_3] = ((/* implicit */unsigned int) (+(max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) >= (arr_20 [i_3])))), (max((var_2), (((/* implicit */int) var_8))))))));
    }
}
