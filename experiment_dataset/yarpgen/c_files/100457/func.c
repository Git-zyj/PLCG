/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100457
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((_Bool) (unsigned char)148)))) == (((/* implicit */int) ((short) var_12))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    arr_9 [i_0 - 1] [0LL] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((1025378053825903972ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21383)))));
                    arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_3 [i_0] [i_1] [(_Bool)1]))))));
                }
                for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)21383)) ^ (((/* implicit */int) var_1)))) + (((((/* implicit */int) (short)23611)) << (((arr_3 [i_0] [i_1] [i_3]) - (6360292834693429229ULL)))))))) ? ((-(var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 9; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 3; i_5 < 9; i_5 += 3) 
                        {
                            {
                                arr_17 [i_5] [i_4] [i_4] [i_3] [4LL] [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)102)) ? (max((var_12), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1] [5U] [i_1]))))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3066380309U))))))));
                                arr_18 [(short)10] [i_1] [i_4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))) > (((((((/* implicit */int) (short)29256)) > (((/* implicit */int) (unsigned short)21383)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102))) : (((16777088ULL) | (((/* implicit */unsigned long long int) -696561977)))))));
                            }
                        } 
                    } 
                }
                arr_19 [i_1] [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0 - 1] [i_0] [i_1]))))) ? (max((arr_7 [i_0 - 2] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((signed char) arr_14 [i_1] [i_1] [(_Bool)1] [i_0] [i_1]))) < (((/* implicit */int) arr_4 [i_0 - 1] [6LL] [i_1]))))))));
                var_15 = ((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)44153)) >> (((274877904896ULL) - (274877904867ULL))))) <= (((/* implicit */int) (unsigned char)154)))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */int) var_8);
}
