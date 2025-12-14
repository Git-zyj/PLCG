/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153994
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
    var_18 = ((/* implicit */unsigned long long int) (+(((var_1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))) : (var_11)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_0 [i_0 - 1] [(short)6])) ? (511U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [(signed char)2]))))))))));
        var_20 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51883)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_9))))) ? (((var_0) ? (var_12) : (((/* implicit */int) arr_1 [i_0] [i_0 - 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (short)17712)) : (((/* implicit */int) (short)-14766))))))))));
        var_21 = ((/* implicit */long long int) var_10);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_22 += ((/* implicit */unsigned int) var_16);
        var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17714)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2)))) ? (((((/* implicit */_Bool) 2589360971360482095ULL)) ? (((/* implicit */int) (short)-17718)) : (((/* implicit */int) (unsigned char)212)))) : (((/* implicit */int) var_3))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) arr_3 [i_1]))));
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (unsigned short i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            {
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)64815)) ? (2589360971360482095ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37)))));
                var_26 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_9 [i_3 - 2] [i_2])) ? (arr_9 [i_2] [i_2]) : (arr_9 [i_2] [i_3 - 2])))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */int) arr_6 [i_3 + 1]);
                            var_28 *= ((/* implicit */unsigned int) 2589360971360482069ULL);
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)34007)) % (((/* implicit */int) arr_3 [i_5]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))) : (0ULL)));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_2])) ? (arr_9 [i_2] [i_2]) : (arr_9 [i_3 - 2] [i_4])))), (((long long int) arr_6 [i_2])))))));
                            arr_19 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3] [i_3 + 1])) ? (((/* implicit */int) arr_7 [i_3 + 1] [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) (unsigned short)59206))))) ? (((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_7 [i_3 + 1] [i_3] [i_3 + 1])) : (((/* implicit */int) (short)-3216)))) : (((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) arr_15 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1])) : (((/* implicit */int) (unsigned char)102))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */short) ((unsigned char) var_6));
}
