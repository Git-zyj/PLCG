/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103523
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (unsigned char)47);
            arr_5 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (((~(var_12))) | (((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned char)52))))))))));
        }
        arr_6 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) var_14);
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) (((+((-(var_13))))) & (108086391056891904LL)));
        arr_9 [i_2] = ((/* implicit */long long int) (short)-354);
    }
    for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
    {
        var_21 &= ((/* implicit */_Bool) -5130982889218150592LL);
        var_22 -= ((/* implicit */long long int) ((((9223372036854775807LL) / (var_6))) <= (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) var_2)), (var_3))))))));
        var_23 ^= ((/* implicit */unsigned char) (+(var_8)));
        arr_14 [i_3 + 1] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned char)29)) ? (var_1) : (var_17))) / (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)194), ((unsigned char)47))))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    }
    /* LoopNest 2 */
    for (unsigned char i_4 = 2; i_4 < 16; i_4 += 4) 
    {
        for (short i_5 = 1; i_5 < 15; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-101))) / ((+(max((var_14), (((/* implicit */long long int) var_11)))))))))));
                            var_25 ^= ((/* implicit */short) (~(max((arr_2 [i_4 - 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_4] [i_5] [i_6])) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) var_9)))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_8 = 3; i_8 < 16; i_8 += 2) 
                            {
                                arr_26 [i_4 - 1] [i_5] [i_6] [i_7] [i_8 + 1] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) arr_17 [i_4 + 1] [i_5 + 1] [i_7])) + (51558796U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4 - 1] [i_7] [i_7])))));
                                var_26 |= ((/* implicit */long long int) arr_18 [i_4 - 2] [i_5]);
                                var_27 = ((/* implicit */short) var_0);
                                var_28 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) (signed char)107)))) || (((/* implicit */_Bool) arr_23 [i_8 - 3] [i_8] [i_8 - 1] [i_8] [i_8 + 1] [i_8]))));
                            }
                            /* vectorizable */
                            for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                            {
                                arr_29 [i_4] [i_4] [i_5] [i_4] [i_4] [i_4 + 1] = ((/* implicit */unsigned char) (~(arr_16 [i_7])));
                                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 108086391056891887LL)) ? (((/* implicit */long long int) arr_21 [i_7])) : (var_14)))))))));
                                var_30 *= ((/* implicit */unsigned char) var_3);
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            {
                                arr_39 [i_4] [i_5] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_12] [i_10] [i_5 + 2] [i_4])) ? (var_8) : (arr_32 [i_4 - 1] [i_11] [i_10] [i_11])))) > (min((15620863226762263689ULL), (((/* implicit */unsigned long long int) var_7))))));
                                var_31 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-113)) && (((/* implicit */_Bool) (signed char)-84))))), (1073741823LL))) > (((/* implicit */long long int) 3972999314U))));
                                var_32 = ((((/* implicit */long long int) ((/* implicit */int) (signed char)76))) * (max((min((((/* implicit */long long int) (signed char)-76)), (var_8))), (((/* implicit */long long int) min((var_10), ((unsigned char)16)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
