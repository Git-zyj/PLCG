/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179486
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
    var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) ((7088186823038668204ULL) % (((/* implicit */unsigned long long int) 4248790179U))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) ((((/* implicit */_Bool) 3171648625U)) || (((/* implicit */_Bool) arr_1 [i_0])))))));
        var_14 -= ((/* implicit */signed char) arr_1 [9ULL]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 11; i_2 += 3) 
        {
            arr_9 [i_2] [(signed char)10] [i_1] = ((/* implicit */unsigned long long int) 1123318671U);
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_1 [i_1 + 1]))));
            /* LoopSeq 4 */
            for (int i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                var_16 = ((/* implicit */signed char) (+(arr_8 [i_2] [i_2 + 1] [3U])));
                var_17 ^= ((/* implicit */short) ((signed char) ((((var_2) + (9223372036854775807LL))) >> (((7088186823038668212ULL) - (7088186823038668179ULL))))));
            }
            for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 1) 
            {
                arr_16 [i_4 + 1] [i_4] [i_4] [i_4 + 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1 + 1] [i_4 + 1]))));
                var_18 = ((/* implicit */unsigned short) (-(1123318671U)));
            }
            for (long long int i_5 = 2; i_5 < 11; i_5 += 2) 
            {
                var_19 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_2] [0ULL] [i_1 + 1])) < (-1))))) / (-2443232706097601065LL)));
                arr_19 [2LL] [i_2 + 1] [i_2] [i_2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_10 [i_5] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (2443232706097601046LL)))));
                var_20 = ((/* implicit */unsigned int) (+(var_11)));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_8))));
            }
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                var_22 ^= ((/* implicit */short) ((((-7370823530378476758LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) << (((var_7) - (879346255U)))));
                var_23 &= ((/* implicit */_Bool) 0U);
                arr_24 [i_6] [6LL] = ((/* implicit */short) (signed char)48);
                arr_25 [i_6] = ((unsigned long long int) ((((/* implicit */int) arr_18 [i_1] [i_2] [i_1] [i_1])) <= (((/* implicit */int) arr_15 [i_6 - 1] [i_1 + 1] [i_1 + 1]))));
            }
        }
        arr_26 [i_1 + 1] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)48))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)21)) ? (((((/* implicit */_Bool) arr_15 [(signed char)7] [(signed char)7] [i_1])) ? (((/* implicit */int) (short)127)) : (942803335))) : (((/* implicit */int) (signed char)15))));
    }
    for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 3) 
    {
        arr_31 [i_7 - 2] = ((/* implicit */unsigned short) var_2);
        arr_32 [i_7] = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) (+(var_6)))))));
    }
}
