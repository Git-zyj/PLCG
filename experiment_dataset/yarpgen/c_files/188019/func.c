/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188019
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
    var_17 = ((/* implicit */unsigned char) var_7);
    var_18 = ((/* implicit */unsigned long long int) (unsigned char)36);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */signed char) ((((1908829081671830563LL) / (((((/* implicit */_Bool) var_11)) ? (-1908829081671830563LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)34))))))) <= (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_5 [i_1 + 3] [i_1 + 2] [i_1 - 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) << ((((((_Bool)1) ? ((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) : (((/* implicit */int) (unsigned short)13941)))) + (50654)))));
                }
                arr_7 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 + 2] [i_1 - 1])) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51594)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                {
                    arr_18 [i_3 + 1] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) (short)23691);
                    /* LoopSeq 2 */
                    for (signed char i_6 = 2; i_6 < 11; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))));
                        arr_21 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51592)) ? (((/* implicit */int) arr_1 [i_3 + 1])) : (((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) arr_9 [(signed char)7] [(signed char)7])) : (((/* implicit */int) (signed char)42))))));
                    }
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        arr_24 [i_3] [i_4] [i_5] [i_7] = ((/* implicit */unsigned short) 3660530679431008027ULL);
                        var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [(unsigned char)4] [i_7])) : (((/* implicit */int) arr_19 [i_3] [i_4] [i_3] [i_7]))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)13961)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((-(856684251498706004LL)))));
                    }
                    var_24 = ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [(_Bool)1] [i_5] [i_4] [i_3 - 1]))));
                }
            } 
        } 
        arr_25 [i_3 - 1] = ((/* implicit */long long int) arr_19 [i_3] [i_3] [i_3] [i_3 + 1]);
    }
    var_25 = ((/* implicit */_Bool) var_0);
}
