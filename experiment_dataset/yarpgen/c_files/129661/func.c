/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129661
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
    var_20 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 2]))));
        arr_2 [(short)4] &= (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (2251799813685247ULL))));
    }
    for (unsigned char i_1 = 4; i_1 < 12; i_1 += 1) 
    {
        var_22 = ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-967816210))) > (((/* implicit */int) ((short) (_Bool)1)))));
        arr_7 [i_1] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-191))))), (arr_4 [i_1]));
        var_23 = ((/* implicit */unsigned int) arr_6 [i_1 + 3]);
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 2; i_4 < 17; i_4 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_13 [i_2] [i_2] [i_4])))) < (arr_10 [i_3 - 1]))), (var_1)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_5 = 1; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_16 [i_5] [i_4 + 2] [(unsigned char)9] [i_3] [i_2] [14U]))));
                        arr_18 [i_2] [i_3] [i_4 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_5 - 1] [i_3 - 1] [i_4 - 2])) % (((((/* implicit */int) var_18)) * (((/* implicit */int) var_18))))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_9 [i_2] [i_2]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 1; i_6 < 17; i_6 += 4) /* same iter space */
                    {
                        arr_22 [i_2] [(short)16] [5U] [6ULL] = ((/* implicit */unsigned short) var_7);
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2475370934U))))));
                        arr_23 [i_2] [i_6] [i_2] [i_6 + 1] = (!(((/* implicit */_Bool) arr_20 [i_4 + 1] [i_6] [i_6 + 2] [i_6] [i_4])));
                    }
                    for (unsigned char i_7 = 1; i_7 < 17; i_7 += 4) /* same iter space */
                    {
                        var_28 ^= ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (short)9241)) : (((/* implicit */int) (signed char)127))))));
                        arr_27 [i_2] [(signed char)6] [i_4] [i_2] [i_2] [i_7] = ((/* implicit */unsigned long long int) min((max((max((((/* implicit */long long int) arr_15 [i_2] [i_2] [i_3 - 1] [i_4] [i_2])), (arr_10 [i_4]))), (((/* implicit */long long int) arr_20 [i_7 - 1] [i_7] [(unsigned char)12] [i_7 + 1] [i_7])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_13 [i_4] [i_4] [13]))))))));
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned long long int) arr_8 [i_2]);
    }
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_4))) ? ((+(((/* implicit */int) var_19)))) : (max((max((var_17), (((/* implicit */int) var_14)))), (((/* implicit */int) ((var_15) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
}
