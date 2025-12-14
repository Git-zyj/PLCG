/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162920
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
    var_19 += ((/* implicit */unsigned int) max((var_13), (((/* implicit */int) (short)32767))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_20 |= ((unsigned int) 2147483648U);
        arr_2 [0ULL] [i_0] = ((/* implicit */_Bool) var_0);
        var_21 = ((/* implicit */long long int) (~(arr_0 [i_0 - 2])));
        arr_3 [10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 701013176074224750ULL)) ? (((/* implicit */int) (short)32751)) : (((/* implicit */int) (short)-32751))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        for (short i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                arr_19 [i_5] [i_2] [i_3] [i_1] [i_2 + 2] [i_2] [i_1] = ((/* implicit */unsigned int) 15724254541971798979ULL);
                                arr_20 [i_2] [i_2] [i_2] [i_2 - 1] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max(((~(-4472875324562746669LL))), (((/* implicit */long long int) min((arr_17 [i_1] [i_1] [i_1] [2ULL] [i_1]), ((_Bool)0))))))), (min((((12729939299133328586ULL) >> (((((/* implicit */int) (unsigned short)52138)) - (52127))))), (((/* implicit */unsigned long long int) 8416960874354543058LL))))));
                            }
                        } 
                    } 
                } 
                var_22 ^= ((/* implicit */unsigned char) max(((+(var_5))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2 + 3])) << (((var_15) - (4669280075847383739ULL))))))));
                var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_7 [3U] [i_1]), (((/* implicit */long long int) var_18))))), ((+(12729939299133328586ULL)))));
                var_24 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_1]))))) : (12729939299133328586ULL))), (((/* implicit */unsigned long long int) var_18))));
            }
        } 
    } 
    var_25 += ((/* implicit */long long int) (short)-6100);
}
