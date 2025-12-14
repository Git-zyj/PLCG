/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110066
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
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1 + 2] [i_2])) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_6 [i_0] [i_0] [i_2] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1])))));
                    var_10 = ((/* implicit */unsigned short) ((-3204643280551985661LL) - (((/* implicit */long long int) 756734501U))));
                }
            } 
        } 
        var_11 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)30156)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1]))));
    }
    var_12 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((~(756734481U))))) >= (((((3538232794U) ^ (var_6))) / (((/* implicit */unsigned int) ((/* implicit */int) (short)30156)))))));
}
