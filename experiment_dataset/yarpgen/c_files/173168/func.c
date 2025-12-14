/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173168
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
        var_12 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)7781))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned long long int) var_0);
                    var_14 |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7781)) || (((/* implicit */_Bool) var_10)))))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) || (((/* implicit */_Bool) arr_6 [i_0] [i_1])))))));
                    arr_9 [i_2] [i_1] [2ULL] [(_Bool)1] &= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
    {
        var_16 -= ((/* implicit */unsigned char) ((short) (short)31686));
        arr_13 [i_3] = ((/* implicit */unsigned int) (signed char)-104);
    }
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_10))));
}
