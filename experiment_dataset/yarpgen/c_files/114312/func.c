/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114312
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~((-(arr_0 [i_2])))));
                    var_18 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_12) : (2147483647)))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [(unsigned short)7])) ? (((4294967295U) + (20U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                }
                for (int i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 2; i_5 < 15; i_5 += 4) 
                        {
                            {
                                var_19 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) ^ (22U)))) ? (((/* implicit */int) ((arr_13 [i_5] [i_5 - 2]) == (((/* implicit */unsigned int) arr_8 [i_5 + 1] [i_3 + 1] [6] [11]))))) : (max((arr_8 [i_5 - 2] [i_3 + 1] [i_3 + 1] [i_1]), (((/* implicit */int) (signed char)-4)))));
                                var_20 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) arr_5 [i_3] [14ULL])) ? (min((((/* implicit */unsigned long long int) (signed char)-28)), (var_5))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)253)))))))));
                                arr_16 [i_0] [i_0] [i_0] [2U] [13LL] [i_5] = min((((((/* implicit */_Bool) 4294967289U)) ? (338983284U) : (4294967289U))), ((-(arr_13 [i_1] [i_0]))));
                                arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)54)) : (arr_8 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])))) ? (((((((/* implicit */int) arr_3 [i_3] [i_3])) << (((((/* implicit */int) var_2)) - (26188))))) * (((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) var_3)))))) : (((/* implicit */int) (signed char)-4))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] [i_3 - 1] [(unsigned char)0] = ((/* implicit */unsigned char) 13331303289333682594ULL);
                    var_21 = ((((/* implicit */_Bool) (-(arr_11 [i_3] [10] [i_3] [i_3 - 1] [i_3 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((unsigned long long int) (unsigned short)65535)));
                }
                var_22 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-18))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((unsigned long long int) var_11));
}
