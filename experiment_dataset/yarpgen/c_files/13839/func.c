/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13839
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
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 10; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((((unsigned int) (+(((/* implicit */int) arr_0 [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_0]))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 2]))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 4; i_4 < 11; i_4 += 2) 
                        {
                            arr_14 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0 + 3] [i_1 - 1]))));
                            var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (unsigned char)119))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 2299925725904235915LL)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)15328)) && ((_Bool)0)));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned char)19))));
                        }
                        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 0ULL))));
                    }
                    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)35)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))) - (arr_2 [i_0 + 2] [i_2 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), ((!(((/* implicit */_Bool) 2U))))))))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)5946)) ? ((~(((/* implicit */int) (unsigned char)105)))) : ((-(((/* implicit */int) (unsigned short)18903))))))) - ((-(max((((/* implicit */long long int) (_Bool)1)), (144115188075855872LL)))))));
                        var_24 = ((/* implicit */long long int) 4294967295U);
                    }
                }
            } 
        } 
    } 
    var_25 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
    var_26 = ((unsigned long long int) (unsigned char)253);
}
