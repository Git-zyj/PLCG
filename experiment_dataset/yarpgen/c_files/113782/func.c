/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113782
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_1] [3LL]))));
                        var_16 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) -2863340612359874159LL))));
                        var_17 ^= ((/* implicit */short) max((((((/* implicit */_Bool) var_12)) ? (81953137974839768ULL) : (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2 - 2])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2 + 1])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_2 + 1])))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) 4256570816101854793LL));
                    }
                    arr_15 [(signed char)4] = ((/* implicit */long long int) 4294967275U);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_12);
    var_19 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_8))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) ^ (((unsigned long long int) ((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) (short)8191)) - (8164))))))));
}
