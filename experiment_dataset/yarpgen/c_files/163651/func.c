/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163651
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) var_9))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) max((max((66309865909437227LL), (((/* implicit */long long int) arr_5 [i_0] [i_1 + 2])))), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_1 + 3] [i_2])) + (((/* implicit */int) arr_6 [i_0] [i_1 + 2] [i_2])))))));
                    var_13 ^= ((/* implicit */short) var_9);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned int) ((unsigned short) ((((26ULL) <= (((/* implicit */unsigned long long int) 66309865909437227LL)))) ? (((/* implicit */unsigned long long int) 1840228707)) : (var_10))));
                        arr_9 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */long long int) var_2);
                        arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [(signed char)16])) > (((/* implicit */int) ((short) arr_7 [23] [i_1 + 2] [i_1 + 2] [i_3] [i_3] [23])))));
                        var_15 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_8 [i_0] [i_1 - 2] [i_1 - 2]))))))) ? (((var_9) << (((41ULL) - (41ULL))))) : (((((/* implicit */_Bool) max((arr_2 [i_2]), (((/* implicit */long long int) var_4))))) ? (((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2] [i_2]))))) : (max((arr_7 [i_0] [i_0] [i_0] [(signed char)10] [i_0] [i_0]), (((/* implicit */long long int) (unsigned char)15))))))));
                        arr_11 [i_0] [23U] [(unsigned short)22] = ((/* implicit */long long int) (~((+(((/* implicit */int) (_Bool)1))))));
                    }
                    var_16 = ((/* implicit */int) min((var_16), ((~(((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 3] [23ULL])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))));
                    arr_12 [3LL] [i_1 + 2] [i_0] = (+(((/* implicit */int) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1 + 3] [i_1 + 3])))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) (-(var_2)));
}
