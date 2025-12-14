/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156599
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_6 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (3035332477U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_3))) > (((((/* implicit */_Bool) 14672395916962649183ULL)) ? (((/* implicit */int) arr_0 [i_1] [i_1 + 2])) : (((/* implicit */int) (signed char)-107))))))))));
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-27987)) ? (((/* implicit */int) arr_2 [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((((((/* implicit */_Bool) (unsigned short)8027)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))) : (11711356852489008091ULL))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2 - 1]))) | (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56956))));
                    arr_8 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_0] [i_0 + 1])))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1 + 3] [i_2]))) > (var_6))))))));
                    var_14 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(0U)))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1] [i_2])) || (((/* implicit */_Bool) arr_5 [i_0]))))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_13)))) == (var_12)))))));
    var_16 += 1219280103U;
}
