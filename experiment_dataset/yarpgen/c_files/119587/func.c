/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119587
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
    var_10 = ((/* implicit */short) min(((+(((long long int) var_6)))), (((/* implicit */long long int) (_Bool)1))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)39880)) ? (((((/* implicit */int) arr_3 [i_2 + 1] [0ULL])) % (((/* implicit */int) var_9)))) : (((/* implicit */int) var_7)))) << (((((((/* implicit */_Bool) (unsigned short)39880)) ? (((((/* implicit */_Bool) var_6)) ? (arr_7 [i_1] [(_Bool)1]) : (((/* implicit */int) (unsigned short)34786)))) : (var_3))) - (285440767))))))));
                        arr_10 [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)30750), (((/* implicit */unsigned short) arr_6 [i_2]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 75621182U)) ? (2059003239U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) <= (((/* implicit */int) var_2)))))));
                            var_13 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(1687747496))))));
                            var_14 = ((/* implicit */unsigned short) (!(var_4)));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2059003239U)) ? (var_3) : (-899055072)))) ? (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) : (((unsigned int) 1358177730070003396LL))));
                        }
                        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2 + 1] [i_2 - 1]))));
                        var_17 = ((/* implicit */unsigned char) (unsigned short)25655);
                    }
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_1] [i_1] [i_2])), (((unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) ((arr_14 [7LL] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]) + (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                }
            } 
        } 
    } 
}
