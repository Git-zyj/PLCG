/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183169
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_10 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_0])) >> (((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_0]))))) ? (((arr_8 [i_2] [i_2 + 1] [i_0]) ? (((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_0])) : (((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_0])))) : (((((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_0])) << (((((/* implicit */int) (unsigned short)37626)) - (37610)))))));
                        var_11 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (2695015561851158069LL))) ? (9223372036854775807LL) : (((/* implicit */long long int) -311393108))));
                        var_12 -= ((/* implicit */signed char) ((6032479280356449602ULL) != (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_8)), (6836167383342371408LL))), (((/* implicit */long long int) (signed char)96)))))));
                    }
                    var_13 = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) var_1);
    var_15 = ((/* implicit */long long int) var_7);
}
