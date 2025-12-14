/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188553
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_11 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((-3799684058609128495LL) % (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((arr_1 [i_0 + 1] [i_1]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))))) : (min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned long long int) (short)20051))))));
            var_12 = ((/* implicit */signed char) ((short) ((_Bool) arr_3 [i_0 + 1])));
            var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-458))) : (4294967295U))) : (((/* implicit */unsigned int) ((int) (short)-445)))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_4] [i_3] [i_3] [i_2] [i_0] = ((/* implicit */short) ((((1821743848590130383ULL) ^ (((/* implicit */unsigned long long int) 36028797018963967LL)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)438)))));
                            arr_17 [i_5] [i_4 + 1] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) var_8);
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_2] [i_3] [i_3] [i_4 + 1] [i_5]))) >= (660077148U)))) == (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_4 - 1]))));
                            var_15 -= ((/* implicit */int) (short)457);
                        }
                    } 
                } 
            } 
        }
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)45244), (((/* implicit */unsigned short) arr_6 [4] [i_0 + 1]))))) % (((/* implicit */int) ((arr_6 [8U] [i_0 + 1]) || (arr_6 [14U] [i_0 + 1])))))))));
    }
    var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((unsigned int) (unsigned char)0)))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-21575)) ? (((/* implicit */long long int) -262597194)) : (3799684058609128495LL))) % (((/* implicit */long long int) ((/* implicit */int) ((1LL) < (((/* implicit */long long int) var_9)))))))))));
}
