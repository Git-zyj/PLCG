/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156485
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 |= ((/* implicit */unsigned short) arr_0 [4]);
        var_13 ^= ((/* implicit */unsigned short) var_11);
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) == (96452501U))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */int) var_7)) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        arr_5 [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (-8969428931587697531LL) : (((/* implicit */long long int) arr_2 [i_1 - 1]))))) ? (((/* implicit */unsigned int) (-(arr_2 [i_1 - 1])))) : (1533211U)));
        var_16 &= ((/* implicit */int) ((unsigned long long int) ((arr_2 [i_1 + 1]) / (arr_2 [i_1 - 1]))));
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) 96452501U))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) 4198514773U)) ? (((/* implicit */int) var_7)) : ((+(((((/* implicit */_Bool) (short)331)) ? (((/* implicit */int) (unsigned short)16236)) : (arr_2 [i_1]))))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) max((var_19), (((_Bool) 3820108997U))));
                var_20 |= ((((/* implicit */_Bool) ((int) ((8759223149804676064ULL) * (((/* implicit */unsigned long long int) 4129231779U)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30729)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3]))) : (3486440281U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_10 [i_2])))))))));
                arr_11 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
            }
        } 
    } 
}
