/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17039
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
    var_11 = ((/* implicit */unsigned int) 1516783680);
    var_12 = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
    var_13 = ((/* implicit */unsigned short) ((5912673194520536111LL) ^ (((/* implicit */long long int) var_3))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */long long int) var_8)) - (((((/* implicit */_Bool) (short)-5)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14964)))))));
                    arr_9 [i_0] [i_0] [i_0] = (~((~(arr_2 [i_0 + 1]))));
                    var_15 ^= ((/* implicit */_Bool) (((((+(-1516783681))) + (2147483647))) >> (((arr_0 [i_0 + 1]) - (6115626069903246813LL)))));
                }
                for (short i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                    var_17 = ((/* implicit */signed char) -1516783680);
                }
                for (short i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
                {
                    var_18 -= ((/* implicit */long long int) (-((~((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_4]))))))));
                    var_19 = ((/* implicit */long long int) var_7);
                    var_20 = ((/* implicit */long long int) 9135336404581721468ULL);
                }
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) 1516783679);
                var_21 = ((/* implicit */unsigned long long int) var_2);
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (unsigned char)255);
}
