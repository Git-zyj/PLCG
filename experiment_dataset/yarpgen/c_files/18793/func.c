/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18793
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
    var_12 = (+(min((1047495522), (((/* implicit */int) (_Bool)1)))));
    var_13 = ((/* implicit */int) ((min((((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((var_8) < (((/* implicit */long long int) var_4))))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-8331)) : (((/* implicit */int) (short)-8331))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */signed char) (+(max((max((336922259U), (var_1))), (((/* implicit */unsigned int) (short)-8331))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (short)-8192))))))) && (((/* implicit */_Bool) (unsigned char)0))));
                    var_15 = ((/* implicit */int) min((3958045036U), (((/* implicit */unsigned int) arr_0 [i_2] [i_2]))));
                    var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [6U] [(short)0]))) : (var_1)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-77))))) : (var_2)));
                    var_17 += ((/* implicit */signed char) min((((/* implicit */long long int) ((arr_4 [i_0 - 3]) - (arr_4 [i_0 - 1])))), (((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (1012865780574269928LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)218)))))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */int) (signed char)-74)) >= (((/* implicit */int) (short)8220)))))));
        var_19 *= ((/* implicit */unsigned char) 336922290U);
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        var_20 &= ((((/* implicit */int) var_7)) - (((/* implicit */int) (short)-8331)));
        arr_14 [11U] = ((/* implicit */signed char) ((_Bool) var_1));
    }
    var_21 |= ((/* implicit */_Bool) (~(min((((/* implicit */long long int) max((var_3), (var_5)))), (var_2)))));
}
