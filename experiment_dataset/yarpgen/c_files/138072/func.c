/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138072
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
    var_16 = ((/* implicit */unsigned short) 246783656U);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_4 = 3; i_4 < 24; i_4 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)3] [(_Bool)1] [15LL]))) : (arr_13 [i_4 + 1] [12LL] [i_4 - 3] [i_4 + 1] [(short)10])))));
                                arr_16 [i_0] [i_1] [i_2 + 2] [i_1] [i_4] = (!(((/* implicit */_Bool) -3)));
                                var_18 *= ((/* implicit */long long int) ((((var_7) | (6281799786077459671LL))) > (((/* implicit */long long int) arr_9 [i_1 - 1] [i_1 + 2] [i_2 - 2] [i_4 - 1]))));
                                var_19 &= ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_10 [i_4 + 1] [i_2 - 1] [i_0])));
                            }
                            arr_17 [(short)16] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_2 - 1]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)8)))))));
                        }
                    } 
                } 
                arr_18 [i_1] = ((/* implicit */int) (short)-22753);
                var_20 -= (short)8;
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_13);
    var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (var_15)));
}
