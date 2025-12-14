/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123153
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
    var_16 &= ((((((/* implicit */_Bool) 1585366282U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (var_3)))) : (((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)27461))))) : (min((((/* implicit */unsigned int) (unsigned short)22513)), (4294967295U)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16712)) ? (((/* implicit */unsigned long long int) (-((-(2709601021U)))))) : ((-(0ULL)))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2] [i_2])) * (((/* implicit */int) ((short) var_3)))))) ? ((((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_0])))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_0 + 1])) && (((/* implicit */_Bool) arr_1 [6U]))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [2ULL] [i_0]))) + (arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967293U)))))))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned char)50), (((/* implicit */unsigned char) arr_5 [i_1 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38689))) : (((((/* implicit */_Bool) 16181433230025605842ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (14277667240849347477ULL)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_19 &= ((/* implicit */long long int) ((short) ((((((/* implicit */_Bool) 2709601001U)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (short)32760)))) >= (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_0 - 2] [i_3])))));
                                var_20 ^= ((/* implicit */unsigned char) arr_8 [(unsigned char)12]);
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-58)) ? (14277667240849347477ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) * (((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [i_0] [i_0] [i_2] [(short)0] [i_4]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_10 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_3] [i_3])))))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_2] [i_3] [i_2]))))) : ((~(arr_2 [i_0 - 1] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)64214)) - (var_3)))), ((-(var_2))))))))));
}
