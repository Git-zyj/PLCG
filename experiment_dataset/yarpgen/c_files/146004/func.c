/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146004
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
    var_13 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (1260083623U)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_7);
        var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((var_11) + (arr_0 [i_0] [i_0]))) : (var_1)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (+(13026354980907346531ULL)));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            var_16 |= ((/* implicit */short) (+(((/* implicit */int) arr_13 [i_2] [i_2 - 1] [i_1] [i_2] [i_2 + 2] [i_3 + 1]))));
                            var_17 = arr_8 [i_0] [i_1] [i_2] [i_4];
                        }
                        var_18 |= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)53)) + (((int) var_9))));
                        var_19 = ((/* implicit */unsigned long long int) var_2);
                        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (1260083623U)));
                        var_21 = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)9846)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128)))))) : (((unsigned int) var_8))));
                    }
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) -824365851)))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (1083315206)));
                    var_24 |= ((/* implicit */long long int) ((((unsigned int) arr_10 [i_1] [i_1] [i_1])) < (arr_11 [i_0])));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned long long int) var_3);
    var_26 = ((/* implicit */unsigned short) var_10);
}
