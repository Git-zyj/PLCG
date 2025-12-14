/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115912
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))))))) : (var_4)));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_5 [0U]))));
            arr_8 [i_0] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (signed char)6)) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)241)), (arr_0 [i_0])))))));
            var_22 = var_7;
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [(signed char)8]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) == (arr_0 [0ULL]))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)32756)) / ((-2147483647 - 1)))) >> (((((/* implicit */int) arr_2 [i_1])) + (17821)))))) : (min((((3513158224U) / (((/* implicit */unsigned int) 2147483647)))), (((/* implicit */unsigned int) ((_Bool) 7519632486130078983ULL))))))))));
        }
        for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (signed char i_4 = 2; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_2] [i_3] [i_4]))));
                        arr_15 [i_0] [(unsigned char)8] [(unsigned char)8] [i_0] [i_0] [i_4 - 2] = ((/* implicit */short) ((arr_4 [i_2] [i_3] [i_4]) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (signed char)-7)))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)44600)) ^ (((/* implicit */int) (short)8128))))) ? (max(((-2147483647 - 1)), (((/* implicit */int) (signed char)15)))) : (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) (signed char)-6))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_6 [(_Bool)1] [i_2] [i_3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)124)))))) ? (((/* implicit */int) ((((/* implicit */long long int) -278180522)) != (arr_10 [i_0] [i_2] [i_0])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_0] [i_2] [i_3])), ((unsigned short)40890))))))) : (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)10)), (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)64)) ^ (-2147483644)))) : (var_4)))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned short)6873)) : (2147483643)))) ? (((arr_4 [i_0] [i_2] [i_2]) >> (((/* implicit */int) (signed char)6)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) >> (((((/* implicit */int) (unsigned short)40890)) - (40872))))))))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((/* implicit */_Bool) 31ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_0] [i_0 + 2]))) : (((unsigned long long int) arr_12 [i_5] [i_5] [i_0 - 1]))))));
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((2147483647) / (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (1509345857U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5]))))))))))));
        }
        arr_18 [(unsigned short)4] |= ((/* implicit */unsigned short) (signed char)-16);
        arr_19 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40890)) >> (((((/* implicit */int) (unsigned short)56271)) - (56249)))))) ? (((arr_1 [i_0]) << (((/* implicit */int) arr_14 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0])))) : (((/* implicit */unsigned int) ((int) arr_9 [i_0 + 2])))));
        var_29 = ((/* implicit */_Bool) (-(((((((/* implicit */unsigned int) ((/* implicit */int) var_19))) & (arr_1 [i_0]))) >> (((((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) : (3289483337U))) - (4294967277U)))))));
    }
}
