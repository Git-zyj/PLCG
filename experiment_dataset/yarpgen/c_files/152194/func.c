/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152194
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
    var_19 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_7) - (((/* implicit */long long int) ((int) (_Bool)1))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((arr_3 [i_0 + 1]) + (arr_3 [i_0 - 2]))))));
        var_21 = ((/* implicit */unsigned short) 1762637620518616831ULL);
    }
    for (unsigned short i_1 = 2; i_1 < 8; i_1 += 3) 
    {
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_2 [i_1]))));
        var_23 = ((/* implicit */unsigned short) ((5496824378422392728LL) << (((((((/* implicit */_Bool) arr_3 [i_1 + 3])) ? (arr_3 [i_1 - 1]) : (((/* implicit */unsigned long long int) var_3)))) - (6884502056087856319ULL)))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59324)))))))) / ((~(var_2))))))));
        var_25 ^= ((/* implicit */unsigned short) min((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_7 [(signed char)17]))))))), (((((/* implicit */_Bool) 5496824378422392737LL)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)57420)) != (((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */int) arr_8 [i_2]))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 24; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -18)) ? ((+(5496824378422392715LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [i_4]))))) != (((/* implicit */long long int) var_4))));
                        var_27 = ((/* implicit */unsigned short) var_10);
                    }
                } 
            } 
            var_28 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_15 [4]), (((/* implicit */unsigned long long int) arr_8 [i_2]))))) ? (((((/* implicit */_Bool) 5496824378422392752LL)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (signed char)104)))) : (arr_14 [i_3 + 1] [i_3 + 1] [i_3 - 1])))) >= (((long long int) ((short) var_1)))));
        }
        var_29 = ((/* implicit */_Bool) max((min((5806640880207973115ULL), (((/* implicit */unsigned long long int) (signed char)127)))), (((((/* implicit */_Bool) (short)2)) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) var_4))))));
    }
}
