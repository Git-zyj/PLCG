/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16055
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
    var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)53128))));
    var_15 = ((/* implicit */_Bool) (short)3202);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_6 [(signed char)9] [(short)23] [i_2] [i_0] = ((/* implicit */unsigned short) arr_5 [i_1] [(unsigned char)2] [i_1 + 2] [7LL]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)178))));
                            var_17 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65529))) | (arr_2 [i_2] [i_2] [i_2])))));
                        }
                        var_18 = ((/* implicit */signed char) arr_10 [(unsigned char)9] [i_1] [(unsigned char)9] [(unsigned char)9] [i_3]);
                    }
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            var_19 ^= ((/* implicit */unsigned short) -679763697);
                            var_20 = max((((/* implicit */long long int) var_0)), (-1LL));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-119)) ? (((var_13) ? (arr_5 [i_0] [12] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))))) : (((0LL) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))) : (var_12)))))));
                            var_22 = ((/* implicit */int) min((((/* implicit */unsigned int) (~(var_3)))), (3920513555U)));
                        }
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            arr_18 [i_0] [20LL] [i_2] [i_5] [(unsigned char)24] [20LL] [i_0] = 1024289098;
                            var_23 -= ((/* implicit */int) var_5);
                        }
                        var_24 = ((/* implicit */unsigned int) var_9);
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_3 [18LL])))))))) != (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)24843)) : (((/* implicit */int) (short)14027))))));
                            var_26 = ((/* implicit */int) var_8);
                        }
                    }
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        arr_25 [i_0] [i_1 + 3] [i_9] [i_9] [i_1 - 1] = (+((~(((unsigned long long int) (_Bool)1)))));
                        var_27 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3920513548U)) ? (arr_24 [i_0] [i_0] [i_0] [i_0] [i_9] [2ULL]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 9223372036854775807LL)))))) : (var_12)))));
                    }
                    var_28 = ((/* implicit */signed char) min(((short)-27120), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 3] [i_0])) || (((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 + 3] [i_1])))))));
                }
            } 
        } 
    } 
}
