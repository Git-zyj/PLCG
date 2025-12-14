/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156112
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
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [4LL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 1] [i_0 - 2]))) / (((long long int) var_6))));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (~((~(arr_5 [(short)0] [i_1] [i_0 + 2]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)5] [6ULL])) ? ((((_Bool)1) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((1348702813U) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    var_18 += ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)105))));
                    var_19 = ((/* implicit */_Bool) (short)32767);
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_3 = 2; i_3 < 17; i_3 += 4) 
                {
                    arr_11 [2] = ((/* implicit */int) arr_10 [i_3 - 2] [1LL] [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 16; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 2; i_5 < 15; i_5 += 4) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_0 - 2] [i_0 - 2] [i_0 + 2]))));
                                var_21 += ((/* implicit */unsigned long long int) var_11);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = var_2;
    var_23 |= ((/* implicit */unsigned short) var_9);
}
