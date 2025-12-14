/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107037
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (2147483630) : (((/* implicit */int) var_16))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4061743696738508008LL) / (((/* implicit */long long int) var_12))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))));
    }
    /* LoopNest 2 */
    for (short i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            {
                var_21 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) (signed char)83)), ((short)32753)))) == (((/* implicit */int) (!((!(((/* implicit */_Bool) var_18)))))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (-2147483631)))) ? (((/* implicit */int) var_16)) : (((((/* implicit */int) var_13)) << (((((/* implicit */int) var_16)) - (65)))))))) - (((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) (short)11690)))))) : (4294967295U)))));
                arr_7 [i_2] = (((!(((/* implicit */_Bool) 2934823125U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_18) : (((/* implicit */long long int) 4294967295U))))) ? (max((((/* implicit */unsigned long long int) 2276855698U)), (16710476736296728954ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))))))));
            }
        } 
    } 
}
