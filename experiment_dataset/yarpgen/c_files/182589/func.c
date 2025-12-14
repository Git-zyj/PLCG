/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182589
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_14 = arr_8 [i_0] [(_Bool)1] [i_2] [(unsigned short)0];
                                var_15 = ((/* implicit */_Bool) ((signed char) (-((-(9223372036854775807LL))))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(var_12))) + (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_4])) - (((/* implicit */int) arr_1 [(unsigned short)18] [i_1])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4 - 2])) ? (((/* implicit */unsigned int) ((arr_10 [i_1] [i_1] [i_3] [i_4]) - (((/* implicit */int) arr_11 [i_0] [i_1] [(short)14] [i_1] [i_1] [i_1] [(signed char)1]))))) : (min((1322357855U), (((/* implicit */unsigned int) var_4))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)16)) : (-482713326)))) ? (((/* implicit */unsigned long long int) 1333997808U)) : (18446744073709551615ULL)))));
                            }
                        } 
                    } 
                } 
                var_17 = ((((/* implicit */int) arr_3 [i_1] [i_0] [i_0])) * ((((!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_1])))) ? (((((/* implicit */int) var_8)) - (-482713343))) : ((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) var_1))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) -2349726166668946301LL)) ? (((/* implicit */int) (short)3344)) : (((/* implicit */int) (short)6860))))))) ^ (var_9)));
}
