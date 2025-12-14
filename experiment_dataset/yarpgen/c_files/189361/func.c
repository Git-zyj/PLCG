/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189361
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
    var_13 = ((((/* implicit */int) ((unsigned short) ((unsigned int) -2147483637)))) == (((/* implicit */int) (unsigned short)65526)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [(_Bool)0] |= ((/* implicit */unsigned short) max((((unsigned long long int) arr_6 [i_0] [12LL] [12LL] [i_2])), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_5 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0] [i_1]))))) | (((/* implicit */int) ((unsigned short) (signed char)96))))))));
                    var_14 = ((/* implicit */_Bool) max((var_14), (((((/* implicit */int) ((((/* implicit */int) (unsigned short)255)) <= (((/* implicit */int) (unsigned short)65308))))) > (min((((((/* implicit */int) (unsigned short)266)) + (128))), (((/* implicit */int) var_6))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        var_15 ^= ((/* implicit */unsigned long long int) arr_7 [i_2]);
                        var_16 = ((/* implicit */signed char) ((((arr_7 [i_3 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 2]))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65281))) - (18446744073709551615ULL))))))));
                    }
                    var_17 += (signed char)25;
                }
            } 
        } 
    } 
}
