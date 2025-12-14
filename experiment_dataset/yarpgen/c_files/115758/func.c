/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115758
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) max((arr_0 [i_0]), (arr_1 [i_0]))))))));
        var_11 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3244940943U)) ? (((/* implicit */long long int) ((3244940941U) >> (((6116099672133000543LL) - (6116099672133000536LL)))))) : (9223372036854775794LL)))) || (((((/* implicit */int) arr_1 [i_0 + 2])) != (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [17LL]))))))));
        var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(281337537757184LL)))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_1 [i_0 - 1])))))) : (((/* implicit */int) ((unsigned short) arr_1 [i_0 + 4])))));
        var_13 = ((/* implicit */long long int) ((unsigned short) ((unsigned short) (+(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (((_Bool)1) ? (3244940943U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56206)))))) & (((((/* implicit */_Bool) -281337537757162LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1023))) : (281337537757165LL)))))) ? (((((/* implicit */_Bool) 3849414856U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned short)11] [i_1 + 1] [i_1] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_7 [i_3] [i_3] [(_Bool)1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_7 [i_0] [(unsigned short)7] [i_0] [i_0]))))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 1] [i_0 + 1])) >> (((((/* implicit */int) arr_1 [i_0])) - (38571))))) >> (((((/* implicit */int) arr_1 [(unsigned short)3])) - (38576))))))));
                        var_15 = ((/* implicit */unsigned int) min((1703230654952051648LL), (((/* implicit */long long int) (unsigned short)64508))));
                        arr_11 [i_1] [i_1] [i_2] [i_3] = ((long long int) arr_5 [i_2] [i_3]);
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))));
    var_17 = ((/* implicit */unsigned int) var_2);
    var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!((_Bool)1))))))) ? (var_2) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (var_4)))) ? (var_4) : (((6116099672133000540LL) / (((/* implicit */long long int) 356888224U))))))));
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * ((-(var_6)))))), ((((!(((/* implicit */_Bool) (unsigned short)50718)))) ? (((/* implicit */long long int) (-(var_5)))) : (max((var_4), (var_8)))))));
}
