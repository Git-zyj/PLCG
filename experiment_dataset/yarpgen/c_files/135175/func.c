/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135175
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [16LL] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 52453364U)) % (11614013798754252390ULL)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))) >> ((((-(((/* implicit */int) ((unsigned short) var_17))))) + (28870)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((min((((((/* implicit */int) var_9)) << (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0])))) == (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) var_13)))) | (max((var_6), (((/* implicit */int) var_5))))))));
        var_18 = ((/* implicit */long long int) ((6832730274955299226ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (16005760392664503154ULL)))) ? (max((var_11), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)64849)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1 - 2]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            arr_16 [i_1 + 1] [i_2] [i_3 - 1] [i_3 - 1] [i_5] [i_4] [i_5] &= ((/* implicit */unsigned int) var_1);
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_3 - 1])))));
                            arr_17 [i_1 - 2] [i_3] [i_3] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((var_3) + (9223372036854775807LL))) << (((((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_9 [i_1])) - (10933))))) - (13)))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */int) 2440983681045048441ULL);
        }
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-77))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))) | (arr_14 [i_1 + 1] [i_1]))))))));
            var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 16005760392664503175ULL)) ? (((/* implicit */unsigned long long int) ((var_1) | (((/* implicit */int) var_12))))) : (arr_8 [i_1 - 2])));
        }
    }
}
