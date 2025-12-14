/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169805
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
    var_17 = ((/* implicit */signed char) var_1);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 18446744073709551615ULL))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((var_9) >> (((var_16) - (8940707474995608238ULL))))));
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) (-(18446744073709551602ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26098))) : (18446744073709551602ULL)))));
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */long long int) ((unsigned long long int) arr_11 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [15U] [i_2 - 1]));
                }
                arr_14 [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) arr_3 [i_1] [i_1 + 1])))));
                var_21 = ((/* implicit */long long int) 4628808021141781061ULL);
                arr_15 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_1 - 2]);
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned long long int) 18446744073709551615ULL)))));
                                arr_24 [i_0] [i_1] [i_5] [9ULL] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2011177052)) ? (5085712398026729787LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28012)))));
                                arr_25 [i_6] [i_1 + 1] [i_6] [i_6] [10LL] [i_1 - 2] [(unsigned char)10] = ((/* implicit */unsigned short) (unsigned char)234);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
