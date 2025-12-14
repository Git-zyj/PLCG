/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136090
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
    var_19 = ((/* implicit */unsigned int) 8916820144316090380LL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)1)) >= (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))) ? (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned short)37527)))) : (((/* implicit */int) arr_5 [i_0 - 2] [i_0] [i_0 + 1]))));
                    var_21 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))))));
                    var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) var_13))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 13421997884603235022ULL))));
    }
    var_24 = ((/* implicit */signed char) 6756311735341557404LL);
    var_25 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) ((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned short)11139))))));
}
