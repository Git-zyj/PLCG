/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105373
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
    var_18 = ((/* implicit */signed char) ((25165824) - (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) 25165824)) < (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (var_11))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) * (2609616405U)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0 - 1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - (13993197375436304005ULL)));
                    arr_10 [i_0] [i_1] [11LL] = ((/* implicit */short) ((12631974894088956893ULL) << (((/* implicit */int) var_12))));
                }
                for (long long int i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((4293918720U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39366)))));
                    var_20 = ((/* implicit */short) var_6);
                }
                for (long long int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
                {
                    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-87)) <= (var_1)));
                    var_22 = ((/* implicit */_Bool) var_11);
                }
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_3);
    var_24 += ((/* implicit */unsigned int) var_16);
}
