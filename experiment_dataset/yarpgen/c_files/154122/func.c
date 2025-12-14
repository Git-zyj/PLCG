/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154122
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */int) arr_6 [i_2] [i_2 + 1] [i_1] [i_0]);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_0] [12LL] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) -1659775545)) % (var_7)))));
                        var_13 = ((/* implicit */unsigned char) 0U);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_14 &= ((/* implicit */long long int) var_8);
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((var_7) << (((4294967288U) - (4294967261U))))))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */signed char) ((unsigned int) (+(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [1U] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239))) : (4294967295U))))));
                        arr_18 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */int) var_12);
                        arr_19 [i_0] [i_2] [i_0] [i_2] [i_5] = ((/* implicit */unsigned short) var_9);
                    }
                    var_16 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (-1120461346) : (((/* implicit */int) var_9))))), (5878233895411608207LL)))) | (max((((((/* implicit */_Bool) 11U)) ? (var_6) : (5264689454546499561ULL))), (((/* implicit */unsigned long long int) max((arr_1 [15U] [15U]), (var_10))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_9))))));
}
