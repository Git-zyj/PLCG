/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11180
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
    var_14 &= ((/* implicit */int) var_7);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((-7802372474541891337LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)20216)))))));
        var_15 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned short) arr_6 [i_1]);
            var_17 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) - (arr_5 [i_1] [i_2 - 2])));
            arr_7 [i_2] [12ULL] |= ((/* implicit */unsigned short) ((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 1] [i_2 + 1])))));
            var_18 = ((/* implicit */_Bool) (+(arr_5 [i_2 - 1] [i_2 - 1])));
        }
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((((-7802372474541891321LL) + (9223372036854775807LL))) >> (((1052495953U) - (1052495912U))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_1] [i_1]))))));
    }
}
